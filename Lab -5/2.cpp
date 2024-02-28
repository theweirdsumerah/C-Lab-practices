#include<iostream>
using namespace std;
class Box{
public:
    int height, length, width;
    void getdata(){
    cout<<"Enter the value of length: ";
    cin>>length;
    cout<<"Enter the value of height: ";
    cin>>height; 
    cout<<"Enter the value of width: ";
    cin>>width;
    }
    void print_volume(){
    int vol;
    vol=length* width* height;
    cout<<"The volume of the box is: "<<vol;
    }

};
int main(){
    Box v;
    v.getdata();
    v.print_volume();

    return 0;
}

