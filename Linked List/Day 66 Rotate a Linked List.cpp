class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        Node *curr=head,*pre;
        int c=0;
        while(curr){
            c++;
            if(!curr->next)
            pre=curr;
            curr=curr->next;
        }
        k%=c;
        if(k==0)
        return head;
        curr=head;
        while(--k){
            curr=curr->next;
        }
        Node *fut=curr->next;
        curr->next=NULL;
        pre->next=head;
        return fut;
    }
};
