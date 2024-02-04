#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, i, sum=1;
    cout<<"Enter the number: ";
    cin>>x;
    for(i=1; i<=x; i++){
            sum+= pow(2,i);
    }
    cout<<"The sum: "<<sum;

    return 0;
}