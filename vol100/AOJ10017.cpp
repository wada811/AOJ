// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10017
//*
#include <stdio.h>

int main(){
    int i, j, k;
    int n=5, x=9;
    int count;

    while(1){
        scanf("%d %d ", &n, &x);
        if(n==0&&x==0)break;
        count=0;
        for(i=1;3*i+3<=x;i++){
            for(j=i+1;i+2*j+1<=x;j++){
                for(k=n;k>j;k--){
                    if(x==i+j+k){
                        count++;
                        break;
                    }else if(x>=i+j+k){
                        break;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
//*/