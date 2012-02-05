// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10031
//*
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int intcmp( const void * a , const void * b ) {
  /* ������void*�^�ƋK�肳��Ă���̂�int�^��cast���� */
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
    // s�̓��͂͏d�����肾���A�J�E���g�̏d���͔F�߂��Ȃ��B
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