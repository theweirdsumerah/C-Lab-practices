#include<iostream>
using namespace std;
int main(){
    int x, i, fact=1;
    cout<<"Enter number: ";
    cin>>x;
    for(i=1; i<=x; i++){
        fact*=i;
    }
    cout<<"Factorial of "<<x<<" is: "<<fact;

    return 0;
}