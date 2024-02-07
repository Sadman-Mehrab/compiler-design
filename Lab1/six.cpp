#include <iostream>
using namespace std;
int main () {
    cout<<"Number Of Elements?\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:\n";
    for(int i=0;i<n;i++) cin>>arr[i];  
    int minElement = arr[0], maxElement = arr[0];   
    for(int i=1;i<n;i++) {
        if(arr[i] > maxElement) maxElement = arr[i];
        if(arr[i] < minElement) minElement = arr[i];
    }
    cout<<"Minimum Element: "<<minElement<<"\n";
    cout<<"Maximum Element: "<<maxElement<<"\n";
return 0;}
