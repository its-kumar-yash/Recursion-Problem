#include<bits/stdc++.h>
using namespace std;

int power_logarithmic(int x, int n){

    if(n == 0){
        return 1;
    }

    if( n % 2 == 1){
        return x*power_logarithmic(x, n/2)*power_logarithmic(x, n/2);
    }
    else{
        return power_logarithmic(x, n/2)*power_logarithmic(x, n/2);
    }
}

int main(){
    
    cout<<power_logarithmic(2,100);
    return 0;
}