///positive or negative
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x>0){
        cout<<"Positive";
    }
    else if(x<0){
        cout<<"Negative";
    }
    else if(x==0){
        cout<<"Input is ZERO";
    }
    else{
        cout<<"Invalid inpt";
    }
    return 0;

}