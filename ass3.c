#include<stdio.h>
int main(){
char Q;
    printf("please inter alfapitic character\n ");
    scanf("%c",&Q);

if ((Q >= 'a' && Q <= 'z') || (Q >= 'A' && Q <= 'Z'))
    {
        printf("It's alfapitic character %c\n ", Q);
    }
    else 
       printf("It's not alfapitic character try agin\n ");


    return 0; 
}