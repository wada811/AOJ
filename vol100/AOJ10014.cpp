// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10014
//*
#include <stdio.h>

int main(){
    int h, w;
    int i, j;
    while(1){
        scanf("%d %d ", &h, &w);
        if(h==0&&w==0)break;
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if((i%2==0&&j%2==0)||(i%2==1&&j%2==1)){
                    printf("#");
                }else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
//*/