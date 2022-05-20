using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    this->next = nullptr;
  }
};

LinkedList *reverseLinkedList(LinkedList *head) {
  LinkedList *previousNode= nullptr;
	LinkedList *currentNode=head;

	while(currentNode!=nullptr){
		LinkedList *nextNode=currentNode->next;
		currentNode->next = previousNode;
		previousNode=currentNode;
		currentNode=nextNode;
	}

  return previousNode;
}
