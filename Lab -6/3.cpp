#include<iostream>
using namespace std;
class online_shopping_platform{
    string name, description;
    int price;
    public:
    void setInfo(){
        cout<<"Enter product name: ";
        getline(cin,name);
        cout<<"Enter description of the product "<<name<<":";
        getline(cin, description);
        cout<<"Enter the price of the product "<<name<<":";
        cin>>price;
        cin.ignore();
  
    }
    void getInfo(){
        cout<<endl<<"Name of the product: "<<name<<endl;
        cout<<"Price of the product: "<<price<<endl;
        cout<<"Decription of the product: "<<description<<endl;
    }
};
int main(){
    online_shopping_platform wafi, sumerah;
    wafi.setInfo();
    sumerah.setInfo();
    wafi.getInfo();
    sumerah.getInfo();

    return 0;
}