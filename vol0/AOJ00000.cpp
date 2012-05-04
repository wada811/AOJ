// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0000&lang=jp
//*
#include<stdio.h>

int main(){
    int i, j;

    for(i = 1; i < 10; i++){
        for(j = 1; j < 10; j++){
            printf("%dx%d=%d\n", i, j, i*j);
        }
    }

    return 0;
}
//*/