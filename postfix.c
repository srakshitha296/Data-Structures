#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 20

//Declaring a stack
struct structStack {
    int top;
    float  stack[MAX];
}stack1;

//Declaration 0f functions
int isoperand(char);
void push(float);
float pop();
float operate(float, float, char);

char postfix[MAX];

//Main function begins
int main() {
    float op1, op2, result;
    int i = 0;
printf("Enter a valid postfix expression : ");
scanf("%s", postfix);

while(postfix[i] != '\0') {

    if(isoperand(postfix[i])) 
    push(postfix[i]-48);
    else
    {
        op1 = pop();
        op2 = pop();
        result = operate(op1, op2, postfix[i]);
        push(result);
        printf("%.2f %c %.2f = %.2f\n", op2, postfix[i], op1, result);
    }i++;
}
printf("\nResult : %f", stack1.stack[stack1.top]);
getch();
}


//defining operte function
int isoperand(char x) {
    if(x >= '0' && x <='9')
    return 1;
    else
     return 0;
}


//defining push function
void push(float x) {
    if(stack1.top== MAX -1)
    {
        printf("\nStack overflow");
        return;
    }else{
stack1.top++;
stack1.stack[stack1.top] = x;
    }

}

//defining pop function
float pop() {
    if(stack1.top == -1){
        printf("Stack underflow\n");
     return 0;
    }else {
        stack1.top--;
        return (stack1.stack[stack1.top+1]);
    }
}

//defining operate function
float operate(float op1, float op2, char op)
 {
   switch(op) {
    case '+':
  return (op2 + op1);
    case '-':
return (op2 - op1);
    case'*':
return (op2 * op1);
    case '/':
return (op2 / op1);
    case '^':
return (pow(op2,op1));
   }
 }