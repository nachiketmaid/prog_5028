#include <stdio.h>
    int main() 
    {
            int num1, num2, addition;
	    printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);  // calculating sum
            addition= num1 + num2;
	    printf("%d + %d = %d", num1, num2, addition);
            return 0;
    }
