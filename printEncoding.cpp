#include<bits/stdc++.h>
using namespace std;

void printEncoding(string ques, string ans){
    if(ques.length() == 0){
        cout<<ans<<endl;
        return;
    }

    else if(ques.length() == 1){
        char ch = ques[0];
        if(ch == '0'){
            return;
        }
        else{
            int chValue = ch - '0';
            char code = (char)('a' + chValue - 1);
            ans += code;
            cout<<ans<<endl;
        }
    }

    else{
        char ch = ques[0];
        string roq = ques.substr(1);
        if(ch == '0'){
            return;
        }
        else{
            int chValue = ch - '0';
            char code = (char)('a' + chValue - 1);
            printEncoding(roq, ans + code);
        }

        string ch12 = ques.substr(0,2);
        roq = ques.substr(2);

        int ch12value = stoi(ch12);
        if(ch12value <= 26){
            char code = (char)('a' + ch12value - 1);
            printEncoding(roq, ans + code);
        }

    }
}

int main(){
    
    printEncoding("123", "");
    return 0;
}