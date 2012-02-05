// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10025
//*
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
    int a, b, angle;
    double s, l, h;

    scanf("%d %d %d", &a, &b, &angle);
    // sin(), cos(), tan()は角度がラジアン
    // 度数法からラジアン法への変換：角度(ラジアン)＝角度(度数)*π/180
    // 定数としてπを使うには：math.hのdefineを利用する。
    // 参考：dandelion's log » VC++でM_PIが使えなかった理由判明 http://www.atinfinity.info/blog/archives/14
    h=b*sin(angle*M_PI/180.0);
    s=a*h/2;
    l=a+b+sqrt((a*a+b*b-2*a*b*cos(angle*M_PI/180.0)));
    printf("%f\n", s);
    printf("%f\n", l);
    printf("%f\n", h);

    return 0;
}
//*/