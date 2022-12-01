#include <vector>

using namespace std;

bool sameBsts(vector<int> arrayOne, vector<int> arrayTwo) {
  sort(arrayOne.begin(),arrayOne.end());
  sort(arrayTwo.begin(),arrayTwo.end());

  for(int i=0;i<arrayOne.size();i++){
    if(arrayOne[i]!=arrayTwo[i])return false;
  }
  return true;
}
