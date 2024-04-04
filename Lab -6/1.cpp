#include<iostream> 
using namespace std;
class Shape{
    int width, height;
    public: 
    void getData(){
        cout<<"enter the height and width: ";
        cin>>height>>width;
    }
    void rectangle(){
        int area, perimeter;
        area = width * height;
        perimeter= 2*(width+height);
        cout<<"The area of rectangle: "<<area<<endl;
        cout<<"The perimeter of rectangle: "<<perimeter<<endl;
    }
    void square(){
        int area, perimeter;
        area=height *height;
        perimeter=4*height;
        cout<<"Area of square: "<<area<<endl;
        cout<<"Perimeter of square: "<<perimeter<<endl;
    }
};
int main(){
    Shape wafi;
    wafi.getData();
    wafi.rectangle();
    wafi.square();

    return 0;
}