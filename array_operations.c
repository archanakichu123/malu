#include<stdio.h>
int n,i;
int a[80];
void create();
void display();
void insert();
void delete();
void search();
void merge();
int main()
{
char y;
int ch;
printf("\n Array Operations ");
do
{
printf("\n 1.Create \n2.Display \n 3.Insertion \n 4.Delete \n 5.Search \n 6.Merge");
printf("enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
insert();
break;
case 4:
delete();
break;
case 5:
search();
break;
case 6:
merge();
break;
default:
printf("\n invalid choice ");
break;
}
printf("\n do you want to continue : ");
scanf(" %c",&y);
}
while((y=='y')||(y=='Y'));
}
void create()
{
printf("\n Enter array size  : ");
scanf("%d",&n);
printf("\n enter an array : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void display()
{
if(n==0)
{
printf("\n you have entered an array yet");
}
else
{
printf("\n you have entered array is  : \n");
for(i=0;i<n;i++)
printf("\t%d\t",a[i]);
}
}
void insert()
{
int item,pos,k;
printf("\n Enter an element to be insert :  ");
scanf("%d",&item);
printf("\n Enter the position :  ");
scanf("%d",&pos);
k=n;
while(k!=pos)
{
a[k]=a[k-1];
k--;
}
a[pos]=item;
n++;
}
void delete()
{
int dlt_pos;
printf("\n Enter position where element to be deleted : ");
scanf("%d",&dlt_pos);
if(dlt_pos<n)
{
for(i=dlt_pos;i<n;i++)
{
a[i]=a[i+1];
}
n--;
}
else
{
printf("\n Sorry can't delete ");
}
}
void search()
{
int s,f=0;
printf("\n Enter the element to be searched : ");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
f=1;
break;
}
}
if(f==1)
printf("\n Element is present " );
else
printf("\n Element is not present");
}
void merge()
{
int b[40];
int l,j=0;
printf("\n Enter the limit of array to be merged : ");
scanf("%d",&l);
printf("\n Enter the array elements : ");
for(i=0;i<l;i++)
scanf("%d",&b[i]);
int total=n+l;
for(i=n;i!=total;i++)
{
printf("%d",j);
while(j<l)
{
a[i]=b[j];
break;
}
j++;
}
n=total;
}
