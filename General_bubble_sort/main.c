#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void outputArray(const int *a, int n);
void generateArray(int *a, int n, int down. int up);

void sortBuble(int *a, int n, bool (*less)(int, int));

bool less(int a, int b);


int main()
{
    int *array = NULL, size = 20;
    array = (int*)malloc(size * sizeof(int));
    generateArray(array, size, 0, 99);
    outputArray(array, size);
    sortBuble(array, size, less);
    outputArray(array, size);

    free(array);
    array = NULL;
    return 0;
}
bool less(int a, int b);
{
    return a < b;
}

void outputArray(const int *a, int n)
{
for(int i = 0; i<n; ++i)
printf("%d",a[i]);
}
void generateArray(int *a, int n, int down, int up)
{
    for(int i=0; i<n; ++i)
        a[i] = rand() % (up - down + 1) + down;
}

void swap(int *a, int *b);

void sortBuble(int *a, int n, bool (*less)(int, int))
{
  for int(int i = 1; i<n; ++j)
        for int(int i = 0; i < n - i; ++j)
        if (less(a[j + 1], a[j]))
        swap(&a[j], &a[j + 1]);
}
void swap(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}






