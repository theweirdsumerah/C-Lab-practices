#include<iostream>
using namespace std;
class Student{
    string name;
    int id, marks;
    public:
    void setInfo(){
        cout<<"Enter name of the student: ";
        getline(cin, name);
        cout<<"Enter Identification number: ";
        cin>>id;
        cout<<"Enter obtained marks: ";
        cin>>marks;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
class Result:public Student{

};
int main(){
    Result Info;
    Info.setInfo();
    Info.getInfo();
}