#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char);
char pop();
int isempty();
int isfull();
int check_balanced(char*);
int match_char(char,char);

void push(char c)
{
    if(isfull())
    {
        printf("stack is over flow");
        exit(1);
    }
    top++;
    stack[top]=c;
}
char pop()
{
    char c;
    if(isempty())
    {
        printf("stack is underfloe\n");
        exit(1);
    }
    c=stack[top];
    top--;
    return c;
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
int check_balanced(char *s)
{
    int i;
    char temp;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='[' || s[i]=='{'|| s[i]=='(')
            push(s[i]);
        if(s[i]==']' || s[i]=='}'|| s[i]==')')
        {
            if(isempty())
            {
                printf("right brackets greater than left brackets\n");
                return 0;
            }
            else {
                temp=pop();
                if(!match_char(temp,s[i]))
                {
                    printf("mismatch brackets\n");
                    return 0;
                }
            }
        }
    }
    if(isempty())
    {
        printf("brackets are well balanced\n");
        return 0;
    }
    else
    {
        printf("left brackes more than right brackrs\n");
        return 0;
    }
}
int match_char(char a,char b)
{
    if(a=='('&& b== ')')
        return 1;
    if(a=='{'&& b== '}')
        return 1;
    if(a=='['&& b== ']')
        return 1;
    else
        return 0;
}
int main()
{
    char expr[MAX];
    int balanced;
    printf("enter the algebraic expression: ");
    gets(expr);
    balanced=check_balanced(expr);
    if(balanced==1)
    {
        printf("expr is vaild");
        return 0;
    }
    else
    {
        printf("expr  is valid ");
        return 0;
    }
}
