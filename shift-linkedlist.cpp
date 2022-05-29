using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    next = nullptr;
  }
};

LinkedList *shiftLinkedList(LinkedList *head, int k) {
  int len=1;
  LinkedList *temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
    len++;
  }
  temp->next=head;
  k=k%len;
  int diff=len-k;
  while(diff--){
    temp=temp->next;
  }
  head=temp->next;
  temp->next=nullptr;

  return head;

  }

