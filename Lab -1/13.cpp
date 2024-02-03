///check if even or odd. If even print square, if odd print cube
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(x%2==0){
        cout<<"The number is even. The square of the number is: "<<x*x;
    }
    else if(x%2!=0){
        cout<<"The number is odd. The cube of the number is: "<<x*x*x;
    }
    else{
        cout<<"INVALID INPUT";
    }
    return 0;
}