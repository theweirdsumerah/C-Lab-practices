#include<iostream>
using namespace std;
class Rectangle{
    private: 
    int length, width;
    public:
    Rectangle(int x, int y){
        length=x;
        width=y;
    }
    void getArea(){
        int area;
        area = length * width;
        cout<<"Area of rectangle: "<<area;
    }
};
int main(){
    int a, b;
    cout<<"Enter length and width of the rectangle: ";
    cin>>a>>b;
    Rectangle r(a,b);
    r.getArea();

    return 0;
}