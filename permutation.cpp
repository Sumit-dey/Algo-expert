#include <vector>
using namespace std;
void permutation(int i, vector<int> &arr, vector<vector<int>> &ans);

void permutation(int i, vector<int> &arr, vector<vector<int>> &ans){
  if(i==arr.size()-1)ans.push_back(arr);
  else{
     for(int j=i;j<arr.size();j++){
          swap(arr[i],arr[j]);
          permutation(i+1,arr,ans);
          swap(arr[i],arr[j]);
          }
      }
}

vector<vector<int>> getPermutations(vector<int> array) {
  vector< vector<int> > ans;
  permutation(0,array,ans);
  return ans;
}
