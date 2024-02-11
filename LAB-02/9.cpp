#include<iostream>
using namespace std;
int main(){
    int c, s, j;
    float sum=0;
    cout<<"Enter the number of input want to take: ";
    cin>>s;
    cout<<"Enter the numbers: ";
    int i[s];
    for(j=0; j<s; j++){
        cin>>i[j];
    }
    for(c=0; c<s; c++){
        sum+=i[c];
    }
    sum/=s;

    cout<<"The average of "<< s <<" numbers is: "<<sum;

    return 0;
}