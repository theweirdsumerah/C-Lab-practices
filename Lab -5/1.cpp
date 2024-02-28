#include<iostream>
using namespace std;
class person{
    string name, country;
    int age;

    public:
      void setdata(){
          cout<<"Enter name: ";
          cin>>name;
          cout<<"Enter age:  ";
          cin>>age;
          cout<<"Enter country: ";
          cin>>country;
      }
      void getdata(){
          cout<<"Name: "<<name<<endl;
          cout<<"Age: "<<age<<endl;
          cout<<"Country: "<<country<<endl;
      }
};
int main(){
    person x;
    x.setdata();
    x.getdata();

    return 0;
}
