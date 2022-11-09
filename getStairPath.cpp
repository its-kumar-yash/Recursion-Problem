#include<bits/stdc++.h>
using namespace std;

vector<string> getStairPaths(int n){

    if(n == 0) return {""};

    else if(n < 0) return {};


    vector<string> paths1 = getStairPaths(n - 1);
    vector<string> paths2 = getStairPaths(n - 2);
    vector<string> paths3 = getStairPaths(n - 3);
    vector<string> totalPaths;

    for(string i : paths1) totalPaths.push_back( "1" + i);

    for(string i : paths2) totalPaths.push_back( "2" + i);

    for(string i : paths3) totalPaths.push_back( "3" + i);

    return totalPaths;
}

int main(){
    
    vector<string> paths = getStairPaths(4);
    for(string i : paths) cout << i << " ";
    
    return 0;
}