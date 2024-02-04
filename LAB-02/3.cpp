#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, i, sum=0;
    cout<<"Enter the Number: ";
    cin>>x;
    for(i=1; i<=x; i++){
        sum+= pow(i, 2);
    }
    cout<<"The sum: "<<sum;

    return 0;
}
