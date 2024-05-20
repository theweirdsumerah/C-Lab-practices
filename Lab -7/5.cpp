#include<iostream>
using namespace std; 
class Employee{
    string name;
    double salary, hireDate;
    public:
    void getData(){
        cout<<"Enter name of the employee: ";
        getline(cin, name);
        cout<<"Enter hire date of "<<name<<": ";
        cin>>hireDate;
        cout<<"Enter salary of "<<name<<": ";
        cin>>salary;
    }
    void putData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Hiring Year: "<<hireDate<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    Employee():hireDate(0){}
        friend void hireYear(Employee);
};
void hireYear(Employee w){
    cout<<"Total year of services: ";
    int serviceYear;
    serviceYear=2024-w.hireDate;
    if(serviceYear>1){
        cout<<serviceYear<<" Years.";
    }
    else{
        cout<<serviceYear<<" Years.";
    }
}
int main(){
    Employee w;
    w.getData();
    w.putData();
    hireYear(w);
}