#include<iostream>
using namespace std;
class parent{
    public:
    int ar[5]={1,2,3,4,5};
};
class child : public parent{
    public:
    void avg(){
        int a=0,i,b;
        for(i=0; i<5; i++){
            a=a+ar[i];
        }
        b = a/5;
        cout<<b;
    }
};
int main(){
    child w;
    w.avg();
}