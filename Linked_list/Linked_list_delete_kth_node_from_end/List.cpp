/* For educational Purpose only */

#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

List::List(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}
/*
The idea here is to add the node at the end of the linkedlist
Algo:
Assign newnode next as NULL and newnode data as addData
 if List not Empty
   current points to head
   The curr traverses until the existing last node!
   The curr-> next (old Last node) points to the addData (newnode)
 else (If the list is empty)
   head is assigned as newnode (below as n)
*/
void List::addNode(int addData){
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if(head != NULL) {
        curr = head;

        while(curr->next != NULL){
            curr = curr->next;
            //cout<<"Going to end of the linkedlist";
            //cout<<"Current Data: "<<curr->data;
        }
        curr->next = n;
    }

    else {
        head = n;
    }
}

void List::delNode(int delData){

    nodePtr delPtr = NULL;
    temp = head;
    curr = head;

    while((curr->next != NULL) && (curr->data != delData)){
        temp = curr;
        curr = curr->next;
    }

    if(curr == NULL){
        cout<<delData<<"Was not found in the list"<<endl;
        delete delPtr;
    }
    else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;//Patches the hole in the List
        if(delPtr == head) {
            head = head -> next;
            temp = NULL;
        }
        delete delPtr;
        cout<<"The value " <<delData <<"  was deleted!"<<endl;
    }

}

void List::printList(){
    curr = head;

    while (curr != NULL){
        cout<<"Current data"<<curr->data<<endl;
        curr = curr->next;
    }
}

// The idea here is to remove
void List::removeKthNodefromEnd(int k){
    nodePtr fast_ptr;
    nodePtr slow_ptr;
    nodePtr temp;

    fast_ptr = head;
    slow_ptr = head;
    temp = head;
    //Move fast ptr to slow + k
    while(k > 0){
        fast_ptr = fast_ptr->next;
        k--;
    }
    while(fast_ptr->next != NULL){
        fast_ptr = fast_ptr->next;
        slow_ptr = slow_ptr->next;
    }
    temp = slow_ptr->next;
    slow_ptr->next = slow_ptr->next->next;
    delete temp;
}
