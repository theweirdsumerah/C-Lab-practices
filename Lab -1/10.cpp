///largest or smallest
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the numbers:";
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<"the largest is:"<<x;
    }
    else if(y>x && y>z){
        cout<<"the largest is:"<<y;
    }
    else if(z>x && z>y){
        cout<<"the largest is:"<<z;
    }
    else{
        cout<<"All are equal";
    }
    return 0;
}