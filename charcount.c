#include<stdio.h>
/*这个程序运行过程中回车并不会输出结果，回车其实是输入了\n？ 必须输入了EOF，
   在linux下也就是ctrl+D  */
int main()
{
	long nc;
	while(getchar()!=EOF)
	{
		nc++;
	}
	printf("%ld\n",nc);
}