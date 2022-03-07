using namespace std;

bool isMonotonic(vector<int> array) {
  if(array.size()<2) return true;
	else if(array[0]>array[array.size()-1]){
		for(int i=0;i<array.size()-1;i++){
			if(array[i]<array[i+1])return false;
		}
		return true;
	}
	else{
		for(int i=0;i<array.size()-1;i++){
			if(array[i]>array[i+1]) return false;
		}
		return true;
	}
  return false;
}
