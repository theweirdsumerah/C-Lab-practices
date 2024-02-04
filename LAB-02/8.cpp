#include<iostream>
using namespace std;
int main(){
    int n, s=0, i;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0; n>0; n/=10){
        i=n%10;
        s+=i;
    }
    cout<<"Total: "<<s;

    return 0;
}