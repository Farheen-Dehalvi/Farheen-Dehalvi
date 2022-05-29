#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 100
typedef struct asteroids
{
    int top;
    int data[max];
}stack;


void push(stack *c);
void pop(stack*c);
int IsEmpty(stack *c);
void detect(stack *a , stack *b);


int main()
{
    stack a,b;
    int n,i;
    a.top=-1;
    b.top=-1;
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
        push(&a);
    }
        for(i=0;i<n;i++)
    {
        push(&b);
    }
        detect (&a,&b);


        return 0;
}



void push(stack *s)
{
    s->top++;

     scanf("%d",&s->data[s->top]);
}


void pop(stack *s)
{
    s->top--;
}


int IsEmpty(stack *s)
{
    if(s->top==-1)
{
    return 1;
}

    else{return 0;}
}



void detect(stack *a , stack *b)
{
int m=0,n=0;
while(IsEmpty(a)!=1  &&  IsEmpty(b)!=1)
{
if(a->data[a->top]==0)
{
pop(a);}

else if(b->data[b->top]==0)
{
pop(b);}
else if(a->data[a->top]>0  &&  b->data[b->top]>0)
{
pop(a);
pop(b);
n++;
printf("0 ");
}
else if(a->data[a->top]<0  &&  b->data[b->top]<0)
{
pop(a);
pop(b);
n++;
printf("0 ");
}
else
{
pop(a);
pop(b);
m++;
printf("1 ");
}
}
printf("\n%d",m);
printf("\n%d",n);
}
