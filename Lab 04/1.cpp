#include<iostream>
using namespace std;
void primeNum(int x){
    int pn=0, i;
    for(i=2; i<x; i++){
        if(x%i==0)
            pn=1;
    }
    if(x==0)
        cout<<"Zero";
    else if(pn==0)
        cout<<"The number is a Prime Number";
    else
        cout<<"The number is not a Prime Number";
}
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    primeNum(a);

    return 0;
}
