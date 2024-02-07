#include <iostream>
using namespace std;
int main () { 
    cout<<"Number Of Elements?\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    double total = 0;
    for(int i=0;i<n;i++) total += (double)arr[i];
    cout<<"Average Of Array Elements\n";
    cout<<(total/ (double)n)<<"\n";
return 0;}
