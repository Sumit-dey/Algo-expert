using namespace std;

int longestPeak(vector<int> array) {
	int ans=0;

	for(int i=1;i<array.size();i++){
		int sum=0;
		if(array[i-1]<array[i] && array[i]>array[i+1] && i<array.size()-1){
			sum+=3;
			i+=2;
			while(array[i]>array[i+1]){
				sum=sum+1;
				i++;
			}
			ans=max(ans,sum);
		}
	}
  return ans;
}
