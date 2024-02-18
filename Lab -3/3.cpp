#include<iostream>
using namespace std;
int area(int x, int y){
    int a;
    a= x * y;
    return a;
}
int main(){
    int length, width;
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter width: ";
    cin>>width;
    cout<<"Area of the rectangle: ";
    cout<<area(length, width);
    cout<<endl;

    return 0;
}