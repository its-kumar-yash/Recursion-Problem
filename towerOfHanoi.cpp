#include<bits/stdc++.h>
using namespace std;

void toh(int n, char A, char B, char C){

    if( n == 0 ){
        return ;
    }

    toh(n - 1, A, C, B);
    cout<< n << " "<< A << " -> " << B << endl;
    toh(n - 1, C, B, A);
}


int main(){

    toh(3, 'A', 'B', 'C');
    return 0;
}