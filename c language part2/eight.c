//-------------------------------------
//strings
//-------------------------------------
/*
#include<stdio.h>

int main(){
    char str[] = "dhananjai";
    return 0;
}
*/
//----------------------------------------

/*
#include<stdio.h>

int main(){
    char str[] = "dhananjai";
    char *ptr = str;
    while(*ptr != '\0'){  // OR U CAN USE PRINTF("%S" , PTR)
        printf("%c" , *ptr );
        ptr++;
    }
    return 0;
}
*/
//--------------------------------------------

/*
#include<stdio.h>

int main(){
    char s[34];
    printf("enter your name : ");
    gets(s); or puts(s); which will put the whole entry in the next line
    printf("your name is %s "  , s);
    return 0;
}
*/
//-----------------------------------------------

/*
common c functions for string **you have to include <string.h>

1) strlen()
  int length = strlen(st)

2)strcpy(st);
  used to copy the things form the second to the first

3) strcat()
   strcat(s1 , s2);

4) strcmp()

   it compares two strings and will return 0 if they are equal

*/
//----------------------------------------------------------------
/*
#include<stdio.h>

int main(){
    char st1[34];
    char st2[34];
    char c;
    int  i = 0;
    printf("enter the value of first string \n");
    scanf("%s" , st1);
    printf("enter the value of second character by chr \n ");
    while (c!='\n')
    {
    fflush(stdin);
    c = scanf("%c" , &c);
        st2[i] = c;
        i++;
    }
    printf("the value of str1 is %s" , st1);
    printf("the value of str1 is %s" , st2);

    
    return 0;
}
*/

//------------------------------------------------------------------
/*
#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    
}
int main(){
    char c[] = "tum hoe hoe";
    encrypt(c);
    printf("encrypted string is : %s" , c);
    return 0;
}
*/
//------------------------------------------------------------------
/*

#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}
int main(){
    char c[] = "uvn!ipf!ipf";
    decrypt(c);
    printf("Decrypted string is : %s" , c);
    return 0;
}
//----------------------------------------------------------------------
    
#include<stdio.h>

int main(){
    char s1[100] = "programming " , s2[] = "is awesome";
    int length,j;
    length = 0;
    while (s1[length] != '\0')
    {
        ++length;
    }

    for ( j = 0; s2[j] != '\0'; ++j , length++)
    {
        s1[length] = s2[j];
    }
    s1[length] = '\0';
    printf("after concatention : ");
    puts(s1);
    
    return 0;
}
//--------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    char str[] = "this is my c proggraming class. proggraming baji full";
    int count = 1;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        if (str[i] == ' ')
        {
            printf("\n");
            ++count;
        }
        else
        {
            printf("%c" , str[i]);
        }
    }
    printf("\nmumber of words in the string  = %d" , count);
return 0;
}
//--------------------------------------------------------------------------------

#include<stdio.h>

int main(){
    char str[] = "this is my c proggraming class. proggraming baji full";
    int alpha = 1;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        if (str[i] != ' ')
        {
            ++alpha;
        }
        else
        {
            printf("%c" , str[i]);
        }
    }
    printf("\nmumber of words in the string  = %d" , alpha);
    return 0;
}
//--------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    char str[] = "this is my c proggraming class. proggraming baji full";
    int count = 1;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        if (str[i] == "a/e/i/o/u")
        {
            printf("\n");
            ++count;
        }
        
    }
    printf("\nmumber of words in the string  = %d" , count);
    return 0;
}
//--------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    char str[20];
    int i,j;

    printf("enter the string : ");
    scanf("%s" ,str);
    for ( i = 0; str[i] != '\0' ; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c" , str[j]);
        }
            printf("\n");
    }
    
    return 0;
}   


#include<stdio.h>

int main(){
    char str[20];
    int i,j,l,p;

    printf("enter the string : ");
    scanf("%s" ,str);

    for ( i = 0; str[i] != '\0'; i++)
    {
        l = i;
    }

    for ( i = 0; i <= 2*l ; i++)
    {
        if (i<l)
        {
            p = i;
        }
        else
        {
            p = 2*l - i ;
        }
        for ( j = 0; j <= p ; j++)
        {
            printf("%c" , str[j]);
        }
        printf("\n");
    }
     
    
    return 0;
}
*/
#include<stdio.h>

int main(){
    char str[20];
    int i,j;

    printf("enter the string : ");
    scanf("%s" ,str);
    for ( i = 0; str[i] != '\0' ; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c" , str[j]);
        }
            printf("\n");
    }
    
    return 0;
}   
