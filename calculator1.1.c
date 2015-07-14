#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
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
		if(*i=='*')
		{
			i++;
			q=*i-48;
			w=*c;
			r=q*w;
			*c=r;
		}
		else if(*i=='/')
        {
			i++;
			q=*i-48;
			w=*c;
			r=w/q;
			*c=r;
        }
		else if((*i=='+')||(*i=='-'))
        {
			*s=*i;
			s++;
			c++;	
        }
		else
        {
			*c=*i-48;
        }
		i++;
    }
	*(++c)='\0';
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
	printf("%d,%d,%d\n",q,w,r);
	printf("%d,%d,%d,%d\n",cache[0],cache[1],cache[2],cache[3]);
	printf("symbol=%s\n",symbol);
	printf("%d\n",sum);
	
	return 0;
}




