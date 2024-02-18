#include<iostream>
using namespace std;
void max(int a, int b, int c){
    if(a>b && a>c){
        cout<<a;
    }
    else if (b>a && b>c){
        cout<<b;
    }
    else if(c>a && c>b){
        cout<<c;
    }
}
void min(int a, int b, int c){
    if(a<b && a<c){
        cout<<a;
    }
    else if (b<a && b<c){
        cout<<b;
    }
    else if(c<a && c<b){
        cout<<c;
    }
}
int main(){
    int x,y,z;
    cout<<"Enter the numbers: ";
    cin>>x>>y>>z;
    cout<<"Maximum number is: ";
    max(x,y,z);
    cout<<endl;
    cout<<"Minimum number is: ";
    min(x,y,z);
    cout<<endl;
    
    return 0;
}