class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node *first=new Node(0);
        first->next=head;
        head=first;
        int x;
        Node *prev,*second,*curr,*fut;
        while(first->next){
            x=k;
            second=first->next;
            curr=first->next;
            prev=first;
            while(x && curr){
                fut=curr->next;
                curr->next=prev;
                prev=curr;
                curr=fut;
                x--;
            }
            first->next=prev;
            second->next=curr;
            first=second;
        }
        head=head->next;
        return head;
    }
};
