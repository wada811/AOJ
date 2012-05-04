// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0003&lang=jp
//*
#include <stdio.h>

int main(){
    int a, b, c, temp;
    int n, i;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a > c){
            temp = c;
            c = a;
            a = temp;
        }
        if(b > c){
            temp = c;
            c = b;
            b = temp;
        }
        if(a * a + b * b == c * c){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}
//*/