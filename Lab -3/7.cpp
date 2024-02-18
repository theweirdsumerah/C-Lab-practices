#include<iostream>
using namespace std;
int sumnum(int x){
    int sum=0;
    while (x%10>0){
        sum = sum + x%10;
        x=x/10;
    }
    return sum;
}
int main(){
    int a;
    cout<<"Enter a positive number: ";
    cin>>a;
    cout<<"Sum of the digits: ";
    cout<<sumnum(a);
    cout<<endl;

    return 0;
}
