// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10029
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
    // void qsort( void * data , size_t data_cnt, size_t data_size, int( * func )( const void * , const void * );
    // void * data：ソート対象データ
    // size_t data_cnt：ソート対象データ件数
    // size_t data_size：ソート対象データ１件当りのサイズ
    // int func：int型の比較関数(プログラマが作成する関数):strcmpと同様の比較
    qsort((void *)x, n, sizeof(x[0]), intcmp);
    for(i=0;i<n;i++){
        if(i)printf(" ");
        printf("%d", x[i]);
    }
    printf("\n");

    return 0;
}
//*/