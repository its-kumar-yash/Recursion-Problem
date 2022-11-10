#include<bits/stdc++.h>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string ans){
    
    if(sc == dc && sr == dr){
        cout<<ans<<" ";
        return;
    }

    //Horizontal Move
    if(sc < dc){
        printMazePaths(sr, sc + 1, dr, dc, ans + "h");
    }
    //Vertical Move
    if(sr < dr){
        printMazePaths(sr + 1, sc, dr, dc, ans + "v");
    }
}


int main(){
    
    printMazePaths(0, 0, 2, 2, "");
    return 0;
}