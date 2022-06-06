/*
#include <stdio.h>
int main()
{
    printf('Welcome to C');
    return 0;
}
#include <stdio.h>
int main()
{
    printf('hello world');
    return 0;
}
#include <stdio.h>
int main()
{
    int i;
    printf("First 10 number: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>
#include <time.h>
void ShowClock()
{
    struct tm *ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("%s", asctime(ptr));
}
int main()
{
    ShowClock();
    return 0;
}



int main()
{
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
#include <stdio.h>

void printPattern(int n)
{
    int temp = 1, i, fg = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf("%d ", temp);
            temp = !temp;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
#include <stdio.h>
int main()
{
    double a, b, prod;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    prod = a * b;

    printf("Product = %.2lf", prod);

    return 0;
}

*/
