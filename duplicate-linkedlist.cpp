using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  LinkedList *currentNode= linkedList;
	while(currentNode != nullptr){
		LinkedList *nextNode=currentNode->next;

		while(nextNode != nullptr && nextNode->value == currentNode->value){
			nextNode= nextNode->next;

		}

		currentNode->next=nextNode;
		currentNode=nextNode;
	}
  return linkedList;
}
