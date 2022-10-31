#include<bits/stdc++.h>
using namespace std;

void displayArr(vector<int> arr, int idx){
    if( idx == arr.size() ){
        return;
    }

    cout<< arr[idx] << endl;
    displayArr(arr, idx + 1);
}


void reverseDisplayArr(vector<int> arr, int n){
    if( n < 0){
        return;
    }

    cout<<arr[n]<<endl;
    reverseDisplayArr(arr, n - 1); 
}

int main(){
    vector<int> arr = { 10, 20, 30, 40, 50};
    displayArr(arr, 0);
    return 0;
}