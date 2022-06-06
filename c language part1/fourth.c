
/*
====================================================================

        l o o p s 

--------------------------------------------------------------------
*/

//------------------
//while loops
//------------------
/*#include<stdio.h>

int main(){
    int a;
    scanf("%d" , &a);
    while(a<10){
        printf("%d\n" , a);
        a++;
    }
    return 0;
}
*/

/*#include<stdio.h>

int main(){
    int i = 0;
    while(i <= 20){
        if (1 >= 10)
        {
            printf("the value of i is %d\n" , i);
        }
        i++;
        
    }

    return 0;
}*/

/*
=================
DO WHILE LOOPS
=================
*/

/*#include<stdio.h>

int main(){
    int i = 0;


    do
    {
        printf("the value of i is %d\n" , i);
        i++;
    } while (i < 10);
    
    return 0;
}
*/

/*#include<stdio.h>

int main(){
    int i = 0;
    int n;

    scanf("%d" , &n);

    do{
        printf("the no. is %d \n" , i+1);
        i++;


    }while(i<n);
    return 0;
}*/

/*
====================

FOR LOOP

====================
*/

/*#include<stdio.h>

int main(){
    for(int a = 0; a<10; a++){
        printf("the value of a is %d\n" ,a);
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int n;
    printf("add the value of n \n");
    scanf("%d" , &n);
    for(int a = n ; a ; a-- ){
        printf("the value of n is %d\n" , a );
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------
/* 
====================
BREAK STATEMENT
====================
*/

/*#include<stdio.h>

int main(){
    int i = 0;
    do{
        printf("the value of i is %d\n" , i);
        if(i == 4){
            break;
        }
        i++;
    }while(i<10);
    return 0;
}
*/
//------------------------------------------------------------------------
/*
====================
CONTINUE STATEMENT
====================



#include<stdio.h>

int main(){
    int skip=5, i=0;
    while(i<10){
        i++;
        if(i!=skip){
            continue;
        }
        else{
            printf("%d\n" , i);
        }
    }
    return 0;
}

*/
//--------------------------------------------------------------
/*#include<stdio.h>

int main(){
    printf("multiplication table of 7 \n");
    for(int i = 10;i;i--){
        printf("8 X %d = %d\n" , i , 8*i);
    }
    return 0;
}
*/

//----------------------------------------------------------------

/*#include<stdio.h>

int main(){
    int i = 0, n=7 , factorial=1;
    for(i=1;1<+n;i++){
        factorial *=i;
    }
    printf("the value of factorial %d is %d", n , factorial);
    return 0;
}



/*
#include<stdio.h>

int main(){
    int i , sum , n;
    printf("enter the value of the natural no \n");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum +=i;
    }
    printf("the value of sum of first 10 natural numbers is %d " , sum);
    return 0;
}


*/

/*

#include<stdio.h>

int main(){
    printf("the multiplication table of 8 is \n");
    for(int i = 10; i ; i-- ){
        printf("8 X %d = %d\n" , i , 8*i);
    }
    return 0;
}

*/

//thids is not the best way to solve this problem
#include <stdio.h>

int main()
{
    int i, prime = 0;
    int n = 6;
    for (i = 2; i < 45; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        printf("it is a not prime no.");
    }
    else
    {
        printf("this is a prime no.");
    }

    return 0;
}
