#include <stdio.h>
#include <conio.h>


int main(){

    int num1, num2, p;

    printf("\nIntroduzca el primer n%cmero: ",163);
    scanf("%d",&num1);
    printf("\nIntroduzca el segundo n%cmero: ",163);
    scanf("%d",&num2);

    p = producto(num1,num2);
    printf("\n%d x %d = %d",num1,num2,p);
}

int producto(int a, int b){
    if (b == 0){
        return 0;
    }
    else if (b > 0){
        return a + producto(a,b-1);
    }
}