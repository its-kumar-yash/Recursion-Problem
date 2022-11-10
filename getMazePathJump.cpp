#include<bits/stdc++.h>
using namespace std;

vector<string> getMazePathJump(int sr, int sc, int dr, int dc){
    
    //Base Condition
    if(sr == dr && sc == dc)
        return {""};

    vector<string> totalPaths; // total paths

    //Horizontal Moves
    for(int mp = 1; mp <= dc - sc; mp++){
        vector<string> hpaths = getMazePathJump(sr, sc + mp, dr, dc);
        for(string i : hpaths){
            totalPaths.push_back("h" + to_string(mp) + i);
        }
    }

    //Vertical Moves
    for(int mp = 1; mp <= dr - sr; mp++){
        vector<string> vpaths = getMazePathJump(sr + mp, sc, dr, dc);
        for(string i : vpaths){
            totalPaths.push_back("v" + to_string(mp) + i);
        }
    }

    //Diagonal Moves
    for(int mp = 1; mp <= dr - sr && mp <= dc - sc; mp++){
        vector<string> dpaths = getMazePathJump(sr + mp, sc + mp, dr, dc);
        for(string i : dpaths){
            totalPaths.push_back("d" + to_string(mp) + i);
        }
    }

    return totalPaths;
}

int main(){
    
    vector<string> paths = getMazePathJump(1, 1, 3, 3);
    for(string i: paths){
        cout<< i << endl;
    }

    return 0;
}