#include<bits/stdc++.h>
using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column

vector<string> getMazePath(int sr, int sc, int dr, int dc){

    //Base Condition
    if(sr == dr && sc == dc){
        return {""};
    }

    vector<string> hpaths;
    vector<string> vpaths;
    vector<string> totalPaths;

    //Horizontal Move
    if(sc < dc){
        hpaths = getMazePath(sr, sc + 1, dr, dc);
    }
    //Vertical Move
    if( sr < dr){
        vpaths = getMazePath(sr + 1, sc, dr, dc);
    }


    for(string i : hpaths){
        totalPaths.push_back("h" + i);
    }

    for(string j : vpaths){
        totalPaths.push_back("v" + j);
    }

    return totalPaths;
}


int main(){
    
    vector<string> paths = getMazePath(0, 0, 2, 2);
    for(string i: paths){
        cout<< i << " ";
    }   
    return 0;
}