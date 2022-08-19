using namespace std;

int levenshteinDistance(string str1, string str2) {
  int n=str2.length();
  int m=str1.length();

  vector< vector<int> > ans(n+1,vector<int>(m+1,0));

  for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
      ans[i][j]=j;
    }
    ans[i][0]=i;
  }
  for(int i=1;i<n+1;i++){
    for(int j=1;j<m+1;j++){
      if(str2[i-1]==str1[j-1]){
        ans[i][j]=ans[i-1][j-1];
      }
      else{
        ans[i][j]=1+min(ans[i-1][j-1],min(ans[i-1][j],ans[i][j-1]));
      }
    }
  }
  return ans[n][m];
}
