#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#define N 3
struct Student
{
	char name[20];
	int age;
	char addr[20];
}Stu[N] = { {"li",25,"room_1"},{"qun",22,"room_2"},{"kun",23,"room_3"} }, Per[N] = { 0 };
int main()
{
	int i;
	struct Student s = { "li",25,"room_1" };
	struct Student c = { 0 };
	//struct Student Per[N] = { 0 };

	FILE* pf = fopen("file7.txt", "w");
	if (!pf)
	{
		perror("File open fails");
		printf("%s", strerror(errno));
		return exit(0);
	}
	fwrite(&s, sizeof(s), 1, pf);
	//fread(Per, sizeof(Per[1]),3, pf);

	//	for (i = 0; i < N; i++)
	//{
	//	printf("%s %d %s ", Per[i].name, Per[i].age, Per[i].addr);
	//}

	//printf("%s %d %s", c.name, c.age, c.addr);//这个单写就是可以
	//fwrite(Stu, sizeof(Stu[1]), 3, pf);

			//fread(&c, sizeof(struct Student), 1, pf);
	//这边是读文件
	//FILE* pf = fopen("file5.txt", "rb");
	//if (!pf)
	//{
	//	perror("File open fails");
	//	return exit(0);
	//}
	//for (i = 0; i < N; i++)
	//{
	//	fread(Per, sizeof(Per[1]), 1, p);
	//	printf("%s %d %s", Per[i].name, Per[i].age, Per[i].addr);
	//}
	fclose(pf);
	pf = NULL;
	return 0;
}