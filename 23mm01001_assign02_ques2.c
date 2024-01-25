#include<stdio.h>
int main() {
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    x>y? (x>z? printf("maximum of three is %u",x):printf("maximum of three is %u",z)):(y>z? printf("maximum of three is %u",y):printf("maximum of three is %u",z));
    return 0;
}