#include <stdio.h>


int fibonacciFunction(int fibNumber)
{
    if (fibNumber <= 1) {
        return fibNumber;
    }
    return fibonacciFunction(fibNumber-1) + fibonacciFunction(fibNumber-2);
}

int main ()

{
    int number, result;


    printf("Enter a positive number: ");
    scanf("%d", &number);
    result=fibonacciFunction(number);

    if (result<0){
        printf("%d - Error: Input positive number !\n",result);
    } else if (result==0){
        printf("%d - Error: Input larger number than 0!\n",result);
    }else{
        printf("Fibonacci number: %d\n", result);
    }

  
    return 0;
}
