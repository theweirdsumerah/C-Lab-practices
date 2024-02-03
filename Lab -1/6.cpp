///quotient and remainder
#include<iostream>
using namespace std;
int main(){
    float a, b, q, r;
    cin>>a>>b;
    q=a/b;
    r=int(a)%int(b);
    cout<<"Quotient: "<<q<<endl<<"Remainder:"<<r;
    return 0;
}