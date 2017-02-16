#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double a , b , c , s , area ;
    
    printf("请输入三角形的三边边长以求面积，逗号隔开：\n");
    scanf("%lf,%lf,%lf",&a , &b , &c );
    
    s = (a + b + c) / 2 ;
    
    area = sqrt ( s * ( s - a ) * ( s - b ) * ( s - c ) );
    
    //printf("%f , %f , %f ,\n%f",a , b , c , area );
    //printf("%f\n", area );
    printf("三角形的面积为 %-7.2f\n", area );

    return 0;
}
