#include<stdio.h>

int main()

{

    char input[2000];

    printf("Enter the value\n");

    scanf("%s",input);

    int i=0;

    int a=0,b=0;

    while(input[i]!='\0')

    {

        if(input[i]=='.')

        {

            a++;

            if(input[i+1]!='\0')

            b=1;

        }

        i++;

    }

    if(a==1 && b==1)

    printf("Valid\n");

    else

    printf("Invalid\n");

}
