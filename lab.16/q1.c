#include<stdio.h>

int main(){

    int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int a1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int a2[3][3];


    int sum=0;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
        for(int j=0;j<3;j++){
            sum=sum+a[i][j]*a1[j][i];
        }
        a2[i][k]=sum;
        }
    }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("[%d]",a2[i][j]);
            }
            printf("\n");
        }
    
}
