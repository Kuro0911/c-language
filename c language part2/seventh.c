//--------------------------------------------------------------------
//ARRAYS
//--------------------------------------------------------------------
/*
#include<stdio.h>

int main(){
    int marks[4];
    marks[0]= 33;
    marks[1]=43;
    marks[2]=23;
    marks[3]=33;
    return 0;
}
*/

//--------------------------------------------------------------------

/*
#include<stdio.h>

int main(){
    int marks[4];
    printf("enter the value of marks for student 1 :");
    scanf("%d"  , &marks[0]);
    printf("enter the value of marks for student 2 :");
    scanf("%d" , &marks[1]);
    printf("enter the value of marks for student 3 :");
    scanf("%d" , &marks[2]);
    printf("enter the value of marks for student 4 :");
    scanf("%d" , &marks[3]);

    return 0;
}
*/
//--------------------------------------------------------------------
/*
#include<stdio.h>

int main(){
    int marks[5];
    for(int i = 0 ;i<5; i++){
    printf("enter the value of marks for student %d :\n"  , i+1);
    scanf("%d" , &marks[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
        printf(" the value of marks for student %d is :%d\n"  , i+1 , marks[i]);
    }
    
    return 0;
}
*/
//--------------------------------------------------------------------

//POINTER ARETHMATIC

//--------------------------------------------------------------------
/*
#include<stdio.h>

int main(){
    int i = 4;
    int *ptr = &i;
    printf("the value of ptr id %u\n" , ptr );
    ptr = ptr + 1;
    printf("the value of ptr id %u\n" , ptr);
    return 0;
}

*/

//--------------------------------------------------------------------

/*
#include<stdio.h>

int main(){
    int marks[0];
    int *ptr;
    for(int i = 0; i < 4; i++){
        printf("enter thr value for the markd of student %d :\n" , i+1);
        scanf("%d" , ptr);
    }
    ptr++;

        for(int i = 0; i < 4; i++){
        printf("enter thr value for the markd of student %d is %d :\n" , i+1, marks[1]);
    }
    return 0;
}
*/

//--------------------------------------------------------------------

/*
#include<stdio.h>
void printArray(int , *ptr , int n ){
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d \n " , i + 1 , *(ptr + 1));
    }
    
}
int main(){
    int arr[] = {32 , 43 ,32 , 22 ,45,67}   ;
    printArray(arr , 7);

    return 0;
}
=======================================================================================================
***add***
#include<stdio.h>

int main(){
    int array[5],sum,a;    
    for(int i = 0 ;i<5; i++){
    printf("enter the value of marks for student %d :\n"  , i+1);
    scanf("%d" , &array[i] );
    }

    sum = 0;

    for ( a = 4; a>=0; a--)
    {
        sum = sum + array[a];
    }
    
    printf("sum of marks are %d" , sum );

    return 0;
}
***reverse order***
#include<stdio.h>

int main(){
    int marks[5];
    for(int i = 0 ;i<5; i++){
    printf("enter the value of marks for student %d :\n"  , i+1);
    scanf("%d" , &marks[i]);
    }
    for (int  i = 4 ; i >= 0; i--)
    {
        printf("enter the value of marks for student %d is :%d\n"  , i+1 , marks[i]);
    }
    
    return 0;
}


#include<stdio.h>

int main(){
    int marks[10],pos,A,i,n = 10;
    for( i = 0 ;i<10; i++){
        marks[i] =i + 1;
    }
    for (  i = 0; i < 10; i++)
    {
        printf(" %d", marks[i]);
    }
    printf("\n");

    printf("enter the input number = ");
    scanf("%d",&A);

    printf("enter the position of input number = ");
    scanf("%d",&pos);

    n++;

    for ( i = 10; i >= pos  ; i--)
    {
        marks[i] = marks[i - 1];
    }
    
    marks[pos - i] = A;

    for ( i = 0; i <= 10 ; i++)
    {
        printf("%d " , marks[i]);

    }
    

    return 0;
}
*/

#include<stdio.h>

int main(){
    int marks[10],pos,A,i,n = 10;
    for( i = 0 ;i<10; i++){
        marks[i] =i + 1;
    }
    for (  i = 0; i < 10; i++)
    {
        printf(" %d", marks[i]);
    }
    printf("\n");

    printf("enter the input number = ");
    scanf("%d",&A);

    printf("enter the position of input number = ");
    scanf("%d",&pos);

    n--;

    for ( i = 10; i >= pos  ; i--)
    {
        marks[i] = marks[i - 1];
    }
    
    marks[pos - i] = A;

    for ( i = 0; i <= 10 ; i++)
    {
        printf("%d " , marks[i]);

    }
    

    return 0;
}