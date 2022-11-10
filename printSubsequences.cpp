#include<bits/stdc++.h>
using namespace std;


void printSS(string str, string ans){

    if(str.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    string roq = str.substr(1); // rest of question
    printSS(roq, ans + "");
    printSS(roq, ans + ch);
}


int main(){
    
    printSS("abc", "");
    return 0;
}