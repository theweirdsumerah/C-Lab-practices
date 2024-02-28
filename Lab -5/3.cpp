#include<iostream>
using namespace std;
class person{
    string name, address, bloodGrp, DoB;
    int ID;
public:
    void contain(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Address: ";
        cin>>address;
        cout<<"Enter Blood group: ";
        cin>>bloodGrp;
        cout<<"Enter Date of birth: ";
        cin>>DoB;
        cout<<"Enter Identification Number: ";
        cin>>ID;
        cout<<endl;
    }
    void display(){
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Blood Group: "<<bloodGrp<<endl;
        cout<<"Date of Birth: "<<DoB<<endl;
        cout<<"Identification No: "<<ID<<endl;
    }
};
int main(){
    person info;
    info.contain();
    info.display();

    return 0;
}

