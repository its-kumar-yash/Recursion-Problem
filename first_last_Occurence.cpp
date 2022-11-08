#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> arr, int idx, int target){

    if(idx == arr.size()){
        return -1;
    }

    
    if( arr[idx] == target ){
        return idx;
    }
    else{
        int fiisa = firstOccurence(arr, idx + 1, target);
        return fiisa;
    }

}


int lastOccurence(vector<int> arr, int idx, int target){

    if(idx > arr.size()){
        return -1;
    }

    int liisa = lastOccurence(arr, idx + 1, target);
    if(liisa == -1){
        if(arr[idx] == target){
            return idx;
        }
        else{
            return -1; 
        }
    }
    else{
        return liisa;
    }
}


int main(){
    

    vector<int> arr = { 3,7,8,6,1,3,8,8,4,1};
    cout<<firstOccurence(arr, 0, 8);

    return 0;
}
