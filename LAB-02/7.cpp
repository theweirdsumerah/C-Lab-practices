#include<iostream>
using namespace std;
int main(){
    int x, rem, rev;
    cout<<"Enter the number: ";
    cin>>x;
    for(rev=0; x!=0; x=x/10){
        rem=x%10;
        rev =rem+(rev*10);
    }
    cout<<"Reversed number: "<<rev;

    return 0;
}