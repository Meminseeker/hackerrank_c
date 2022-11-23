#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float m1, m2;

    scanf("%d %d", &n1, &n2);
    scanf ("%f %f", &m1, &m2);

    int sum1 = n1 + n2;
    int diff1 = n1 - n2;

    float sum2 = m1 + m2;
    float diff2 = m1 - m2;

    printf("%d %d\n", sum1, diff1);
    printf("%.1f %.1f", sum2, diff2);
    
    return 0;
}
