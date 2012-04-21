// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10033
//*
#include <stdio.h>
#include <string.h>
#define Mt 100
#define MAX 1000

char stack[Mt][MAX];
int top[Mt] = {0};

void push(int n, char c){
    if(top[n] != MAX){
        stack[n][top[n]] = c;
        top[n]++;
    }
}

char pop(int n){
    if(top[n] != 0){
        top[n]--;
        return stack[n][top[n]];
    }
    return;
}

int main(){
    int n, m;
    char cmnd[10], pops[Mt*MAX];
    char c;
    int i, j=0;
    
    scanf("%d", &n);
    while(1){
        scanf("%s", cmnd);
        if(strcmp(cmnd, "quit")==0){
            break;
        }else if(strcmp(cmnd, "pop")==0){
            scanf("%d", &n);
            pops[j++]=pop(n);
        }else if(strcmp(cmnd, "push")==0){
            scanf("%d %c", &n, &c);
            push(n, c);
        }else if(strcmp(cmnd, "move")==0){
            scanf("%d %d", &n, &m);
            push(m, pop(n));
        }
    }
    for(i=0;i<j;i++){
        printf("%c\n", pops[i]);
    }

    return 0;
}
//*/