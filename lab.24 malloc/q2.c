#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("^_^\n");
    printf(". .\n");
    printf(". .\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        *(ptr+i)=i;
        printf("%d\n",*(ptr+i));
    }
}