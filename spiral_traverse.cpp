using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
  if(array.size==0)return {};

	vector<int> result={};
	int sr=0;
	int er=array.size()-1;
	int sc=0;
	int ec=array[0].size()-1;

	while(sr<=er && sc<=ec){
		for(int i=sc ; i<=ec ; i++){
			result.push_back(array[sr][i]);
		}

		for(int row=sr+1;row<=er;row++){
			result.push_back(array[row][ec]);
		}

		for(int col=ec-1; col>=sc;c--){

		}
	}

}
