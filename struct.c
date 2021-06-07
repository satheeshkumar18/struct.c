#include<stdio.h>
#include<string.h>
void main()
{
char 'name[2][10]',dummy;
int rollnumber[2],i;
float mark[2];
for(i=0;i<3;i++)
{
  printf("enter the numbers\n");
printf("enter the name, roll number,and marks of the student %d",i+1);
scanf("%s %d %f",&name[i],&rollnumber[i],&mark[i]);
scanf("%c",&dummy);
}
printf("printing the student details\n");
for(i=0;i<3;i++)
{
printf("%s %d %f\n",name[i],rollnumber[i],mark[i]);
}
}

