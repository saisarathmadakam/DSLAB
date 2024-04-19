#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 100
char stack[MAX];
void push(int);
char infix[MAX],postfix[MAX];
int top=-1;
int pop();
int precedence(char);
int isempty();
void print();
int  infixTOpostfix();

  void push(int c)
  {
    if(top==MAX-1)
     {
       printf("stack is overflow\n");
       return;
     }
       top++;
       stack[top]=c;
 }
 int pop()
       {
        int value;
        if(top==-1)
        {
         printf("stack is under flow" );
         exit(1);
         }
         value=stack[top];
         top=top-1;
         return value;
}
int precedence(char symbol)
{
    switch(symbol)
    {
     case'+':
     case'-':
     return 1;
     
     case'*':
     case'/':
     return 2;
     
     case'^':
     return 3;
     
     default:
     return 0;
}
}
  int isempty()
  {
  if(top==-1)
   return 1;
   else 
   return 0;
   }
 void print()
 {
   int i=0;
   printf("envalute infix expression :");
   while(postfix[i])
   {
     printf("%c",postfix[i++]);
     }
     printf("\n");
}
int infixTOpostfix()
{
  int i,j=0;
  char symbol,next;
  for(i=0;i<strlen(infix);i++)
    {
      symbol=infix[i];
      
       switch(symbol)
       {
        case'(':push(symbol);
                break;
        
        case')':while((next=pop())!='(')
                postfix[j++]=next;
                break;
        case'+':
        case'-':
        case'*':
        case'/':
        case'^':
        while(!isempty()&&precedence(stack[top])>=precedence(symbol))
              postfix[j++]=pop();
              push(symbol);
              break;
        default:
          postfix[j++]=symbol;
          break;
    }
 }
 
  while(!isempty())
  postfix[j++]=pop();
  postfix[j]='\0';
  }
  int post_evaluate()
  {
     int i,
     int a,b;
     for(i=0;i<strlen(postfix);i++)
       {
         if(postfix[i]>='0'&&postfix[i]<='9')
              push(postfix[i]-'0');
              
             else {
                    a=pop();
                    b=pop();
                    switch(postfix[i])
                       {
                        case'+':
                            push(b+a);
                             break;
                        case'-':
                          push(b-a);
                             break;
                          case'*':
                          push(b*a);
                             break;
                         case'/':
                          push(b/a);
                             break; 
                         case'^':
                          push(pow(b,a));
                             break;  
                             }
                             }
                             }
                             return pop();
                             }
  int main()
  { 
     int outcome;
     
   printf("envaluate the postfix expression: ");
   scanf(infix);
     
   infixTOpostfix();
   outcome=post_evaluate();
   print();
   printf("obtained the result");
   printf("%d\n",outcome);
   return 0;
   }
              

        
  
  
