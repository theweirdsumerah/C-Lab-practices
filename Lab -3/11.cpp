#include<iostream>
using namespace std;
int main(){
    string s1, s2, result;
    cout<<"Enter 1st string: ";
    getline(cin, s1);
    cout<<"Enter 2nd string: ";
    getline(cin, s2);
    result=s1+s2;
    cout<<"Resultant stirng: "<<result<<endl;

    return 0;
}