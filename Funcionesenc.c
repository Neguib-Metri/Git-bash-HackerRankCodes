#include <stdio.h>
int maxofour(int a, int b, int c, int d){
int x;

if(a > b && a > c && a > d){
            x=a;
        }else{
            if(b > a && b > c && b > d){
                x=b;
            }else{
                if(c > a && c > b && c > d){
                    x=c;
                }else
                    x=d;
            }
        }
return x;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxofour(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
