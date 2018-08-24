#include<string.h>
#include<stdio.h>
int i=1;
#define MAX 100
struct donor
{
	char name[30];
	int age;
	char address[50];
	char email[40];
	int mobile;
	char blood_grp[10];
	char gender[10];
}d[100];
void insert()
{
	int j;
	printf("entyer your details\n");
	printf("enter your name\n");scanf("%s",d[i].name);
	printf("enter your age\n");scanf("%d",&d[i].age);
	printf("enter your address\n");scanf("%s",d[i].address);
	printf("enter your email id\n");scanf("%s",d[i].email);
	printf("enter your mobile number\n");scanf("%d",&d[i].mobile);
	printf("enter your blood group\n");scanf("%s",d[i].blood_grp);
	printf("enter your gender\n");scanf("%s",d[i].gender);
	j=i;
	i++;
}
void display()
{
int k;
printf("details of donors are:\n");
printf("name	age	address		email	mobile	blood_grp	gender\n");
for(k=1;k<=i-1;k++)
{
	printf("%s	%d	%s	%s	%d	%s	%s\n",d[k].name,d[k].age,d[k].address,d[k].email,d[k].mobile,d[k].blood_grp,d[k].gender);
	printf("\n");
}
}
void filter()
{

int p;
for(p=1;p<=i-1;p++)
{
if(strcmp(d.[p].blood_grp,"A+")
printf("%s	%d	%s\n",d[p].name,d[p].mobile,d[p].email);
else if(d[p].blood_grp=="A-")
printf("%s      %d      %s\n",d[p].name,d[p].mobile,d[p].email);
else if(d[p].blood_grp=="B+")
printf("%s      %d      %s\n",d[p].name,d[p].mobile,d[p].email);
else if(d[p].blood_grp=="B-")
printf("%s      %d      %s\n",d[p].name,d[p].mobile,d[p].email);
else if(d[p].blood_grp=="AB+")
printf("%s      %d      %s\n",d[p].name,d[p].mobile,d[p].email);
else if(d[p].blood_grp=="AB-")
printf("%s      %d      %s\n",d[p].name,d[p].mobile,d[p].email);
else if(d[p].blood_grp=="O+")
printf("%s      %d      %s\n",d[p].name,d[p].mobile,d[p].email);
else if(d[p].blood_grp=="O-")
printf("%s      %d      %s\n",d[p].name,d[p].mobile,d[p].email);
}
}
void main()
{
	int ch;
	while(1)
	{
	printf("enter choice\n");
	printf("1.insert,2.display,3.filter,4.exit");
	scanf("%d",&ch);
	switch(ch){
		case 1:insert();break;
		case 2:display();break;
		case 3:filter();break;
		case 4:exit(0);
	}
	}
}

