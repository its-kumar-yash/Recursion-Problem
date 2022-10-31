#include<bits/stdc++.h>
using namespace std;

void printDecInc(int n){

    if( n == 0){
        return;
    }

    cout<<n<<endl;
    printDecInc(n-1);
    cout<<n<<endl;
}

int main(){
    
    printDecInc(5); 
    return 0;
}