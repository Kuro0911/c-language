/*
// 1
#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Value of A Before: %d \nValue of B Before: %d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nValue of A After: %d\nValue of B After: %d", a, b);
    return 0;
}
// 2
#include <stdio.h>

int main()
{
    unsigned long long int fact = 1;
    int i, j;
    for (i = 1; i <= 35; i++)
    {
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        printf("factorial of %d is : %llu\n", i, fact);
        fact = 1;
    }
    return 0;
}
// 3
#include <stdio.h>
void pen(int n)
{
    int r = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf(" | \n");
            printf(" | \n");
            printf(" 0 \n");
        }
        else if (r == 0)
        {
            printf("  / \n");
            printf(" / \n");
            printf("0 \n");
            r = 1;
        }
        else
        {
            printf(" \\ \n");
            printf("  \\ \n");
            printf("   0 \n");
            r = 0;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    pen(n);
    return 0;
}
// 4
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int hour, minute, second;
    hour = minute = second = 0;
    while (1)
    {
        system("clear");
        printf("HH : MM : SS\n");
        printf("%02d : %02d : %02d ", hour, minute, second);
        fflush(stdout);
        second++;
        if (second == 60)
        {
            minute += 1;
            second = 0;
        }
        if (minute == 60)
        {
            hour += 1;
            minute = 0;
        }
        if (hour == 24)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        sleep(1);
    }
    return 0;
}

// 5
#include <stdio.h>

void printPattern(int n)
{
    int temp = 1, i, fg = 0;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", temp);
            temp = !temp;
        }
        printf("\n", temp);
    }
}
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
// 6
#include <stdio.h>
int main()
{
    char opt;
    int count;
    int num, value = 0, t;
    char op = 'y';
    printf("Enter operator:\n  Addition : +\n  Subtraction : -\n  Multiplication : *\n  Division : /\n  Negation : n\n  Mean : m\n  Percentage : p\n");
    scanf("%c", &opt);
    switch (opt)
    {
    case '+':
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value + num;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case '-':
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = num - value;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case '/':
        value = 1;
        printf("Enter number : ");
        scanf("%d", &num);
        printf("Enter number : ");
        int temp;
        scanf("%d", &temp);
        value = num / temp;
        printf("Value = %d\n", value);
        printf("To continue enter Y or else enter N : ");
        scanf(" %c", &op);
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value / num;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case '*':
        value = 1;
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value * num;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case 'n':
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            printf("Negation is %d", -num);
            printf("\nTo continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        break;
    case 'm':
        count = 0;
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value + num;
            count++;
            printf("Enter Y for more or N for final result : ");
            scanf(" %c", &op);
        }
        printf("Mean = %d", value / count);
        break;
    case 'p':
        count = 0;
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value + num;
            count++;
            printf("Enter Y for more or N for final result : ");
            scanf(" %c", &op);
        }
        printf("Percentage = %d", (value * 100) / (count * 100));
        break;
    default:
        printf("Wrong option");
    }
    return 0;
}
// 7
#include <stdio.h>
int main()
{
    int k, position = 0;
    printf("Enter seconds : ");
    scanf("%d", &k);
    for (int x = 1; x <= k; x++)
    {
        if (x % 2 == 0)
        {
            position = position - 1;
        }
        else
        {
            position = position + 3;
        }
    }
    printf("After %d seconds he will be at position : %d", k, position);
    return 0;
}
// 8
names = []
for i in range(1, 11):
        name = input(f"enter name of {i} :")
        names.append(name)
for x in names:
    print(f"Good Moring Mr. {x}")
*/
#include <stdio.h>
int main()
{
    char opt;
    int count;
    int num, value = 0, t;
    char op = 'y';
    printf("Enter operator:\n  Addition : +\n  Subtraction : -\n  Multiplication : *\n  Division : /\n  Negation : n\n  Mean : m\n  Percentage : p\n");
    scanf("%c", &opt);
    switch (opt)
    {
    case '+':
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value + num;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case '-':
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = num - value;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case '/':
        value = 1;
        printf("Enter number : ");
        scanf("%d", &num);
        printf("Enter number : ");
        int temp;
        scanf("%d", &temp);
        value = num / temp;
        printf("Value = %d\n", value);
        printf("To continue enter Y or else enter N : ");
        scanf(" %c", &op);
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value / num;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case '*':
        value = 1;
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value * num;
            printf("Value = %d\n", value);
            printf("To continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        printf("Final Value = %d", value);
        break;
    case 'n':
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            printf("Negation is %d", -num);
            printf("\nTo continue enter Y or else enter N : ");
            scanf(" %c", &op);
        }
        break;
    case 'm':
        count = 0;
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value + num;
            count++;
            printf("Enter Y for more or N for final result : ");
            scanf(" %c", &op);
        }
        printf("Mean = %d", value / count);
        break;
    case 'p':
        count = 0;
        while (op == 'Y' || op == 'y')
        {
            printf("Enter number : ");
            scanf("%d", &num);
            value = value + num;
            count++;
            printf("Enter Y for more or N for final result : ");
            scanf(" %c", &op);
        }
        printf("Percentage = %d", (value * 100) / (count * 100));
        break;
    default:
        printf("Wrong option");
    }
    return 0;
}