#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char input[30];
int cache[30];
char symbol[30];
char *i=input;
int *c=cache;
char *s=symbol;
int q,w,r;
scanf("%s",input);     //输入计算式
while(*i!='\0')        //大循环对计算式进行操作
    {
    if((*i=='*')||(*i=='/'))
        {
        if(*i=='*')
            {
            q=*c;
            w=*(++i);
            q=q-48;
            w=w-48;
            r=q*w;
            *c=r;
            c++;
            }
        else
            {
            q=*c;
            w=*(++i);
            q=q-48;
            w=w-48;
            r=q/w;
            *c=r;
            c++;
            }
        }
    if((*i=='+')||(*i=='-'))
        {
        *s=*i;
        s++;
        }
    *c=*i;
    i++;
    }
*c='\0';
*s='\0';
c=cache;                 //指针指回数组的首地址
s=symbol;                //符号指回首地址
int sum=*c;
while(*s!='\0')
{
    if(*s=='+')
    {   
        sum=sum+*(++c);
    }
    else
    {
        sum=sum-*(++c);
    }
    s++;
}
printf("\n");
printf("symbol=%s\n",symbol);
printf("%d\n",sum);
}




