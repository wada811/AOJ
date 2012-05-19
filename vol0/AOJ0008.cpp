// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0008&lang=jp
//*
#include <stdio.h>

int main(){
    long prime;
    long i, j;
    int count;
    int flag;

    while(scanf("%ld", &prime) != EOF){
        count = 0;
        for(i = 3; i <= prime; i += 2){
            flag = 0;
            for(j = 3; j <= i / 2; j += 2){
                if(i % j == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                count++;
            }
        }

        printf("%d\n", prime > 1 ? ++count : count);
    }
    return 0;
}
//*/