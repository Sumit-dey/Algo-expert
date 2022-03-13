#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
	int n=0;
	sort(array.begin(),array.end());
  for(int i=0;i<array.size();i++){
		if(array[i]==toMove && i<array.size()-n){
			if(array[array.size()-1-n]==toMove)return array;
			swap(array[i],array[array.size()-1-n]);
			n++;
		}
	}
  return array;
}
