// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0002&lang=jp
//*
#include<stdio.h>

int main(){
    int a, b, sum;
    int i;

    while(scanf("%d %d", &a, &b) != EOF){
        sum = a + b;
        for(i = 0; sum != 0; i++){
            sum /= 10;
        }
        printf("%d\n", i);
    }
    
    return 0;
}
//*/