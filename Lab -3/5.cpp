#include<iostream>
using namespace std;
void median(int x, int y, int z){
    if(x>y && x<z)
        cout<<x;
    else if(y>x && y<z)
        cout<<y;
    else if(z>x && z<y)
        cout<<z;
}
int main(){
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Median is: ";
    median(a, b, c);
    cout<<endl;

    return 0;
}
