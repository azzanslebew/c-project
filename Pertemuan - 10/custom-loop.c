#include <stdio.h>

int main()
{
    int A, B, K;

    printf("Input batas bawah   : ");
    scanf("%d", &A);

    printf("Input batas atas    : ");
    scanf("%d", &B);

    if (B < A)
    {
        printf("Batas atas harus lebih besar dari batas bawah.\n");
        return 1;
    }

    printf("Update              : ");
    scanf("%d", &K);

    for (int i = A; i < B; i += K)
    {
        printf("%d ", i);
    }

    return 0;
}