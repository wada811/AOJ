// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10032
//*
#include <stdio.h>
#include <string.h>
#define MAX 1000

char stack[MAX];
int top = 0;

void push(char c){
    if(top != MAX){
        stack[top] = c;
        top++;
    }
}

char pop(){
    if(top != 0){
        top--;
        return stack[top];
    }
    return;
}

int main(){
    char cmnd[5], pops[MAX];
    char c;
    int i, n=0;
    
    while(1){
        scanf("%s", cmnd);
        if(strcmp(cmnd, "quit")==0){
            break;
        }else if(strcmp(cmnd, "pop")==0){
            pops[n++]=pop();
        }else if(strcmp(cmnd, "push")==0){
            scanf(" %c", &c);
            push(c);
        }
    }
    
    for(i=0;i<n;i++){
        printf("%c\n", pops[i]);
    }

    return 0;
}
//*/