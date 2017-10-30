#include <stdio.h>


int fibonacciFunction(int fibNumber)
{
      int firstIndex = 1, secondIndex = 1, nextIndex;


    for (int i = 1; i <= fibIndex-2; ++i)
    {
        nextIndex = firstIndex + secondIndex;
        firstIndex = secondIndex;
        secondIndex = nextIndex;
    }
    //printf("n %d, ", nextIndex);
    return nextIndex;
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
