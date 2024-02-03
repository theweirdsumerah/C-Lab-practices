///calculate marks of a student
#include<iostream>
using namespace std;
int main(){
    int a, b, c, avg;
    cout<<"Enter numbers :";
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    cout<<"Average mark is: "<<avg<<endl;
    if(avg>=60){
        cout<<"First";
    }
    else if(avg>=50 && avg <=59){
        cout<<"Second";
    }
    else if(avg>=40 && avg<=49){
        cout<<"Third";
    }
    else if(avg<40){
        cout<<"Fail";
    }
    else{
        cout<<"INVALID INPUT";
    }
    return 0;
}