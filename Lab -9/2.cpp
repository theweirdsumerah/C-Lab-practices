#include<iostream>
#include <cstdlib>
using namespace std;
class random{
    char a;
    public:
    void rando(){
        while(1){
        cin>>a;
        if(int(a)==110){
            cout<<rand()%10<<endl;
        }
        else{
            cout<<"Press n on keyboard and enter";
        }
        }
    }
};
int main(){
    random w;
    w.rando();
}