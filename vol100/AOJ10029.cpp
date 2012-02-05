// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10028
//*
#include <stdio.h>
#include <string.h>
#define MAX 1000000

//  int x[] ソートする配列
//  int n   配列のサイズ
void bubbleSort(int x[], int n){
    int i, j, tmp;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(x[j-1]>x[j]){
                tmp=x[j];
                x[j]=x[j-1];
                x[j-1]=tmp;
            }
        }    
    }
}

int main(){
    int n, i;
    int x[MAX];

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
    }
    bubbleSort(x, n);

    for(i=0;i<n;i++){
        if(i)printf(" ");
        printf("%d", x[i]);
    }
    printf("\n");

    return 0;
}
//*/