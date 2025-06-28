//Revusive
class Solution {
  public:
    Node* rev(Node *curr,Node *prev){
        if(!curr)
        return prev;
        Node *fut=curr->next;
        curr->next=prev;
        rev(fut,curr);
    }
    Node* reverseList(struct Node* head) {
        // code here
        return rev(head,NULL);
    }
};

//Iterative
class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
      Node *curr=head,*prev=NULL,*fut=NULL;
        while(curr)
        {
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        head=prev;
        return head;
    }
};
