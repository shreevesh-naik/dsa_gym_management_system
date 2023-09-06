//#include<stdio.h>
void verification();//declaration of funtion
//funtion to verify, and allow trainer to perform different operations
//if pin is wrong enter again
//if pin is correct , ger access to perform operation
void verification()
{
	int pass, x = 1, setpass = 1234;
	
	system("cls");
	printf("\t\t -------------------- \n");
	printf("\t\t|    Verification    |\n");
	printf("\t\t -------------------- \n");
	while(x != 0)
	{
		printf("\t\t Enter pin: ");
		scanf("%d", &pass);
		
		if(pass == setpass)
		{
			printf("\n\t\tpin matched!!");
			x = 0;
		}
		else
		{
			printf("\n\t\t\aWarning!! \n\t\tIncorrect pin\n");
		}
		printf("\n");
	}
	system("cls");
}
