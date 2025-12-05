
#include <stdio.h>

void main() {
    int a, b;
    char op;
    
    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("Division by zero\n");
            break;
        case '%':
            if (b != 0)
                printf("%d\n", a % b);
            else
                printf("Modulo by zero!\n");
            break;
        default:
            printf("Invalid operator\n");
    }
}

//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include <stdio.h>
void main(){
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        printf("%d",i);
    }
}
