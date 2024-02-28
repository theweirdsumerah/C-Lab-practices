#include<iostream>
using namespace std;
void inputCheck(int a){
    if(a>=65 && a<=90)
       cout<<"Upper Case letters";
    else if(a>=97 && a<=122)
       cout<<"Lower Case letters";
    else if(a>=48 && a<=57)
        cout<<"Digits";
    else
        cout<<"Special symbol";
}
int main(){
    char x;
    cout<<"Enter a character: ";
    cin>>x;
    cout<<"The character is in: ";
    int y=int(x);
    inputCheck(y);

    return 0;
}
