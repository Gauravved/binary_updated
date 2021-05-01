# include "binary.h"
int main() 
{
	system("CLS");
	int choose;
	do
	{
		printf("-------------------------------------- Number Conversion --------------------------------------");
		printf("\n1> Binary \n2> Decimal to Octal \n3> Decimal to Hexadecimal \n4> Octal to Binary \n5> Hexadecimal to binary \n6> Binary to Decimal \n7> Octal to Decimal \n8> Hexadecimal to Decimal \nEnter your choice:");
		scanf("%d",&choose);
		if(choose==1)
		{
			dtob();
		}
		else if(choose==2)
		{
			dtoc();
		}
		else if(choose==3)
		{
			detohe(); 
		}
		else if(choose==4)
		{
			octobi();
		}
		else if (choose==5)
		{
			hetobi();
		}
		else if (choose==6)
		{
			bitod();
		}
		else if (choose==7)
		{
			octod();
		}
		else if (choose==8)
		{
			hextod();
		}
		else
		{
			printf("Please recheck the number!!!!");
			
		}
		printf("\n\nDo you want to continue? [y/n] :");
		scanf("%s",&choice);
		system("CLS");
	}while(choice=='y'||choice=='Y');
	return 0;
}
