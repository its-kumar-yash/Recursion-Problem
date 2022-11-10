#include<bits/stdc++.h>
using namespace std;

void printMazePathJump(int sr, int sc, int dr, int dc, string ans){

    if(sr == dr && sc == dr){
        cout<<ans<<endl;
        return;
    }

    //Horizontal Moves
    for(int h = 1; h <= dc - sc; h++){
        printMazePathJump(sr, sc + h, dr, dc, ans + "h" + to_string(h));
    }
    //Vertical Moves
    for(int v = 1; v <= dr - sr; v++){
        printMazePathJump(sr + v, sc, dr, dc, ans + "v" + to_string(v));
    }
    //Diagonal Move
    for(int d = 1; d <= dr - sr && d <= dc - sc; d++){
        printMazePathJump(sr + d, sc + d, dr, dc, ans + "d" + to_string(d));
    }

}

   
int main(){
    printMazePathJump(0, 0, 2, 2, "");
    return 0;
}