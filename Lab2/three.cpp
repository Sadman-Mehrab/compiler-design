#include <iostream>


using namespace std;


int main () {
    string s;
    getline(cin, s);
    if(s[0] == '/' && s[1] == '/' && s.length() >= 2){
        cout<<"Single Line Comment\n";
    }
    else if(s[0] == '/' && s[1] == '*' && s[s.length()-1] == '/' && s[s.length()-2] == '*' && s.length() >= 4){
        cout<<"Multi Line Comment\n";
    }
    else{
        cout<<"Not A Valid Comment\n";
    }



return 0;}
