#include <stdio.h> 

int main(void){
    int temp;

    printf("Enter temperature >>> "); 
    scanf("%d", &temp); 

    if (temp > 30)
    {
        printf("Hot day! \n"); 
    } else{
        printf("Normal day! \n");
    }

    return 0; 
}