#include<bits/stdc++.h>
using namespace std;

vector<string> getSubsequences(string s){

    if (s == ""){
        vector<string> base_case;
        base_case.push_back("");
        return base_case;
    }

    char ch = s[0];
    string ros = s.substr(1);

    vector<string> rres = getSubsequences(ros);
    vector<string> mres;

    for (string s : rres){
        mres.push_back(s);
    }

    for (string s : rres){
        mres.push_back(ch + s);
    }

    return mres;
}


int main(){
    
    vector<string> final = getSubsequences("abc");
    for(string i: final){
        cout<<i<<" ";
    }
    return 0;
}