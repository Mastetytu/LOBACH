
#include <stdio.h>
#include <locale.h>

void sorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            printf_s("������ �� ����������");
            return;
        }
    }
    printf_s("������  ����������");
}

int main()
{
    setlocale(LC_ALL, "ru");
    int* mass;
    int size;
    printf_s("������� ������ �������");
    scanf_s("%d", &size);
    mass = (int*)malloc(size * sizeof(int));
}