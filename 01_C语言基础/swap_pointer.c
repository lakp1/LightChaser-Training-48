#include <stdio.h>
void swap(double*p1, double*p2) {
    double temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    double a,b;
    
    printf("输入两个数");
    scanf("%lf %lf", &a, &b);
    swap(&a, &b);
    printf("%lf, %lf\n", a, b);
    return 0;
}
