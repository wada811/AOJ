// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10030
//*
#include <stdio.h>
#define MAX 1000

int main(){
    int n, q;
    int s[MAX], t[MAX];
    int i, j, count=0;


    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &s[i]);
    }
    scanf("%d", &q);
    for(i=0;i<q;i++){
        scanf("%d", &t[i]);
    }
    // sの入力は重複ありだが、カウントの重複は認められない。
    for(i=0;i<q;i++){
        for(j=0;j<n;j++){
            if(t[i]==s[j]){
                count++;
                break;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}
//*/