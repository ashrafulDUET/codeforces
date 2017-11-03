#include <stdio.h>
int main()
{
   int m,n,a;
   int width,length;
   scanf("%d%d%d", &m, &n, &a);
   length= m / a + (m % a == 0 ? 0 : 1);
   width= n / a + (n % a == 0 ? 0 : 1);
   printf("%I64d", (long long)length * width);
    return 0;
}
