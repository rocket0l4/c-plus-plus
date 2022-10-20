#include<stdio.h>
int main()

{
struct stud
{
int age;
char name[20];
char gender[10];
};

 

struct stud *a;

struct stud a1;
printf(“Enter the name\n:”);
scanf(“%s”,&a1.name[0]);
printf(“Enter the age:”);
scanf(“%d”,&a1.age);
printf(“Enter the gender:\n”);
scanf(“%s”,&a1.gender[0]);

struct stud a2;
printf(“Enter the name\n:”);
scanf(“%s”,&a2.name[0]);
printf(“Enter the age:”);
scanf(“%d”,&a2.age);
printf(“Enter the gender:\n”);
scanf(“%s”,&a2.gender[0]);

 

a=&a1;
printf(“%s\n”,a->name);
printf(“%d\n”,a->age);
printf(“%s\n”,a->gender);

a=&a2;
printf(“%s\n”,a->name);
printf(“%d\n”,a->age);

printf(“%s\n”,a->gender);

}