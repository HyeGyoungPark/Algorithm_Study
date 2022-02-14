#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//배열 스택으로 구현
typedef struct _array_stack {
    int stack_arr[100];
    int top_index;
} Stack;
void stackinit(Stack* pstack) {
    pstack->top_index = -1;
}
int is_empty(Stack* pstack) {
    if(pstack->top_index == -1) return 1;
    else return 0;
}
void push(Stack* pstack, int data) {
    pstack->top_index += 1;
    pstack->stack_arr[pstack->top_index] = data;
}
int pop(Stack* pstack) {
    int pop_index;
    
    if(is_empty(pstack)) exit(1);
    pop_index = pstack->top_index;
    pstack->top_index -= 1;
    
    return pstack->stack_arr[pop_index];
    
}
int peek(Stack* pstack) {
    if(is_empty(pstack)) exit(1);
    
    return pstack->stack_arr[pstack->top_index];
}

int main(void) {
    Stack stack1;
    stackinit(&stack1);
    
    char str[100];
    scanf("%s", str);
    
    //후위 표기법 계산
    int exp_len = (int)strlen(str);
    char tok;
    int op1, op2; //피연산자1, 2
    
    for(int i=0; i<exp_len; i++) {
        tok = str[i];
        
        if(isdigit(tok)) {  //숫자인 경우
            push(&stack1, tok - '0');
        } else {
            op2 = pop(&stack1);
            op1 = pop(&stack1);
            
            switch(tok) {
                case '+':
                    push(&stack1, op1 + op2);
                    break;
                case '-':
                    push(&stack1, op1 - op2);
                    break;
                case '*':
                    push(&stack1, op1 * op2);
                    break;
                case '/':
                    push(&stack1, op1 / op2);
                    break;
            }
        }
    }
    printf("%d\n", pop(&stack1));
    return 0;
}
