#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

class List
{
private:
  //structure as container to store LinkedList
  typedef struct node
  {
    int data;
    node *next;
  } *nodePtr;

  nodePtr head;
  nodePtr curr;
  nodePtr temp;

public:			//This is where the functions go
    List ();
  void addNode (int addData);
  void delNode (int delData);
  void removeKthNodefromEnd(int k);
  void printList ();
};


#endif // LIST_H_INCLUDED
