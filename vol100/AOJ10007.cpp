// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10007
//*
#include <stdio.h>

int main(){
    int x, y;
    while(1){
        scanf("%d %d", &x, &y);
        if(x==0 && y==0)break;
        if(x<y){
            printf("%d %d\n", x, y);
        }else{
            printf("%d %d\n", y, x);
        }
    }
    return 0;
}
//*/