///C++ program to accept 5 numbers from user one by one and display their sum;
#include<iostream>
using namespace std;
int main(){
    int x, i, sum=0;
    cout<<"Enter the Numbers: ";
    for(i=0; i<5; i++){ 
        cin>>x;

        sum+=x;
    }
    cout<<sum;

    return 0;
}