#include <vector>
using namespace std;

int minNumberOfCoinsForChange(int n, vector<int> denoms) {

  int dp[++n];

  dp[0]=0;
  sort(denoms.begin(),denoms.end());
  for(int i=1;i<n;i++){
    dp[i]=INT_MAX;

    for(int c: denoms){
      if(i-c < 0)break;
      if(dp[i-c]!=INT_MAX)
        dp[i]=min(dp[i],1+dp[i-c]);
    }
  }
  if(dp[--n]==INT_MAX)return -1;
  else return dp[n];
}
