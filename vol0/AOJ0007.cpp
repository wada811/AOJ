// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0007&lang=jp
//*
#include <stdio.h>



int main(){
    int debt = 100000;
    int week;

    scanf("%d", &week);

    while(week--){
        debt *= 1.05;
        if(debt % 1000){
            debt = (debt / 1000 + 1) * 1000;
        }
    }

    printf("%d\n", debt);

    return 0;
}
//*/