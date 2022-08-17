#include <vector>
using namespace std;

int numberOfWaysToMakeChange(int n, vector<int> denoms) {

  vector<int> ways(n+1,0);
  ways[0]=1;
  for(int d:denoms){
    for(int i=1;i<=n;i++){
      if(d<=i)
      ways[i]+=ways[i-d];
    }
  }
  return ways[n];
}
