// AIZU ONLINE JUDGE http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0004&lang=jp
//*
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, d, e, f;
    double det;
    double x, y;
    while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF){
        det = a * e - b * d;
        if(det != 0){
            x = (e * c - b * f) / det;
            y = (a * f - d * c) / det;
            x = (x == fabs(x)) ? fabs(x) : x;
            y = (y == fabs(y)) ? fabs(y) : y;
            // abs/labs/fabs http://homepage1.nifty.com/MADIA/vc/C/c_lang_ansi1.htm
            printf("%.3f %.3f\n", x , y);
        }
    }

    return 0;
}
//*/