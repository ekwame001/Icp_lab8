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

int* ReverseIdx(int arr[7][7], int x, int arr1[24]){
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
