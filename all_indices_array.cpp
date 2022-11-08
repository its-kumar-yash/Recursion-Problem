#include<bits/stdc++.h>
using namespace std;

// fsf - found so far
vector<int> allIndicesInArray(vector<int> arr, int target, int idx, int fsf){
    
    if(idx > arr.size()){
        vector<int> result(fsf);
        return result;
    }
    
    
    if(arr[idx] == target){
        vector<int> result = allIndicesInArray(arr, target, idx + 1, fsf + 1);
        result[fsf] = idx;
        return result;
    }
    else{
        vector<int> result = allIndicesInArray(arr, target, idx + 1, fsf);
        return result;
    }
}

int main(){
    
    vector<int> arr = {2,3,6,9,8,3,2,3,6,4};
    vector<int> final = allIndicesInArray(arr, 3, 0, 0);
    for(int i = 0; i < final.size(); i++){
        cout<<final[i]<<" ";
    }
    return 0;
}