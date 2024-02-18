#include<iostream>
using namespace std;
void sum(int a, int b){
    int sum;
    sum=a+b;
    cout<<sum;
}
void sub(int a, int b){
    int sub;
    sub=a-b;
    cout<<sub;
}
void multiplication(int a){
    int product;
    product=a*a;
    cout<<product;
}
void division(int a, int b){
    int quotient;
    quotient= a/b;
    cout<<quotient;
}
void remainder(int a, int b){
    int rem;
    rem=a%b;
    cout<<rem;
}
int main(){
    int x, y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;
    cout<<"Sum: ";
    sum(x, y);
    cout<<endl;
    cout<<"Subtraction: ";
    sub(x,y);
    cout<<endl;
    cout<<"Multiplication: ";
    multiplication(x);
    cout<<endl;
    cout<<"Division: ";
    division(x, y);
    cout<<endl;
    cout<<"Remainder: ";
    remainder(x, y);
    cout<<endl;
    return 0;

}