///Even or odd
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%2==0){
        cout<<"EVEN";
    }
    else if(x%2!=0){
        cout<<"ODD";
    }
    else{
        cout<<"INVALID INPUT";
    }
    return 0;
}