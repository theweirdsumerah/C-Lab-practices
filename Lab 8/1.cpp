#include<iostream>
using namespace std;
class Bill{
    string name, address;
    int N;
    public:
    void get(){
        cout<<"Enter name of the customer: ";
        getline(cin, name);
        cout<<"Enter address of "<<name<<": ";
        getline(cin, address);
        cout<<"Enter electricity unit: ";
        cin>>N;
    }
    void calc_bill(){
        if(N<=0 && N>=100){
            N=5*N;
        }
        else if(N>=101 && N<=200){
            N=7*N;
        }
        else{
            N=9*N;
        }
    }
    void put(){
        cout<<endl<<"Electricity bill of "<<name<<" is: "<<N<<endl;
    }
};
int main(){
    Bill w;
    w.get();
    w.calc_bill();
    w.put();
    return 0;
}