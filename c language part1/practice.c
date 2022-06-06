//#include<stdio.h>

//int main(){

//  int length = 3, breadth = 5;
//int area = length * breadth;
//printf("the area of  thid reactangle is %d", area);

//    return 0;
//}

//----------------value input by the user---------------//

//#include <stdio.h>

//int main()
//{
 //   int length, breadth;
  //  printf("what is the length of the reactangle\n");
   /// scanf("%d", &length);
   // printf("what is the breadth of the reactangle\n");
    //scanf("%d", &breadth);

 //   printf("the area of your reactangle is %d", length * breadth);

  //  return 0;
//}



//#include<stdio.h>

/*int main(){
    int radius = 5;
    float pi= 3.14;
    printf("the area of this circle is %f" , pi*radius*radius);
    int hieght = 6;
    printf("the volume of this cylender is %f" , pi*radius*radius*hieght);
    return 0;


#include<stdio.h>
}*/

/*int main(){
    float c = 4 ,  far;
    far = (c* 9 / 5 ) + 32;
    printf("the value of celsius temp in far is %f" , far); 
    return 0;
#include<stdio.h>

int main(){
    int age;
    printf("hello veere bhul gya na sab lmao\n");
    printf("what is your age\n");
    scanf( "%d" , &age );
    if (age << 18)
    {
        printf("nigga you aint getting pussy\n");
    }
    if (age == 18)
    {
        printf("you will get pussy\n");
    }
    else
    {
        printf("damn son you getting old\n");
    }
    
    return 0;
}

#include<stdio.h>

int main(){
    int i,j,rows;
    printf("enter the number of rows :\n");
    scanf("%d" ,&rows);
    for ( i = 1; i <= rows ; i++)
    {
        for ( j = 1; j <= i ; j++)
        {
             printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int i,j;
    char input , alphabet = 'A';
    printf("enter a upper case alphaebt that you want in the last row :");
    scanf("%c" , &input);
    for ( i = 1; i <= (input - 'A' + 1 ); i++)
    {
        for ( j = 1; j <= i ; j++)
        {
            printf("%c " , alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int i , j , rows;
    printf("enter the number of rows : ");
    scanf("%d" , &rows);
    for ( i = rows ; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>

int main(){
    int i , space , rows , k;
    printf("enter the number of rows : ");
    scanf("%d" , &rows);
    for(i = 1 ; i <= rows; ++i, k = 0){
        for ( space = 1; space <= rows - i ; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int i , space , rows , k = 0 , count = 0, count1 = 0;
    printf("enter the number of rows : ");
    scanf("%d" , &rows);
    for(i = 1 ; i <= rows; ++i){
        for ( space = 1; space <= rows - i ; ++space)
        {
            printf("  ");
            ++count;
        }
        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                printf("%d " , i + k );
                ++count;
            }
            else
            {
                ++count1;
                printf("%d " , (i + k - 2 * count1));
            }
            ++k;    
        }
        count1=count = k = 0;
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main(){
    int i , j , rows , number = 1;
    printf("Enter the number of rows : ");
    scanf("%d" , &rows);
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d" , number);
            ++number;
        }
        printf("\n");
    }
    return 0;
}
}*/