#include <__wctype.h>
//
// Created by LU on 2021/3/10.
//

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() {
    int n;
    scanf("%d",&n);
    int str[n];
    for(int i=0;i<n;i++){
        str[i]=i+1;
    }
    for(int i=n-1;i>0;--i){
        int mark=rand()%i;
        swap(str+mark,str+i);
    }
    for(int i=0;i<n;i++) {
        printf("%d", str[i]);
        if(i<n-1)
            printf(" ");
    }
    return 0;
}
void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}