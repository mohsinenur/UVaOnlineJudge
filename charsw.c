#include<stdio.h>
int main()
{
    char a[1];
    char b[1];
    scanf("%s",&a[0]);
    scanf("%s",&b[0]);
    swab(a,b);
    printf("%c %c",a,b);
    return 0;
}
