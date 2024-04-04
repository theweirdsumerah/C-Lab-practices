#include<iostream>
using namespace std;
class rectangle{
    int width, height;
    public:
    void getdata(){
        cout<<"Enter width and height: ";
        cin>>width>>height;
    }
    void calculate_area(){
        int area;
        area=width*height;
        cout<<"Area of rectangle: "<<area<<endl;
    }
    void calculate_perimeter(){
        int perimeter;
        perimeter=2*(width+height);
        cout<<"Perimeter of rectangle: "<<perimeter<<endl;
    }
};
int main(){
    rectangle w;
    w.getdata();
    w.calculate_area();
    w.calculate_perimeter();

    return 0;
}