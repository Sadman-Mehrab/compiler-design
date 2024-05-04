#include <iostream>
#include <map>
using namespace std;
map <string, bool> reservedKeywords;

void setReservedKeywords(){
    reservedKeywords["asm"] = true;
    reservedKeywords["true"] = true;
    reservedKeywords["false"] = true;
    reservedKeywords["bool"] = true;
    reservedKeywords["string"] = true;
    reservedKeywords["namespace"] = true;
    reservedKeywords["include"] = true;
    reservedKeywords["main"] = true;
    reservedKeywords["using"] = true;
    reservedKeywords["std"] = true;
    reservedKeywords["double"] = true;
    reservedKeywords["new"] = true;
    reservedKeywords["switch"] = true;
    reservedKeywords["auto"] = true;
    reservedKeywords["if"] = true;
    reservedKeywords["else"] = true;
    reservedKeywords["operator"] = true;
    reservedKeywords["template"] = true;
    reservedKeywords["break"] = true;
    reservedKeywords["enum"] = true;
    reservedKeywords["private"] = true;
    reservedKeywords["this"] = true;
    reservedKeywords["case"] = true;
    reservedKeywords["extern"] = true;
    reservedKeywords["protected"] = true;
    reservedKeywords["throw"] = true;
    reservedKeywords["catch"] = true;
    reservedKeywords["float"] = true;
    reservedKeywords["public"] = true;
    reservedKeywords["try"] = true;
    reservedKeywords["char"] = true;
    reservedKeywords["for"] = true;
    reservedKeywords["register"] = true;
    reservedKeywords["typedef"] = true;
    reservedKeywords["class"] = true;
    reservedKeywords["friend"] = true;
    reservedKeywords["return"] = true;
    reservedKeywords["union"] = true;
    reservedKeywords["const"] = true;
    reservedKeywords["goto"] = true;
    reservedKeywords["short"] = true;
    reservedKeywords["unsigned"] = true;
    reservedKeywords["continue"] = true;
    reservedKeywords["ifsignedvirtual"] = true;
    reservedKeywords["default"] = true;
    reservedKeywords["inline"] = true;
    reservedKeywords["sizeofvoid"] = true;
    reservedKeywords["delete"] = true;
    reservedKeywords["int"] = true;
    reservedKeywords["static"] = true;
    reservedKeywords["volatile"] = true;
    reservedKeywords["do"] = true;
    reservedKeywords["long"] = true;
    reservedKeywords["struct"] = true;
    reservedKeywords["while"] = true;
    reservedKeywords["cout"] = true;
    reservedKeywords["cin"] = true;
}



bool isIdentifierValid(string s){
    if(reservedKeywords[s] == true){
        cout<<"Reserved Keyword: "<<s<<"\n";
        return false;
    }

    if(s == "_"){
        cout<<"Invalid Identifier: "<<s<<"\n";
        return false;
    }

    if( s[0] != '_' && !(s[0] >= 'A' && s[0] <= 'Z') && !(s[0] >= 'a' && s[0] <= 'z') ){

        if(s[0] >= '0' && s[0] <= '9'){
            cout<<"Identifier Name Can Not Start With The Number: "<<s[0]<<"\n";
        }
        else{
            cout<<"Identifier Name Can Not Start With The Special Character: '"<<s[0]<<"'\n";
        }

        return false;
    }

    for(int i=1;i<s.length();i++){
        if( s[i] != '_' && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9') ){


            if(s[i] >= '0' && s[i] <= '9'){
                cout<<"Identifier Name Can Not Contain The Number In Between: "<<s[i]<<"\n";
            }
            else{
                cout<<"Identifier Name Can Not Contain The Special Character In Between: '"<<s[i]<<"'\n";
            }


            return false;
        }
    }

    if(s[0] != '_'){
        if(s[0] == toupper(s[0])){
            cout<<"Identifier: "<<s<<" is Not In The Recommended camelCase Convention \n";
        }
    }

    else{
        cout<<"Identifier: "<<s<<" is Not is Not In The Recommended camelCase Convention \n";
    }

    return true;
}

int main () {
    setReservedKeywords();
    string s;
    getline(cin, s);
    bool test = isIdentifierValid(s);
    cout<<test;
return 0;}
