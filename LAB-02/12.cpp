#include<iostream>
using namespace std;
int main(){
    int row1, col1, row2, col2;
    cout<<"Enter the number of Rows for 1st matrix: ";
    cin>>row1;
    cout<<"Enter the number of columns for 1st matrix: ";
    cin>>col1;
    cout<<"Enter the number of Rows for 2nd matrix: ";
    cin>>row2;
    cout<<"Enter the number of Column for 2nd matrix: ";
    cin>>col2;
    if(col1 != row2){
        cout<<"Matrix multiplication is not possible."<<endl;
        cout<<"Number of columns in first matrix must be equal to the number of rows in the second matrix."<<endl;
        return 1;
    }
    int mat1[row1][col1], mat2[row2][col2], product[row1][col2];
    cout<<"Enter the elements of 1st matrix: "<<endl;
    int i, j, l;
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements of 2nd matrix: "<<endl;
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            cin>>mat2[i][j];
        }
    }
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            product[i][j] = 0;
            for(l=0; l<col1; l++){
                product[i][j] +=mat1[i][l] * mat2[l][j];
            }
        }
    }
    cout<<"The product of the two matrices are: "<<endl;
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
