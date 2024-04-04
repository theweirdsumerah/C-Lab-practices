#include<iostream>
using namespace std;
class employee{
    string name, date;
    int salary;
    public: 
    void setData(){
        cout<<"Enter name of the employee: ";
        cin>>name;
        cout<<"Date of hiring of "<<name<<":";
        cin>>date;
        cout<<"Enter the salary of "<<name<<":";
        cin>>salary;
    }
    void getdata(){
        cout<<"Name of employee: "<<name<<endl;
        cout<<"Date of joining: "<<date<<endl;
        cout<<"Salary of the employee "<<name<<":"<<salary<<endl;
    }
};
int main(){
    employee w;
    w.setData();
    w.getdata();

    return 0;
}