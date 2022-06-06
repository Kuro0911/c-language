//---------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------

/*

#include<stdio.h>

void display();       //function prototype*********

int main(){
    int a;
    printf("this is first display\n");
    display();        //function call*************
    printf("this is the end of the function\n");
    return 0;
}

void display(){
    printf("mai display hu \n");      //function definition**************
}
*/

//---------------------------------------------------------------------------------


/*
#include<stdio.h>
void goodMorning();
void goodafternoon();
void goodNIGHT();

int main(){
    goodMorning();
    goodafternoon();
    goodNIGHT();
    return 0;
}

void goodMorning(){
    printf("good morning g\n");
}

void goodafternoon(){
    printf("good afternoon g\n");
}

void goodNIGHT(){
    printf("good night g\n");
}
*/

//---------------------------------------------------------------------------------



// #include<stdio.h>
// void goodMorning();
// void goodafternoon();
// void goodNIGHT();

// int main(){
//     goodMorning();
    
//     return 0;
// }

// void goodMorning(){
//     printf("good morning g\n");
//     goodafternoon();
// }

// void goodafternoon(){
//     printf("good afternoon g\n");
//     goodNIGHT();
// }

// void goodNIGHT(){
//     printf("good night g\n");
//  }
// ------------------------------------------------------------------
/*
#include<stdio.h>
int sum ( int a , int b);//function prototype declaration******
int main(){
    int c;
    c = sum( 2 , 13); // function call*****
    printf("the sum is %d" , c);
    return 0;
}
//the funtion itself *****
int sum (int a , int b){
    int result;
    result = a + b;
    return result;
}
*/
//---------------------------------------------------------------------------------

/*
#include<stdio.h>
#include<math.h>
int main(){
    int side;
    printf("enter the value of side\n");
    scanf("%d" , side);
    printf("the value of area is %f" , pow(side,2));
    return 0;
}
*/

//-----------------------------------------------------------------------------------

//RECURSION

//-----------------------------------------------------------------------------------
/*
#include<stdio.h>
int factorial(int x);

int main(){
    int a= 5;
    printf("the factorial of %d is %d " , a , factorial(a));
    return 0;
}

int factorial(int x){
    if (x==1 || x==0){
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
    
}
*/

//-------------------------------------------------------------------

/*
#include<stdio.h>
float average(int a,int b , int c);
int main(){
    int a,b,c;
    printf("enter the value of a\n");
    scanf("%d" ,&a);
    printf("enter the value of b\n");
    scanf("%d" ,&b);
    printf("enter the value of c\n");
    scanf("%d" ,&c);
    printf("the value of average is %f " , average(a,b,c));
    
    return 0;
}

float average(int a, int b , int c){
    float result;
    result = (float) (a + b + c)/3;
    return result;
}
*/

//--------------------------------------------------------------------'
/*
#include<stdio.h>
void printpattern(int n);

int main(){
    int n = 5;
    printpattern(n);   
    return 0;
}

void printpattern(int n){
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");

}
*/
//------------------------------------------------------------------------------


