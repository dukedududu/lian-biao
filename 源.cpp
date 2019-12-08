#include<stdio.h>
#include<stdlib.h>
struct node
{
	char info[20];
	int grade[2];
	struct node* link;
};
int main()
{
	struct node * head, * p, * pre;
	int i, n, m;
	head = NULL;
	pre = NULL;
	scanf_s("%d", &n);
	for (i = 1; i <=n; i++)
	{
		p = (struct node*)malloc(sizeof(struct node));
		scanf_s("%s", p->info);
		scanf_s("%d", &p->grade[0]);
		scanf_s("%d", &p->grade[1]);
		p->link = NULL;
		if (i == 1)
		{
			head = p;
			pre = p;
		}
		else
		{
			pre->link = p;
			pre = p;
		}
	}
	p = head;
	while (p)
	{
		printf("%s:%d %d", p->info, p->grade[0], p->grade[1]);
	}
	return 0;
}
