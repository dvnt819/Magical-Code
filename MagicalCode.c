#include<stdio.h>

    int A[7]={1,2,3,4,5,6,7};
    int B[7]={8,9,10,11,12,13,14};
    int C[7]={15,16,17,18,19,20,21};
    int D[21];
    int check;

void printArr(int arr[7])
{
    for(int i=0;i<7;i++)
    {
        printf("%d  ",arr[i]);
    }
}
void printFunc()
{
    printf("\n\nSet 1 : ");
    printArr(A);
    printf("\nSet 2 : ");
    printArr(B);
    printf("\nSet 3 : ");
    printArr(C);
}
void assign()
{
    if(check==1){
        for(int i=0;i<7;i++)
        {
            D[i+7]=A[i];
            D[i]=B[i];
            D[i+14]=C[i];
        }
    }
    if(check==2){
        for(int i=0;i<7;i++)
        {
            D[i+7]=B[i];
            D[i]=A[i];
            D[i+14]=C[i];
        }
    }
    if(check==3){
        for(int i=0;i<7;i++)
        {
            D[i+7]=C[i];
            D[i]=B[i];
            D[i+14]=A[i];
        }
    } 
}
void reassign()
{
    for(int i=0,j=0;j<7;j++)
    {
        A[j]=D[i];
        B[j]=D[i+1];
        C[j]=D[i+2];
        i=i+3;
    }
}
int main()
{   
    printf("\nImagine any number bewtween 1 to 21 in your mind (press enter to continue)");
    while (getchar() != '\n'){}
    
    printFunc();
    printf("\n\nNow which of the above Set has your number ? :  ");
    scanf("%d",&check);
    assign();
    reassign();
      
    printFunc();
    printf("\n\nNow which of the above Set has your number ? :  ");
    scanf("%d",&check);
    assign();
    reassign();

    printFunc();
    printf("\n\nNow which of the above Set has your number ? :  ");
    scanf("%d",&check);
    assign();
    reassign();

    printf("The number you have Imagined is  %d",D[10]);
 
    return 0;
}
