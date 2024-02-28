#include<iostream>
using namespace std;
void math(double a, int b, int c){
    cout<<a+b+c;
}
void math(int a, int b, double c){
  cout<< a*b*c;
}
void math(double a, double b){
    cout<< a/b;
}
void math(int a, double b){
    cout<< a-b;
}
int main(){
    cout<<"\nSum: ";
    math(1.5, 12, 2);
    cout<<"\nSubtraction: ";
    math(2, 3.3);
    cout<<"\nMultiplication: ";
    math(6, 7, 1.5);
    cout<<"\nDivision: ";
    math(7.5, 2.5);
    cout<<endl;

    return 0;
}
