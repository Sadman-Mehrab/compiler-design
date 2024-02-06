#include <iostream>

using namespace std;


int main () {
    string s;
    cin>>s;
    bool isIdentifier = true;
    if( ( !(s[0] >= 'A' && s[0] <= 'Z') && !(s[0] >= 'a' && s[0] <= 'z') ) && s[0] != '_' ) {
        isIdentifier = false;
    }
    if(s.length() > 1){
        for (int i=1;i<s.length();i++){
            if( ( !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9') ) && s[i] != '_'  ){
                isIdentifier = false;
            }
        }
    }
    if (isIdentifier) cout<<"It Is An Identifier\n";
    else cout<<"Not An Identifier\n";









return 0;}
