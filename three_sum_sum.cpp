#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(),array.end());
	vector<vector<int>> t;
	for(int i=0;i<array.size()-2;i++){
		int l=i+1;
		int r=array.size()-1;
		while(l<r){
			int sum=array[i]+array[l]+array[r];
			if(sum==targetSum){
				t.push_back({array[i],array[l],array[r]});
				l++;
				r--;
			}
			else if(sum<targetSum){
				l++;
			}
			else{
				r--;
			}
		}
	}

  return t;
}
