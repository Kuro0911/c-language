//---------------------------------------
//POINTERS
//---------------------------------------
/*
#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i;//j will store the address of a
    printf("the value of i is %d\n" , i);
    printf("the value of i is %d\n" , *j);
    printf("the value of i is %u\n" , &i);//address of i
    printf("the value of i is %u\n" , j);
    printf("the value of j is %u\n" , &j);//adderss of j

  return 0;
}
*/
//--------------------------------------------------
//CALL BY VALUE
/*
#include<stdio.h>

int main(){
    int a = 4, b = 7;
    printf("the value is %d\n", sum(a,b));
    return 0;
}
int sum (int a , int b){
    int c;
    c = a + b;
    return c;
}
*/
//----------------------------------------------------
//CALL BY VALUE
/*
#include<stdio.h>
void swap(int *a , int *b);
void wrongswap(int a , int b);
int main(){
    int x=3, y=4;
    printf("the value of x and y is %d and %d\n" , x, y);
    //wrongswap(x,y);//will not work due to call by value
    swap(&x,&y);
    printf("the value of x and y is %d and %d\n" , x, y);

    return 0;
}


void wrongswap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/
//--------------------------------------------------------------------------------
//PRACTICE
//--------------------------------------------------------------------------------
/*
#include<stdio.h>

int main(){
    int a;
    printf("the value of a is %u\n" ,&a );
    return 0;
}
*/

//--------------------------------------------------------------------------------
/*
#include<stdio.h>
void printadd(int  a){
    printf("the address of variable i is %u" , &a );
}
int main(){
    int i = 4;
    printf("the value of variable i is %d\n" , i );
    printadd(i);
    printf("the address of variable i is %u\n" , &i );

    return 0;
}
*/
//-------------------------------------------------------------------------------------------------
/*
#include<stdio.h>
void sumandaverage(int  a ,int b , int *sum ,float *avg){
    *sum =  a + b;
    *avg = (float)(*sum/2 );

}
int main(){
    int i , j , sum;
    float avg;
    i = 84;
    j = 55;
    sumandaverage(i,j, &sum , &avg);
    printf("the value of sum is %d\n" , sum );
    
    printf("the value of avg is %f\n" , avg );

    return 0;
}

*/
//-----------------------------------------------------------------------------------------------
/*
#include<stdio.h>

int main(){
    int i = 345;
    int *ptr;
    int**ptr_ptr;

    ptr = &i;
    ptr_ptr= &ptr;

    printf("the value of i is %d " , **ptr_ptr);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------

