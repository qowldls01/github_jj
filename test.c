#include <stdio.h>

int plus(int x, int y)
{
    int a;
    a = x+y;
    return a;
}
int minus(int x, int y)
{
    int b;
    b=x-y;
    return b;
}
int multi(int x, int y)
{
    int t1;
    t1 = x*y;
    return t1;
}
int division(int x,int y)
{
    int t2;
    t2 = x/y;
    return t2;
}
int main(void)
{
    int a,b,c, result;
    do{
        printf("1---?��?��\n");
        printf("2---뺄셈\n");
        printf("3---곱셈\n");
        printf("4---?��?��?��\n");
        scanf("%d",&a);
    } while(a < 1|| a> 4 );
    printf("?��?��?�� 메뉴 = %d\n",a);

    switch(a){
        case 1:
            printf("?�� ?��?���? ?��?��?��?��?��: ");
            scanf("%d %d",&b,&c);
            result = plus(a,b);
            printf("%d\n",result);
            break;
        case 2:
            printf("?�� ?��?���? ?��?��?��?��?�� :");
            scanf("%d %d",&a,&b);
            result = minus(a,b);
            printf("%d\n",result);
            break;
        case 3:
            printf("?�� ?��?���? ?��?��?��?��?�� :");
            scanf("%d %d",&a,&b);
            result = multi(a,b);
            printf("%d\n",result);
            break;
        case 4:
            printf("?�� ?��?���? ?��?��?��?��?�� :");
            scanf("%d %d",&a,&b);
            result = division(a,b);
            printf("%d\n",result);
            break;
        default:
            printf("null\n");
            break;
    }
    return 0;
}