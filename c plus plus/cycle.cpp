#include<iostream>
using namespace std;

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast! = NULL && fast -> next != NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}


int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makeCycle(head,3);



    return 0;
}