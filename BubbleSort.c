#include <stdio.h>
struct student
{
	char name[21];
	int score;
};
int main()
{
	struct student a[100],t;
	int i,j,n;
	printf("请输入添加学生人数：")
	scanf("%d",&n);
	printf("请输入添加学生姓名及成绩：\n");
	for(i=1;i<=n;i++)
		scanf("%s %d",a[i].name,&a[i].score);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j].score<a[j+1].score)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("学生排名：\n");
	for (i = 1; i <= n; i++)
	{
		printf("%s\n",a[i].name);
	}
	getchar();getchar();
	return 0;
}