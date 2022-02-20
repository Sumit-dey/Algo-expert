#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  sort(arrayOne.begin(),arrayOne.end());
	sort(arrayTwo.begin(),arrayTwo.end());

	int i1=0;
	int i2=0;
	int small=INT_MAX;
	int curr=INT_MAX;
	vector<int> p;
	while(i1<arrayOne.size() && i2<arrayTwo.size()){
		int fn=arrayOne[i1];
		int sn=arrayTwo[i2];

		if(fn>sn){
			curr=fn-sn;
			i2++;
		}
		else if(fn<sn){
			curr=sn-fn;
			i1++;
		}
		else{
			return {fn,sn};
		}

		if(small>curr){
			small=curr;
			p={fn,sn};
		}
	}


  return p;
}
