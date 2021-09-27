 
 #include<stdio.h> 

int main() 
{
    int num1; 
    int num2 ; 
    int num3 ; 
    int result;
     
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    
    //divide & multiply
    result = num1 / num2 * num3;
    printf("%d RPM divide %d secs multiply %d degrees is %d degrees per second", num1, num2, num3,result);
    return 0;}