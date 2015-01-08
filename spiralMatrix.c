#include <stdio.h>


int main(){
    //int m=3, n=3;
    int m=4, n=4;
    //int m=3, n=4;
    //int m=4, n=3;
    int mstart=0,mend=m-1;
    int nstart=0,nend=n-1;
    int i=0,j=0;


    //int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int a[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
    //int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    //int a[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };

    int k;
    for(k=0; k<m*n; k++){
        if(i==mstart){
            if(j<nend){
                printf("%d ", a[i][j]);
                j++;
            }
            else{
                printf("%d ", a[i][j]);
                i++;
            }
        }
        else if(j==nend){
            if(i<mend){
                printf("%d ", a[i][j]);
                i++;
            }
            else{
                printf("%d ", a[i][j]);
                j--;
            }
        }
        else if(i==mend){
            if(j>nstart){
                printf("%d ", a[i][j]);
                j--;
            }
            else{
                printf("%d ", a[i][j]);
                i--;
            }
        }
        else if(j==nstart){
            if(i>mstart+1){
                printf("%d ", a[i][j]);
                i--;
            }
            else{
                printf("%d ", a[i][j]);
                j++;
                mstart++; nstart++;
                mend--; nend--;
            }
        }
    }
    printf("\n");

}
