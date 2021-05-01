#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
double f=0;
long long l;
long n,ar[32];
int a[32],i,j,k,r,m,cho,bit,c,v[8]={1,0,0,0,0,0,0,0}; 
int grt=0,cnt[10],octal,sum;
char ch,sen[300],choice,hexa[20];
void dtob()
{
	printf("1> Number \n2> Alphabet \n3> Sentence \nEnter the your choice:");
			scanf("%d",&cho);
			if(cho==1)
			{
				printf("\nEnter the number to convert:");  
				scanf("%lf",&f);
				r=f;
				if(f<0)
				{
					f=-(f);
					n=f;
					printf("How many bits? (recomended 8 bits and 4 bits for numbers less than 5):");
					scanf("%d",&bit);
					for(i=0;i<bit;i++)
					{
						ar[i]=n%2;
						n=n/2;
					}
					m=i;
					n=f;
					for(i=0;n>0;i++)
					{
						c++;
						n=n/2;
					}
				}
				else
				{
					n=f;
					for(i=0;n>0;i++)
					{
						ar[i]=n%2;
						n=n/2;
					}
					m=i;
				}
				printf("The binary number is :");
				if(r<0)
				{
					for(i=bit-1;i>=0;i--)
					{
						if(ar[i]==0)
						{
							ar[i]=1;
						}
						else if(ar[i]==1)
						{
							ar[i]=0;
						}
					}
					i=0;
					do
					{
						if(ar[i]==1 && v[i]==0)
						{
							ar[i]=1;
						}
						else if(ar[i]==1&&v[i]==1)
						{
							ar[i]=0;
							v[i+1]=1;
						}
						else if(ar[i]==0&&v[i]==0)
						{
							ar[i]=0;
						}
						else if(ar[i]==0&&v[i]==1)
						{
							ar[i]=1;
						}
						i++;
					}while(i<bit);
					for(i=bit-1;i>=0;i--){
						printf("%d",ar[i]);
					}
				}
				else if(r>0)
				{
					lable:
					for(i=m-1;i>=0;i--)
				{
					grt=0;
					printf("%d",ar[i]);
					if(ar[i]==1)
					{
						j=i-1;
						grt=0;
						while(ar[j]!=1 &&j>=0)
						{ 
							grt++;
							j--;
						}
						if(j<0)
						{
							grt=0;
						}
					}
					cnt[i]=grt;
				}
				printf(".");
				k=0;
				do
				{	
					if(f>=1)
					{	
						f=f-(int)f;	
					}	
					f=f*2;
					a[k]=(int)f;
					printf("%d",a[k]);
					k++;
				}while(f>=0 && k<4);
				grt=cnt[0];
				for(i=m-1;i>=0;i--)
				{
					if(grt<cnt[i])
					{
						grt=cnt[i];
					}
				}
				if(grt==0)
				{ 
					printf("\nThere is no binary gap");
				}
				else
					printf("\nThe longest binary gap is %d",grt);
			}
				}
			else if(cho==2)
			{
				printf("\nEnter the alphabet:");
				scanf("%s",&ch);
				n=(int)ch;
				for(i=0;i<8;i++)
				{
					ar[i]=n%2;
					n=n/2;
				}
				m=i;
				printf("The binary of %c is:",ch);
				for(i=m-1;i>=0;i--)
				{
					grt=0;
					printf("%d",ar[i]);
					if(ar[i]==1)
					{
						j=i-1;
						grt=0;
						while(ar[j]!=1 &&j>=0)
						{ 
							grt++;
							j--;
						}
						if(j<0)
						{
							grt=0;
						}
					}
					cnt[i]=grt;
				}
				for(i=m-1;i>=0;i--)
				{
					if(grt<cnt[i])
					{
						grt=cnt[i];
					}
				}
				if(grt==0)
				{ 
					printf("\nThere is no binary gap");
				}
				else
					printf("\nThe longest binary gap is %d",grt);
			}
			else if(cho==3)
			{
				printf("\nEnter the sentence or word ( Enter . When done):");
				scanf("%[^.]s",&sen);
				printf("The binary of the sentence or word is: ");
				for(i=1;sen[i]!='\0';i++)
				{
					n=(int)sen[i];
					for(j=0;j<8;j++)
					{
						ar[j]=n%2;
						n=n/2;
					}
					m=j;
					for(j=m-1;j>=0;j--)
					{
						printf("%d",ar[j]);
					}
				}
				scanf("%s",&choice);
			}
}
void dtoc()
{
	printf("\nEnter the number to convert:");
			scanf("%lf",&f);
			n=f;
			for(i=0;n>0;i++)
			{
				ar[i]=n%8;
				n=n/8;
			}
			k=0;
			do
			{	
				if(f>=1)
				{
					f=f-(int)f;
				}	
				f=f*8;
				a[k]=(int)f;
				k++;
			}while(f>=0 && k<4);
			printf("The octal number is :");
			m=i;
			for(i=m-1;i>=0;i--)
			{
				printf("%d",ar[i]);
			}
			printf(".");
			for(k=0;k<4;k++)
			{
				printf("%d",a[k]);
			}
}
void detohe()
{
	printf("\nEnter the number to convert:");
	scanf("%lf",&f);
	n=f;
	for(i=0;n>0;i++)
	{
		ar[i]=n%16;
		n=n/16;		
	}
	k=0;
	do
	{	
		if(f>=1)
		{	
			f=f-(int)f;	
		}	
		f=f*16.0;
		a[k]=(int)f;
		k++;
		}while(f>=0 && k<4);
		printf("The hexadecimal number is :");
		m=i;
		for(i=m-1;i>=0;i--)
		{
			if(ar[i]==10)
			{
				printf("A");
			}
			else if(ar[i]==11)
			{
				printf("B");
			}
			else if(ar[i]==12)
			{
				printf("C");
			}
			else if(ar[i]==13)
			{
				printf("D");
			}
			else if(ar[i]==14)
			{
				printf("E");
			}
			else if(ar[i]==15)
			{
				printf("F");
			}
			else
				printf("%d",ar[i]);
			}
			printf(".");
			for(k=0;k<4;k++)
			{	if(a[k]==10)
				{
					printf("A");
				}
				else if(a[k]==11)
				{
					printf("B");
				}
				else if(a[k]==12)
				{
					printf("C");
				}
				else if(a[k]==13)
				{
					printf("D");
				}
				else if(a[k]==14)
				{
					printf("E");
				}
				else if(a[k]==15)
				{
					printf("F");
				}
				else
					printf("%d",a[k]);
			}
}
void octobi()
{
	printf("Enter the Octal number: ");
			scanf("%lf",&f);
			n=f;
			r=0;
			printf("The binary number for the octal number is:");
			for(i=0;n>0;i++)
			{
				ar[i]=n%10;
				n=n/10;
				r++;
			}
			for(i=r-1;i>=0;i--)
			{
				octal=ar[i];
				j=0;
				while(j<3)
				{
					a[j]=octal%2;
					octal=octal/2;
					j++;
				}
				for(j=2;j>=0;j--)
				{
					printf("%d",a[j]);	
				}
			}
}
void hetobi()
{
	printf("Enter the Hexadeciaml number:");
	scanf("%s",hexa);
			r=0;
			printf("The binary number is :");
			for(i=0;hexa[i]!='\0';i++)
			{
				if(hexa[i]=='A')
				{
					ar[i]=10;
				}
				else if(hexa[i]=='B')
				{
					ar[i]=11;
				}
				else if(hexa[i]=='C')
				{
					ar[i]=12;
				}
				else if(hexa[i]=='D')
				{
					ar[i]=13;
				}
				else if(hexa[i]=='E')
				{
					ar[i]=14;
				}
				else if(hexa[i]=='F')
				{
					ar[i]=15;
				}
				else
				{
					for(j=0,k=48;j<=9,k<=57;j++,k++)
					{
						if(k==hexa[i])
						{
							ar[i]=j;
						}
					}
				}
				r++;
			}
			for(i=0;hexa[i]!='\0';i++)
			{
				octal=ar[i];
				j=0;
				while(j<4)
				{
					a[j]=octal%2;
					octal=octal/2;
					j++;
				}
				for(j=3;j>=0;j--)
				{
					printf("%d",a[j]);	
				}
			}
}
void bitod()
{
	printf("Enter the binary number:");
			scanf("%lld",&l);
			m=0;
			sum=0;
			for(i=0;l>0;i++)
			{
				ar[i]=l%10;
				l=l/10;
				octal=ar[i]* pow(2,i);
				sum=sum+octal;
				m++;
			}
			printf("The Decimal number is: %ld",sum);
			if(sum<=256)
			{
				printf("\nIt is the ASCII value of: '%c' ",sum);
			}
}
void octod()
{
	printf("Enter the octal number:");
			scanf("%lf",&f);
			n=f;
			m=0;
			sum=0;
			for(i=0;n>0;i++)
			{
				ar[i]=n%10;
				n=n/10;
				octal=ar[i]* pow(8,i);
				sum=sum+octal;
				m++;
			}
			printf("The Decimal number is: %ld",sum);
}
void hextod()
{
	printf("Enter the Hexadecimal number:");
			scanf("%s",hexa);
			m=0;
			sum=0;
			for(i=0;hexa[i]!='\0';i++)
			{
				if(hexa[i]=='A')
				{
					ar[i]=10;
				}
				else if(hexa[i]=='B')
				{
					ar[i]=11;
				}
				else if(hexa[i]=='C')
				{
					ar[i]=12;
				}
				else if(hexa[i]=='D')
				{
					ar[i]=13;
				}
				else if(hexa[i]=='E')
				{
					ar[i]=14;
				}
				else if(hexa[i]=='F')
				{
					ar[i]=15;
				}
				else
				{
					for(j=0,k=48;j<=9,k<=57;j++,k++)
					{
						if(k==hexa[i])
						{
							ar[i]=j;
						}
					}
				}
				m++;
			}
			for(i=m-1,j=0;i>=0,j<m;i--,j++)
			{
				octal=ar[i]* pow(16,j);
				sum=sum+octal;
			}
			printf("The Decimal number is: %ld",sum);
}
