// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10017
//*
#include <stdio.h>

int main(){
    int i, j, k;
    int n, x;
    int nx=0;
    while(1){
        scanf("%d %d ", &n, &x);
        if(n==0&&x==0)break;
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    if(x==i+j+k){
                        nx++;
                        break;
                    }
                }
            }
        }
        printf("%d\n", nx);
    }
    return 0;
}
//*/