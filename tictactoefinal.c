#include<stdio.h>
main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int turn =1 ;
	int pos ;
	char pos1 , pos2 ,pos3 ,pos4 ,pos5 ,pos6 ,pos7 ,pos8 ,pos9;

	char name1[100] ,name2[100];
	
	printf("\nEnter player 1's name => ");
	scanf("%s",&name1);
	
	printf("\nEnter player 2's name => ");
	scanf("%s",&name2);
	
		printf("\nEnter the number on board to select\n");
		printf("\n\t\t\t  %d  | %d  | %d ",a[0],a[1],a[2]);
		printf("\n\t\t\t------ ----- ----");
		printf("\n\t\t\t  %d  | %d  | %d ",a[3],a[4],a[5]);
		printf("\n\t\t\t------ ----- ----");
		printf("\n\t\t\t  %d  | %d  | %d ",a[6],a[7],a[8]);
		
	while(turn <10)
	{
		if(turn%2 == 0)
		{
			printf("\n\n %s's Turn ",name2);
			printf("\nEnter position ");
			scanf("%d",&pos);
			a[pos-1] = 10;
			
		
		}
		else
		{
			printf("\n\n %s's Turn ",name1);
			printf("\nEnter position ");
			scanf("%d",&pos);
			a[pos-1] = 11 ;  
		}
	
		
		pos1=a[0]==11?'X': a[0]==10?'O':'_';
		pos2=a[1]==11?'X': a[1]==10?'O':'_';
		pos3=a[2]==11?'X': a[2]==10?'O':'_';
		pos4=a[3]==11?'X': a[3]==10?'O':'_';
		pos5=a[4]==11?'X': a[4]==10?'O':'_';
		pos6=a[5]==11?'X': a[5]==10?'O':'_';
		pos7=a[6]==11?'X': a[6]==10?'O':'_';
		pos8=a[7]==11?'X': a[7]==10?'O':'_';
		pos9=a[8]==11?'X': a[8]==10?'O':'_';
		
	
		printf("\n\t\t\t  %c  | %c  | %c ",pos1,pos2,pos3);
		printf("\n\t\t\t------ ----- ----");
		printf("\n\t\t\t  %c  | %c  | %c ",pos4,pos5,pos6);
		printf("\n\t\t\t------ ----- ----");
		printf("\n\t\t\t  %c  | %c  | %c ",pos7,pos8,pos9);
			
		if(a[0] == 10 && a[1] == 10 && a[2] == 10)
		{
			printf("\n%s Wins !!!",name2);
			break;
		}
			else if(a[3] == 10 && a[4] == 10 && a[5] == 10)
		{
			printf("\n%s Wins !!!",name2);
			break;
		}
			else if(a[6] == 10 && a[7] == 10 && a[8] == 10)
		{
		    printf("\n%s Wins !!!",name2);
			break;
		}
			else if(a[0] == 10 && a[3] == 10 && a[6] == 10)
		{
		printf("\n%s Wins !!!",name2);
			break;
		}
			else if(a[1] == 10 && a[4] == 10 && a[7] == 10)
		{
		printf("\n%s Wins !!!",name2);
			break;
		}
			else if(a[2] == 10 && a[5] == 10 && a[8] == 10)
		{
		printf("\n%s Wins !!!",name2);
			break;
		}
			else if(a[0] == 10 && a[4] == 10 && a[8] == 10)
		{
		printf("\n%s Wins !!!",name2);
			break;
		}
			else if(a[2] == 10 && a[4] == 10 && a[6] == 10)
		{
			printf("\n%s Wins !!!",name2);
			break;
		}
		if(a[0] == 11 && a[1] == 11 && a[2] ==11)
		{
			printf("\n%s Wins !!!",name1);
			break;
		}
		else if(a[3] == 11 && a[4] == 11 && a[5] ==11)
		{
			printf("\n%s Wins !!!",name1);
			break;
		}
		else if(a[6] == 11 && a[7] == 11 && a[8] ==11)
		{
			printf("\n%s Wins !!!",name1);
			break;
		}
		else if(a[0] == 11 && a[3] == 11 && a[6] ==11)
		{
		printf("\n%s Wins !!!",name1);
			break;
		}
		else if(a[2] == 11 && a[5] == 11 && a[8] ==11)
		{
			printf("\n%s Wins !!!",name1);
			break;
		}
		else if(a[1] == 11 && a[4] == 11 && a[7] ==11)
		{
		printf("\n%s Wins !!!",name1);
			break;
		}
		else if(a[0] == 11 && a[4] == 11 && a[8] ==11)
		{
			printf("\n%s Wins !!!",name1);
			break;
		}
		else if(a[2] == 11 && a[4] == 11 && a[6] ==11)
		{
			printf("\n%s Wins !!!",name1);
			break;
		}
		if(turn == 9)
		{
			printf("\nIts a draw");
		}
	
		turn ++ ;
	}
}


