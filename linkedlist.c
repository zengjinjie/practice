#include<stdio.h>
#include<stdlib.h>
//定义结构体
struct node
{
	int data;
	struct node *next;
};

int main()
{    //循环输入数据
	int i,n,a;
	struct node *head,*p,*q,*t;
	head = NULL;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		scanf("%d",&a);
		p = (struct node *)malloc(sizeof(struct node));
		p->data = a;
		p->next = NULL;
		if(head == NULL)
			head = p;
		else
			q->next = p;
		q = p;
	}
	//判断是否需要插入
	scanf("%d",&a);
	t = head;
	while(t!= NULL)
	{
		if(t->next->data > a)
		{
			p = (struct node *)malloc(sizeof(struct node));
			p->data = a;
			p->next = t->next;
			t->next = p;
			break;
		}
		t = t->next;
	}
	//循环输出数据
	t=head;
	while(t!=NULL)
	{
		printf("%d,",t->data);
		t=t->next;
	}
	
	return 0;
}