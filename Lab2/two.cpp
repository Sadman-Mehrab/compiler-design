#include <iostream>

using namespace std;


int main () {
    string s;
    getline(cin, s);
    char operators [1000];
    int operatorIndex = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '='){
            operators[operatorIndex++] = s[i];
        }
    }
    if(operatorIndex == 0){
        cout<<"No Operators Found\n";
    }
    else{
        for (int i=0;i<operatorIndex;i++){
            cout<<"Operator "<<(i+1)<<": "<<operators[i]<<"\n";
        }
    }



return 0;}
