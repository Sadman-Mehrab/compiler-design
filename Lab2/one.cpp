#include <iostream>

using namespace std;


int main () {
    string s;
    cin>>s;
    bool isNumeric = true;
    bool seenMinus = false;
    bool seenPoint = false;
    
    for (int i=0;i<s.length();i++){

        if( !(s[i] >= '0' && s[i] <= '9') ){
            if(s[i] == '.'){
                if(!seenPoint) seenPoint = true;
                else isNumeric = false;
            }
            else if(s[i] == '-'){
                if(i == 0) seenMinus = true;
                else if(seenMinus) isNumeric = false;
            }
            else if(s[i] != '.' && s[i] != '-') isNumeric = false;
        }
    }

    if (isNumeric) cout<<"Numeric Constant\n";
    else cout<<"Not Numeric\n";



return 0;}