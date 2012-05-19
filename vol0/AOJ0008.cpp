// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0008&lang=jp
//*
#include <stdio.h>

#define MAX 1000000

int isPrime[MAX];

int main(){
    int num;
    int i, j;
    int count;
    
    // �z��̏�����
    isPrime[0] = isPrime[1] = 0;
    for(i = 2; i < MAX; i++){
        isPrime[i] = 1;
    }
    
    // �G���X�g�e�l�X�̂ӂ邢
    for(i = 2; i * i < MAX; i++){
        if(isPrime[i]){
            // i�̔{���͑f������Ȃ��̂Ńt���O�ύX
            for(j = 2 * i; j < MAX; j+=i){
                isPrime[j] = 0;
            }
        }
    }

    while(scanf("%d", &num) != EOF){
        count = 0;
        while(num){
            count += isPrime[num--];
        }
        printf("%d\n", count);
    }

    return 0;
}
//*/