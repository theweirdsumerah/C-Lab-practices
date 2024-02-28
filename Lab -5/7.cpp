#include<iostream>
using namespace std;
class name{
    string firstName , lastName ;
public:
    void name(){
        cout<<"First name : ";
        getline(cin,firstName);
        cout<<"Last name : ";
        getline(cin , lastName);
    }
    friend string full( name ob );
};
string full(name ob){
    return ob.firstName+" "+ob.lastName;
}
int main(){
    name o;
    cout<<full(o);
}
