// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10021
//*
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char word[21], first[21];
    int i, j;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf(" %s", word);
        if(i==0){
            strcpy(first, word);
        }
        for(j=0;j<21;j++){
            if(strcmp(first, word)>0){
                strcpy(first, word);
                break;
            }else if(strcmp(first, word)==0){
                continue;
            }else{
                break;
            }
        }
    }
    printf("%s\n", first);

return 0;
}
//*/