// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10008
//*
#include <stdio.h>

int main(){
    int a, b, d, r;
    double f;
    scanf("%d %d", &a, &b);
    d=a/b;
    r=a%b;
    f=(double)a/(double)b;
    printf("%d %d %f\n", d, r, f);
    return 0;
}
//*/