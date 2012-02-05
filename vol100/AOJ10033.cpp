// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10033
//*
#include <stdio.h>
#include <string.h>
#define Mt 100
#define MAX 1000

void push(int n, char stack[Mt][MAX], char c){
    int i;
    for(i=MAX;i>0;i--){
        stack[n-1][i]=stack[n-1][i-1];
    }
    stack[n-1][0]=c;
}

char pop(int n, char stack[Mt][MAX]){
    int i;
    char c;
    c=stack[n-1][0];
    for(i=1;i<MAX;i++){
        stack[n-1][i-1]=stack[n-1][i];
    }
    return c;
}
/*
void show(int n, char stack[Mt][MAX]){
    int i;
    for(i=0;i<MAX;i++){
        printf("%d:%c\n", i, stack[n-1][i]);
    }
    
}
*/
int main(){
    int n, m;
    char cmnd[10], stack[Mt][MAX], pops[Mt*MAX];
    char c;
    int i, j=0;
    
    scanf("%d", &n);
    while(1){
        scanf("%s", cmnd);
        if(strcmp(cmnd, "quit")==0){
            break;
        }else if(strcmp(cmnd, "pop")==0){
            scanf("%d", &n);
            pops[j++]=pop(n, stack);
        }else if(strcmp(cmnd, "push")==0){
            scanf("%d %c", &n, &c);
            push(n, stack, c);
        }else if(strcmp(cmnd, "move")==0){
            scanf("%d %d", &n, &m);
            push(m, stack, pop(n, stack));
        }
        /*
        else if(strcmp(cmnd, "show")==0){
            scanf("%d", &n);
            show(n, stack);
        }
        */
    }
    for(i=0;i<j;i++){
        printf("%c\n", pops[i]);
    }

    return 0;
}
//*/