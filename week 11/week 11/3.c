#include <stdio.h>

void sub1(int *, int);
void sub2(int *, int);
void sub3(int *, int);
void sub4(int *, int);

int main(void)
{
    void (*pf[4])(int *, int) = {sub1, sub2, sub3, sub4};
    int data = 100;

    pf[1](&data, 10);
    pf[3](&data, 5);
    printf("%d\n", data);

    return 0;
}

void sub1(int *p, int n)
{
    *p += n;
}
void sub2(int *p, int n)
{
    *p -= n;
}
void sub3(int *p, int n)
{
    *p *= n;
}
void sub4(int *p, int n)
{
    *p /= n;
}