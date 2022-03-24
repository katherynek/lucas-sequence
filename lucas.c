// LUCAS SEQUENCE CALCULATOR

#include <stdio.h>

int Lucas(int n);

int main(void)
{
    int n2;

    printf("Enter Lucas Number: ");
    scanf("%d", &n2);
    printf("Lucas Sequence at n = %d: %d\n", n2, Lucas(n2));
    return 0;
}

int Lucas(int n)
{
    if(n == 0)
      return 2;
    else if(n == 1)
      return 1;
    else
      return Lucas(n-1) + Lucas(n-2);
}