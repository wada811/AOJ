﻿// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10029
//*
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000

/* ソート関数 */
int intcmp( const void * a , const void * b ) {
    /* 引数はvoid*型と規定されているのでint型にcastする */
    if(*(int *)a < *(int *)b){
        return -1;
    }else if(*(int *)a == *(int *)b){
        return 0;
    }
    return 1;
}


int main(){
    int n, i;
    int x[MAX];

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
    }
    // qsort http://msdn.microsoft.com/ja-jp/library/zes7xw0h.aspx
    // void qsort(void *base, size_t num, size_t width, int (__cdecl *compare )(const void *, const void *));
    // void * base：並べ替える配列
    // size_t num：配列の要素数
    // size_t width：配列の要素のサイズ
    // int compare：2 つの配列要素を比較し彼らの関係を指定する値を返すユーザー指定ルーチンへのポインター
    qsort((void *)x, n, sizeof(x[0]), intcmp);

    for(i=0;i<n;i++){
        if(i)printf(" ");
        printf("%d", x[i]);
    }
    printf("\n");

    return 0;
}
//*/