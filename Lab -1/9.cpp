///check vowel or consonent
#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' 
    || a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ){
        cout<<"vowel";
    }
    else{
        cout<<"Consonent";
    }
    return 0;

}