#include<iostream>
using namespace std;
class Prime{
    int x;
    public: 
    void get_input(){
        cout<<"Enter number: ";
        cin>>x;
    }
    void calculate(){
        int p=0;
        for(int i=2; i<x; i++){
            if(x%i==0){
                p=1;
            }
        }
        if(x==0)
        cout<<"Zero";
        else if(p==0)
        cout<<"Prime";
        else 
        cout<<"Not prime";
    }

};
int main(){
    Prime n;
    n.get_input();
    n.calculate();

    return 0;
}
