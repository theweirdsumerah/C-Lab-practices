#include<iostream>
using namespace std;
int root(int a){
    int sum=0, digital=0;
    while(a%10>0){
        sum=sum+a%10;
        a=a/10;
    }
    while(sum%10>0){
        digital=digital+sum%10;
        sum=sum/10;
    }
    return digital;
}
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Root of the number: ";
    cout<<root(x)<<endl;

    return 0;
}
