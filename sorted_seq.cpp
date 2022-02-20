#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
	for(int i=0;i<array.size();i++){
		array[i]=array[i]*array[i];
	}
	sort(array.begin(),array.end());
  return array;
}
