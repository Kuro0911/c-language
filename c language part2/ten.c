//-----------------------------------------------------------
// FILE IO
//------------------------------------------------------------
/*
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt" , "r"); //for reading the file
    ptr = fopen("sample.txt" , "w"); //for editing the file

    return 0;
}
r -> open for reading
rb -> open for reading in binary
w -> open for writting
wb -> open for writting in binary
a -> open for apend
//----------------------------------------------------------------------
#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("sample.txt" , "r");
    fscanf(ptr "%d" , &num);
    fscanf(ptr "%d" , &num2);
    fclose(ptr);
    printf("the value of nume is %d\n" , num );
    printf("the value of nume is %d\n" , num2 );


    return 0;
}
//--------------------------------------------------------------------------
#include <stdio.h>
int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("OOO.txt" , "r");
    if (ptr == NULL)
    {
    printf("this file does not exist\n" );
         
    }

    else
    {
        
    fscanf(ptr , "%d" , &num);

    fscanf(ptr , "%d" , &num2);
    fclose(ptr);
    printf("the value of nume is %d\n" , num );
    printf("the value of nume is %d\n" , num2 );
    }
    
    return 0;
}
//-------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("generated.txt" , "w");
    fprintf(fptr, "the number is %d" , number);
    fclose(fptr);
    return 0;
}
//-------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("getcdemo.txt" , "r");
    char c = fgetc(ptr);
    fprintf("the value of my character is %c\n", fgetc(ptr));
    fprintf("the value of my character is %c\n", fgetc(ptr));
    fprintf("the value of my character is %c\n", fgetc(ptr));
    fprintf("the value of my character is %c\n", fgetc(ptr));
    fprintf("the value of my character is %c\n", fgetc(ptr));

    fclose(ptr);
    return 0;
}
//-------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
    ptr = fopen("pr01.txt" , "r");
    fscanf(ptr , "%d %d %d" , &a, &b , &c );
    printf("the values of a , b and c are %d %d %d \n" , a , b ,c);
    
    return 0;
}

//-------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    FILE *ptr;
    int num ; 
    printf("enter the integer you need the table of \n");
    scanf("%d" , &num );
    ptr = fopen("table.txt" , "w");
    for (int i = 0; i < 10 ; i++)
    {
        printf( ptr, "%d X %d = %d\n" ,num , i + 1, num*(i+1) );
    }
    fclose(ptr);
    
    
    return 0;
}
//-------------------------------------------------------------------------------

#include <stdio.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt", "r");
    ptr2 = fopen("b.txt", "w");

    char c = fgetc(ptr1);

    while (c != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr1);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
*/

