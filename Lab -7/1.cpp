#include<iostream>
using namespace std;
class Date{
    int day, month, year;
    public:
    void setDate(){
        cout<<"Enter day: "; 
        cin>>day;
        cout<<"Enter month: ";
        cin>>month;
        cout<<"Enter year: ";
        cin>>year;
    }
    void getdate(){
        cout<<"The date is: "<<day<<"/"<<month<<"/"<<year<<"."<<endl;
    }
    void ValidCheck(){
        int i=0;
        if(month==2){
            if(year%4==0 && year%400!=0){
                if(day<=29){
                    i=0;
                }
                else{
                    i=1;
                }
            }
            else{
                if(day<=28){
                    i=0;
                }
                else{
                    i=1;
                }
            }
        }
        else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            if(day<=31){
                i=0;
            }
            else{
                i=1;
            }
        }
        else if(month==4||month==6 || month==9 || month==11){
            if (day<=30){
                i=0;
            }
            else{
                i=1;
            }
        }  
        if(i==0){
            cout<<"The given date is Valid.";
        }
        else if(i==1){
            cout<<"The date is invalid.";
        }
    }
};
int main(){
    Date w;
    w.setDate();
    w.getdate();
    w.ValidCheck();
    
    return 0;

}