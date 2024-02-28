#include<iostream>
using namespace std;
class summation{
    private: 
    int num1, num2;
    public: 
    summation(int c, int d){
        num1=c;
        num2=d;
    }
    void getSum(){
        int sum;
        sum= num1+num2;
        cout<<"The sum of two numbers: "<<sum;
    }

};
int main(){
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    summation z(x, y);
    z.getSum();

    return 0;
}