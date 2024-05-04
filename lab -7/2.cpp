#include<iostream>
using namespace std;
class Student{
    string name;
    int cls, roll;
    double marks;
    public:
    void setInfo(){
        cout<<"Enter name of student: ";
        getline(cin, name);
        cout<<"Enter class: ";
        cin>>cls;
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter obtained marks: ";
        cin>>marks;
    }
    void getInfo(){
        cout<<"Student's name: "<<name<<endl;
        cout<<"Class: "<<cls<<endl;
        cout<<"Roll number: "<<roll<<endl;
        cout<<"Obtained marks: "<<marks<<endl;
    }
    void grade(){
        cout<<"Obtained Grade: ";
        if(marks>=80 && marks<=100){
            cout<<"A+"<<endl;
        }
        else if(marks>=40 && marks<=79){
            cout<<"B"<<endl;
        }
        else if(marks>40 && marks<=0){
            cout<<"FAIL"<<endl;
        }
        else{
            cout<<"Invalid Input.";
        }
    }
};
int main(){
    Student w;
    w.setInfo();
    w.getInfo();
    w.grade();
    
    return 0;
}