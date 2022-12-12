#include <iostream>  
using namespace std;

int main(){ 
    //creating variables 
    int m1[5][5], m2[5][5], mul[5][5], r, c, i, j, k;
    //get matrix size from user    
    cout << "\nEnter the matrix row size : ";    
    cin >> r;    
    cout << "Enter the matrix column size : ";    
    cin >> c;    

    //get matrix elements from user
    cout << "\nEnter the first matrix elements\n";    
    for(i=0; i<r; i++){    
        for(j=0; j<c; j++){    
            cin >> m1[i][j];  
        }    
    }    
    //get matrix elements from user
    cout << "\nEnter the second matrix elements\n";    
    for(i=0; i<r; i++){    
        for(j=0; j<c; j++){    
            cin >> m2[i][j];    
        }    
    }   

    //Matrix multiplication using for loop
    cout << "\nMultiply of the matrix\n";    
    for(i=0; i<r; i++){    
        for(j=0; j<c; j++){    
            mul[i][j]=0;    
            for(k=0; k<c; k++){    
                mul[i][j] = (m1[i][k] * m2[k][j]) + mul[i][j];    
            }    
        }    
    }    

    //printing result    
    for(i=0; i<r; i++){    
        for(j=0; j<c; j++){    
            cout << mul[i][j]<<" ";    
        }    
        cout << endl;    
    } 

    return 0;  
}    
