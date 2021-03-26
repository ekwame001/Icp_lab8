/* @author Michael Eshun
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int LinearIndex(int i, int j){
    if(j>1) return -1;
    else{
        int x =(((i*i)+i)/2)+j;
        return x;
    }
}

int* ReverseIdx(int arr2[7][7], int x, int arr1[24]){
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(j<=i){
                int temp = (((i*i)+i)/2)+j;
                if(temp==x){
                    arr[0] = i;
                    arr[1] = j;
                    return arr;
                }
            }
        }
    }
    return arr;
}
int main()
{
    int a=8;
    srand(time(0));
    int matrix[8][8]={};
   
    for (int i =0;i<a;i++){
        for (int j=0;j<a;j++){
            matrix[i][j]=1+(rand() %1000);
            
        }
    }
    
  
      
          int b[a*(a+1)/2]={};
     int i, j;
     int k=0;
     
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            
            if(i>=j){
            cout << matrix[i][j] << " ";
            if(k<a*(a+1)/2)
            {
                b[k]=matrix[i][j];
                k++;
            }
            
        }
         
        
        }
        cout << endl;
    }
    cout<<b[8]<<endl;
    
    return 0;
    
}
int C[7][7];
    for (int i=0; i<24; i++){
        int *D = ReverseIdx(C,i,B);
        int g=D[0];
        int h=D[1];

        C[g][h]=B[i];
    }
    //Printing the first 20 elements of A and the indexes
     for(int i=0; i<n; ++i){
         for(int j=0; j<n; ++j){
             if(A[i][j] != 0){
                 cout<<"A[ "<<i<<" ] [ "<<j<<" ] "<<A[i][j]<<endl;
             }
        }
     }
        

    //Printing the first 20 elements of B and the indexes
    for (int i = 0; i < 20; ++i)
    {
        cout<<"B[ "<<i<<" ] "<<B[i]<<endl;
    }
   
    cout<<" "<<endl;
    

    //Printing the first 20 elements of C and the indexes
    for (int i = 0; i < 7; ++i){
        for (int j = 0; j < 7; ++j)
        {
            if(C[i][j] != 0){
                cout<<"C[ "<<i<<" ] [ "<<j<<" ] "<<C[i][j]<<endl;
            }
        }
        
    }

    cout<<" "<<endl;
    return 0;
    
}
