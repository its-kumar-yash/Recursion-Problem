#include<bits/stdc++.h>
using namespace std;

void printStairPaths(int n, string ans){

    if(n == 0){
        cout<<ans<<" ";
        return;
    }
    if(n < 0){
        return;
    }


    printStairPaths(n - 1, ans + "1");
    printStairPaths(n - 2, ans + "2");
    printStairPaths(n - 3, ans + "3");
}


int main(){
    
    printStairPaths(4, "");
    return 0;
}