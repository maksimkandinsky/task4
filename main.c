#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int  gcd (int a,int b){
    int r,x,y;
    x = a;
    y = b;
 if (a < b) {
        a = a - b;
        b = a + b;
        a = b - a;
     }
    while (b > 0){

        r = b;
        b = a % b;
        a = r;
    }
return a;
}
void cancel(int *x,int *y){
    int g;
g = gcd(*x,*y);
*x=*x/g;
*y=*y/g;
}
int main()
{
    int a,b,c,d, p,q;
    setlocale(LC_ALL,"Rus");
    printf("������� ��������� � ����������� ����� �����,��������� � ����������� ������ �����");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    p=a*d+b*c;
    q = b*d;
    cancel(&p,&q);
    printf(" ����� �������� ������ = %d/%d",p,q);
    return 0;
}
