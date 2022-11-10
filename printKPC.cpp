#include<bits/stdc++.h>
using namespace std;

vector<string> mapping = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string ans){

    if(ques.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = ques[0];
    string roq = ques.substr(1);

    string stringMapping = mapping[ch - '0'];
    
    for(int i = 0; i < stringMapping.length(); i++){
        char chMapping = stringMapping[i];
        printKPC(roq, ans + chMapping);
    }

}


int main(){
    
    printKPC("678", "");
    return 0;
}