/*WHILE LOOP & 
write a 'c' program to show multiply table for a given numbers
condition 1: number should be [provided by user]*/

#include<stdio.h>
int main(){
    int i=0,num;
    printf("enter a number \n");
    scanf("%d", &num);
    printf("result from while loop");
    while (i<11)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;  
    }

     printf("result from for loop\n");
    for ( i = 11; i < 21; i++)
    {
         printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;

}

/*IN NOTE BOOK THE PROGRAM WAS CHANGED*/