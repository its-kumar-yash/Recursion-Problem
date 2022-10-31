#include<bits/stdc++.h>
using namespace std;

int power_linear(int x, int n){
    if( n == 0){
        return 1;
    }

    return x * power_linear(x, n - 1);
}

int main(){
    
    cout<<power_linear(2,5);
    return 0;
}