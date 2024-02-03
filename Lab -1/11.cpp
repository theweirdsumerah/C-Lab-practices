///find roots of a quadratic equations
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout<<"Coefficient of a, b & c: ";
    cin>>a>>b>>c;
    discriminant= b*b- 4*a*c;

    if(discriminant>0){
        x1=(-b-sqrt(discriminant))/2*a;
        x2=(-b+sqrt(discriminant))/2*a;
        cout<<"Roots are real and different"<<endl<<"1st root:"<<x1<<endl<<"2nd root:"<<x2;
    }
    else if(discriminant==0){
        x1=-b/2*a;
        cout<<"Roots are real and same. Both roots are equal: "<<x1;
    }
    else if(discriminant<0){
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."<<endl
        <<"1st root:"<<realPart<<"+"<<imaginaryPart<<"i"<<endl
        <<"2nd root:"<<realPart<<"-"<<imaginaryPart<<"i";
    }
    else{
        cout<<"INVALID INPUT";
    }
    return 0;


}