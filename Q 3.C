#include<stdio.h>

int main()

{

    int p,q;

    printf("Enter the order of 2D matrix (row*col)\n");

    scanf("%d %d",&p,&q);

    int a[p][q];

    printf("Enter the 2D array\n");

    for(int i=0;i<p;i++)

    {

        for(int j=0;j<q;j++)

            scanf("%d",&a[i][j]);

    }

    int n=p*q;

    int b[n];

    int k=0;

    printf("Inital 2D Array:\n");

    for(int i=0;i<p;i++)

    {

        for(int j=0;j<q;j++)

            printf("%d ",a[i][j]);

        printf("\n");

    }

    for(int i=0;i<p;i++)

    {

        for(int j=0;j<q;j++)

        {

            b[k]=a[i][j];

            k++;

        }

    }

    printf("\n Final 1D array:\n");

    for(int i=0;i<n;i++)

        printf("%d ",b[i]);

}
