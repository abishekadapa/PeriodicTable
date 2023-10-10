#include <stdio.h>
#include <string.h>
typedef struct
{
	int at_no;float at_ms;
	char name[15];char sym[3];
}element;

void print(char a[][3],int n)
{
int m=1,c=0,i=0;
if(m==1)
{
printf("[%s ]",a[c++]);
for(i=1;i<=64;i++)
printf(" ");
printf("[%s]\n",a[c++]);
}
m++;
while(m<=3)
{
while(c==2 ||c==3||c==10||c==11)
{
if(strlen(a[c])==1)
printf("[%s ]",a[c++]);
else
printf("[%s]",a[c++]);
}
for(i=1;i<41;i++)
printf(" ");
if(c==4)
{
for(c=4;c<=9;)
{
if(strlen(a[c])==1)
printf("[%s ]",a[c++]);
else
printf("[%s]",a[c++]);
}

}

if(c==12 &&m==3)
{
for(c=12;c<=17;)
{
if(strlen(a[c])==1)
printf("[%s ]",a[c++]);
else
printf("[%s]",a[c++]);
}
}
m++;
printf("\n");
}
	while(m<=5)
	{
	if(m==4)
	{
	for(c=18;c<=35;)
	{
	if(strlen(a[c])==1)
	printf("[%s ]",a[c++]);
	else
	printf("[%s]",a[c++]);
	}
	
	}
	else{
	for(c=36;c<=53;)
	{
	if(strlen(a[c])==1)
	printf("[%s ]",a[c++]);
	else
	printf("[%s]",a[c++]);
	}}
	printf("\n");
	m++;
	}

	while(m<=7)
	{
	while(c==54||c==55||c==86||c==87)
	{
	if(strlen(a[c])==1)
	printf("[%s ]",a[c++]);
	else
	printf("[%s]",a[c++]);
	}
	if(c==56){
	
	printf("[* ]");c+=15;}
	if(c==88){
	printf("[**]");c+=15;}
	
	if(c==71)
	{
	for(c=71;c<=85;)
	{
	if(strlen(a[c])==1)
	printf("[%s ]",a[c++]);
	else
	printf("[%s]",a[c++]);
	}
	}
	if(c==103)
	{
	for(c=103;c<=117;)
	{
	if(strlen(a[c])==1)
	printf("[%s ]",a[c++]);
	else
	printf("[%s]",a[c++]);
	}
	}
	m++;
	printf("\n");

	}
	printf("\n\n");
	
	while(m<=9)
	{
	
	if(m==8)
	{
	printf("\t* ");
	c=56;
	for(c=56;c<=70;)
	{
	if(strlen(a[c])==1)
	printf("[%s ]",a[c++]);
	else
	printf("[%s]",a[c++]);
	}
	}
	else
	{
	printf("\t**");
	c=88;
	for(c=88;c<=102;)
	{
	if(strlen(a[c])==1)
	printf("[%s ]",a[c++]);
	else
	printf("[%s]",a[c++]);
	}
	}
	printf("\n");
	m++;
	}
	
}
int main()
{
int i=0;int rr;
FILE *fp1=fopen("elem_symbol.txt","r");
char b[118][3];
char c[3];
for(i=0;i<118;i++)
{
fscanf(fp1,"%s",b[i]);
}
printf("Press 1 if u want to display the periodic table:");
scanf("%d",&rr);
if(rr==1)
{
	print(b,2);	
}
	int n=119;
	element e[n];
	int p;
	int j;int x=1; 
	FILE *fp = fopen("perio.txt","r");
	for(j=0;j<n;j++)
	{
		fscanf(fp,"%d%f%s%s",&e[j+1].at_no,&e[j+1].at_ms,&e[j+1].name,&e[j+1].sym);
	}
	while(x!=0)
	{
			printf("\nEnter the atomic number for viewing Data :");
			scanf("%d",&p);
			if(p>=1 && p<119)
			{
				printf("\nSymbol        : %s",e[p].sym);
				printf("\nName          : %s",e[p].name);
				printf("\nAtomic Number : %d",e[p].at_no);
				printf("\nMass number   : %.2f",e[p].at_ms);
				printf("\n\n Enter 0 to Quit or 1 to proceed :");
				scanf("%d",&x);
			}
			else 
			{
				printf("\n Respective Element is not found ");
				printf("\n\n Enter 0 to Quit or 1 to proceed :");
				scanf("%d",&x);
			}
	}

}

