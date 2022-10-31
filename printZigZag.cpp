#include<bits/stdc++.h>
using namespace std;

void pZZ(int n){
    if(n == 0){
        return;
    }
    cout<<"Pre "<< n << endl;
    pZZ(n-1);
    cout<<"In "<< n << endl;
    pZZ(n-1);
    cout<<"Post "<< n << endl;
}

int main(){
    
    return 0;
}