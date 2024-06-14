#include <stdio.h>
void main()
{
   int num,temp,sum=0,i=0;
   int numarray[25];
    printf("Enter a positive integer:\n");
    scanf("%d",&num);

    while (num<0)
    {
     printf("Error please enter a positive integer\n");
     scanf("%d",&num);
    }

    temp=num; //I allocated the value of num to a new variable so as to retain the initial value.

    while(temp>0) //The condition enables us to loop using the size of the array which cannot be predetermined.
    {
     numarray[i]=temp%10; //The remainder of any value divided by 10 will always give the value.
     temp/=10; //the float is casted into an integer thus the last digit is removed.
     sum+=numarray[i] ;
     i++;
    }
    printf("The sum of the digits in %d is: %d.",num,sum);

}
