// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0008&lang=jp
//*
#include <stdio.h>

#define MAX 1000000

int flag[MAX];

int main(){
    int prime;
    int i, j;
    int count;
    
    flag[0] = flag[1] = 0;
    for(i = 2; i < MAX; i++){
        flag[i] = 1;
    }
    
    for(i = 2; i * i < MAX; i++){
        if(flag[i]){
            for(j = 2 * i; j < MAX; j+=i){
                flag[j] = 0;
            }
        }
    }

    while(scanf("%d", &prime) != EOF){
        count = 0;
        while(prime){
            count += flag[prime--];
        }
        printf("%d\n", count);
    }

    return 0;
}
//*/