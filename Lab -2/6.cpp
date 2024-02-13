#include <iostream>
using namespace std;
int main(){
    int x,i=1,c=0;
    cout<<"Enter integer: ";
    cin >> x;
    for (i=1; x>=1; c++){
        x/=10;
    }
    cout << "Digits in number is: " << c;

    return 0;
}
