#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    printf("Enter the number");
    scanf("%d",&x,&y);
    if(x==20 || y==10){
        printf("x and y are ok");
    }
    else{
        printf("x and y are not ok");
    }
    if(x==10 || y==20){
        printf("\nvalue of x and y are equal");
    }
    return 0;
}
