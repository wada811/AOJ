// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10031
//*
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

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
    int n, q;
    int s[MAX], t[MAX];
    int i, j=0, count=0;


    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &s[i]);
    }
    scanf("%d", &q);
    for(i=0;i<q;i++){
        scanf("%d", &t[i]);
    }
    qsort((void *)s, n, sizeof(s[0]), intcmp);
    qsort((void *)t, q, sizeof(t[0]), intcmp);
    // sの入力は重複ありだが、カウントの重複は認められない。
    for(i=0;i<q;i++){
        for(;j<n;j++){
            if(t[i]==s[j]){
                count++;
                j++;
                break;
            }else if(t[i]<s[j]){
                break;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}
//*/