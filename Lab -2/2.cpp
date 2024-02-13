///C++ program to find out the sum of the series 1+2+3+...+n;
#include<iostream>
using namespace std;
int main(){
    int x, i, sum=0;
    cout<<"Enter the numbers: ";
    cin>>x;
    for(i=0; i<=x; i++){
        sum+=i;
    }
    cout<<"The sum of n numbers are: "<<sum<<endl;

    return 0;
}