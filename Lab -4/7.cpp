#include<iostream>
using namespace std;
class Circle{
    int radius;
    public:
    void get_radius(){
        cout<<"Enter the radius of the circle: ";
        cin>>radius; 
    } 
    void compute_area(){
        float area;
        area= 3.1416 * radius *radius;
        cout<<"The area of the circle is: ";
        cout<<area;
    }
    
};
int main(){
    Circle x;
    x.get_radius();
    x.compute_area();

    return 0;
}