#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array){
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int start=-1,end=-1;
    int n=array.size();

    vector<int> result;

    for(int i=1;i<array.size();i++){
        if(array[i]<array[i-1]){
            start=i-1;
            break;
        }
    }
    for(int i=array.size()-1;i>=0;i--){
        if(array[i]<array[i-1]){
            end=i+1;
            break;
        }
    }
    if(end==INT_MAX)
    return {start,n-1};

    if(start==-1 && end==-1){
        return {-1,-1};
    }

    for(int i=start;i<end;i++){
        mini=min(mini,array[i]);
        maxi=max(maxi,array[i]);
    }
    for(int i=0;i<array.size();i++){
        if(array[i]>mini){
            result.push_back(i);
            break;
        }
    }
    for(int i=array.size()-1;i>=0;i--){
        if(array[i]<maxi){
            result.push_back(i);
            break;
        }
    }
    return result:



}
