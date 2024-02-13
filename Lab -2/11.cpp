#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;
    int mat1[rows][columns], mat2[rows][columns], sum[rows][columns];
    cout<<"Enter the elements of 1st matrix: "<<endl;
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements of 2nd matrix: "<<endl;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            cin>>mat2[i][j];
        }
    }
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"Sum of the matrices: "<<endl;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}