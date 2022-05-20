#include <vector>

using namespace std;

// This is an input class. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    next = nullptr;
  }
};

LinkedList *mergeLinkedLists(LinkedList *headOne, LinkedList *headTwo) {
  // Write your code here.
	LinkedList *p1=headOne;
	LinkedList *p1Prev=nullptr;
	LinkedList *p2=headTwo;
	while(p1 != nullptr && p2!=nullptr){
		if(p1->value < p2->value){
			p1Prev=p1;
			p1=p1->next;
		}
		else{
			if(p1Prev != nullptr){
				p1Prev->next =p2;
			}
				p1Prev=p2;
				p2=p2->next;
				p1Prev->next=p1;
			}
		}
		if(p1==nullptr)p1Prev->next=p2;

		return  headOne->value < headTwo->value ? headOne : headTwo;

}
