#include<iostream>
using namespace std;
void math(double a, int b){
    cout<<a+b;
}
void math(int a, int b){
  cout<< a*b;
}
void math(double a, double b){
    cout<< a/b;
}
void math(int a, double b){
    cout<< a-b;
}
int main(){
    cout<<"\nSum: ";
    math(1.5, 12);
    cout<<"\nSubtraction: ";
    math(2, 3.3);
    cout<<"\nMultiplication: ";
    math(6, 7);
    cout<<"\nDivision: ";
    math(7.5, 2.5);
    cout<<endl;

    return 0;
}
