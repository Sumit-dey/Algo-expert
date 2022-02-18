#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	sort(array.begin(),array.end());
	int l=0;
	int r=array.size()-1;
	vector<int> ans;


	while(l<r){
		if(array[l]+array[r]==targetSum){
			ans.push_back(array[l]);
			ans.push_back(array[r]);
			l++;
			r--;
		}
		if(array[l]+array[r]>targetSum) r--;
		if(array[l]+array[r]<targetSum) l++;

	}

  return ans;
}
