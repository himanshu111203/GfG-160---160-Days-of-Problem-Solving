class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        Node *headcopy=new Node(0);
        Node *tailcopy=headcopy,*curr=head;
        while(curr){
            tailcopy->next=new Node(curr->data);
            curr=curr->next;
            tailcopy=tailcopy->next;
        }
        tailcopy=headcopy;
        headcopy=headcopy->next;
        delete tailcopy;
        Node *curr1=head,*curr2=headcopy,*front1,*front2;
        while(curr1){
            front1=curr1->next;
            front2=curr2->next;
            curr1->next=curr2;
            curr2->next=front1;
            curr1=front1;
            curr2=front2;
        }
        curr1=head;
        while(curr1){
            curr2=curr1->next;
            if(curr1->random){
                curr2->random=curr1->random->next;
            }
            curr1=curr2->next;
        }
        curr1=head;
        while(curr1->next){
            front1=curr1->next;
            curr1->next=front1->next;
            curr1=front1;
        }
        return headcopy;
    }
};
