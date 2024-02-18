#include<iostream>
using namespace std;
float circle_area(int r){
    float area=3.1416 * r* r;
    return area;
}
int main(){
    int radius;
    cout<<"Enter Radius: ";
    cin>>radius;
    cout<<"The area of the circle is: ";
    cout<<circle_area(radius);
    cout<<endl;

    return 0;
}
