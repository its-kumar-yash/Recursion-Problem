#include<bits/stdc++.h>
using namespace std;

int maxofArr(vector<int> arr, int idx){

    if( idx == arr.size() - 1){
        return arr[idx];
    }

    int misa = maxofArr(arr, idx + 1);

    return max(arr[idx], misa);
}

int main(){
    
    vector<int> arr = { 10, 20, 30, 40, 50};
    cout<<maxofArr(arr, 0)<<endl;
    return 0;
}