//--------------------------------------------------------------------
//STRUCTURES
//--------------------------------------------------------------------
/*
#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name [10];

};


int main(){
    int a = 34;
    char b = 'g';
    float d = 290.98;

   struct employee e1;
   e1.code = 100;
   e1.salary = 34.43;
   strcpy(e1.name , "raptor");
    return 0;
}
*/

/*

#include<stdio.h>
#include<string.h>


struct employee
{
    int code;
    float salary;
    char name [10];

};

int main(){
    struct employee e1,e2,e3;
    printf("enter the value of code for e1\n ");
    scanf("%d" , &e1.code);
    printf("enter the value of salary for e1\n ");
    scanf("%f" , &e1.salary);
    printf("enter the name of e1\n ");
    scanf("%s" , e1.name);
    
    printf("enter the value of code for e2\n ");
    scanf("%d" , &e2.code);
    printf("enter the value of salary for e2\n ");
    scanf("%f" , &e2.salary);
    printf("enter the name of e2\n ");
    scanf("%s" , e2.name);

    printf("enter the value of code for e3\n ");
    scanf("%d" , &e3.code);
    printf("enter the value of salary for e3\n ");
    scanf("%f" , &e3.salary);
    printf("enter the name of e3\n ");
    scanf("%s" , e3.name);

    return 0;
}
*/

//--------------------------------------------------------------------

/*
#include<stdio.h>
#include<string.h>


struct employee
{
    int code;
    float salary;
    char name [10];

};

int main(){
    struct employee e1;
    struct employee *ptr ;

    ptr = &e1;
   // (*ptr).code = 101; //or we can use arrow opreator
   ptr->code = 101; //arrow opreator
    printf("%d" , e1.code);
 
    return 0;
}

*/

//--------------------------------------------------------------------
/*
#include<stdio.h>

struct vector {
    int x;
    int y;

};

int main(){

    struct vector v1,v2;
    v1.x = 34;
    v1.x = 54;
    printf("x dim is %d and y is % d \n" , v1.x , v1.y);

    v2.x = 34;
    v2.x = 54;
    printf("x dim is %d and y is % d \n" , v2.x , v2.y);
    
    return 0;
*/
//-------------------------------------------------------------------

/*
#include<stdio.h>

struct vector {
    int x;
    int y;

};

struct vector sumvector (struct vector v1 , struct vector v2){
    struct vector result ;
    result.x = v1.x + v2.y;
    result.y = v2.x + v1.y;

}
int main(){

    struct vector v1,v2;
    v1.x = 34;
    v1.x = 54;
    printf("x dim is %d and y is % d \n" , v1.x , v1.y);

    v2.x = 34;
    v2.x = 54;
    printf("x dim is %d and y is % d \n" , v2.x , v2.y);

    sum = sumvector(v1  , v2);
    printf("x dim is %d and y is % d \n" , sum.x , sum.y);

    
    return 0;
}
*/
//-------------------------------------------------------------------


