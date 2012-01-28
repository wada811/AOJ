// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10021
//*
#include <stdio.h>

int main(){
    int n;
    char word[21], first[21];
    int i, j;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf(" %s", word);
        if(i==0){
            for(j=0;j<21;j++){
                first[j]=word[j];
            }
        }
        for(j=0;j<21;j++){
            if(first[j]>word[j]){
                for(j=0;j<21;j++){
                    first[j]=word[j];
                }
                break;
            }else if(first[j]==word[j]){
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