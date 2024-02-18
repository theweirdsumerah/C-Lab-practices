#include<iostream>
using namespace std;
int rev(int a){
    int R=0,rem;
    while (a != 0){
        rem = a%10 ;
        R = R * 10 + rem;
        a /= 10;
    }
    return R;
}
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Reversed number is: "<<rev(x); 
    return 0;
}