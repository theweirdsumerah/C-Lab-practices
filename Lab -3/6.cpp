#include<iostream>
using namespace std;
int factorial(int a){
    if(a==0)
        return 1;
    else
        return a*factorial(a-1);
}
int main(){
    int x;
    cout<<"Enter a positive number: ";
    cin>>x;
    cout<<"Factorial of the given number is: ";
    cout<<factorial(x);
    cout<<endl;

    return 0;
    
}