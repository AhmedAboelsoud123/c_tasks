#include <stdio.h>

/**
 * main -Check athe code
 * 
 * Return: 0
*/

int main(void)
{
    int t1, t2, n;
    int nt;

    t1 = 0; 
    t2 = 1;
    nt = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("0, 1");

    for (int i = 0; i < n - 2; i++)
    {
        printf(", %d", nt);
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
    }

    return (0);
}