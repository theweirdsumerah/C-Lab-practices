#include<iostream>
using namespace std;
class student{
    int id[30];
    double cgpa[31];
    public:
        void getdata(){
            int i;
            for(i=0; i<30; i++){
                cout<<"Enter ID: ";
                cin>>id[i];
                cout<<"Enter CGPA for "<<id[i]<<": ";
                cin>>cgpa[i];
            }
        }
        void average(){
            double sum=0;
            double avg;
            int i;
            for(i=0; i<30; i++){
                sum+=cgpa[i];
            }
            avg = sum/30;
            cout<<"Average: "<<avg<<endl;
        }
        void maximum(){
            int i;
            int maxi = cgpa[0];
            for(i=0; i<30; i++){
                if(maxi<cgpa[i]){
                    maxi = cgpa[i];
                }
            }
            cout<<"Maximum: "<<maxi<<endl;
        }
        void minimum(){
            int i;
            int mini = cgpa[0];
            for(i=0; i<30; i++){
                if(mini>cgpa[i]){
                    mini = cgpa[i];
                }
            }
            cout<<"Minimum: "<<mini<<endl;
        }
};
int main(){
    student w;
    w.getdata();
    w.average();
    w.maximum();
    w.minimum();

    return 0;
}