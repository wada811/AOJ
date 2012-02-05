// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10032
//*
#include <stdio.h>
#include <string.h>
#define MAX 1000

void push(char stack[MAX], char c){
    int i;
    for(i=MAX;i>0;i--){
        stack[i]=stack[i-1];
    }
    stack[0]=c;
}

char pop(char stack[MAX]){
    int i;
    char c;
    c=stack[0];
    for(i=1;i<MAX;i++){
        stack[i-1]=stack[i];
    }
    return c;
}

void show(int n, char array[MAX]){
    int i;
    for(i=0;i<n;i++){
        printf("%c\n", array[i]);
    }
}

int main(){
    int n, m;
    char cmnd[5], stack[MAX], pops[MAX];
    char c;
    int i=0, j=0;
    
    scanf("%d", &n);
    while(1){
        scanf("%s", cmnd);
        if(strcmp(cmnd, "quit")==0){
            break;
        }else if(strcmp(cmnd, "pop")==0){
            pops[j++]=pop(stack);
        }else if(strcmp(cmnd, "push")==0){
            scanf(" %c", &c);
            push(stack, c);
        }else if(strcmp(cmnd, "show")==0){
            // デバッグ用
            show(MAX, stack);
        }
    }
    show(j, pops);

    return 0;
}
//*/