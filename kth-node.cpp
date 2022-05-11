#include <vector>
using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value);
  void addMany(vector<int> values);
  vector<int> getNodesInArray();
};

void removeKthNodeFromEnd(LinkedList *head, int k) {
  LinkedList *f=head;
	LinkedList *s=head;
	int count=1;
	while(count<=k){
		s= s->next;
		count++;
	}
	if(s==nullptr){
		head->value=head->next->value;
		head->next=head->next->next;
		return;
	}
	while(s->next!=nullptr){
		s=s->next;
		f=f->next;
	}
	f->next=f->next->next;
}
