
#include<stdio.h>
void skipq()
{
    printf("\nYou have used your lifeline:- SKIP THE QUESTION\n");

}

void main()
{
	int i,a[10],n=0,l1=1;
	char ch;


printf("###########################################################################\n");
printf("###   ###   #####          #####             #########  ##########  #######\n");
printf("###   ##   ######   #####   ####   #######    #######  #  #######  #  #####\n");
printf("###   #   #######   #####   ####   #################  ###  #####  ###  ####\n");
printf("###      ########   #####   ####   ################  #####  ###  #####  ###\n");
printf("###      ########         ######   ########################################\n");
printf("###   #   #######   #####   ####   ########################################\n");
printf("###   ##   ######   #####   ####   #####################           ########\n");
printf("###   ##    #####   #####   ####   #######    #############################\n");
printf("###   ###    ####          #####            ###############################\n");
printf("###########################################################################\n\n\n");

printf("###########################################################################\n");
printf("\t\tWELCOME TO KAUN BANEGA CROREPATI \n");
printf("###########################################################################\n\n");
printf("It contains 10 QUESTIONS each carries 10 LAKHS\n");







	for(i=1;i<=10;i++)
	{
		n=0;
		switch(i)
		{
		case 1:

			printf("\tYour first question is\nIn what direction muslim pray\n 1.East 2.South 3.Nearby Mosque's direction 4.Mecca's direction ");

		    printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  	{skipq();
                  	l1--;
                	 break;
                   	}

            }

			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==4)
			{
					printf("\nYou have entered the correct answer Now you have won Rs.%d00000 \n\nYour Next Question is ",i);
		 	}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 2:
			printf("\nWho is the Mother of RAMA in Ramayana \n1.Kousalya 2.Kaikai 3.Sumitra 4.Mantra ");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                {  skipq();
                  l1--;
                  break;
                }

            }
		printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==1)
			{
					printf("\nYou have entered the correct answer Now you have won Rs.%d00000 \n\nYour Next Question is ",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 3:
			printf("\nWhat is the Symbol of Nazis(Army of Great Hitler)\n 1.Cross 2.Skull and Bones 3.Owl 4.Swastika ");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                 { skipq();
                  l1--;
                  break;
                  }

            }
		printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==4)
			{
					printf("\nYou have entered the correct answer Now you have won Rs.%d00000 \n\nYour Next Question is ",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 4:
			printf("\nWho among these is not an Railway Minister\n 1.Mamtha Banerjee 2.Lal Bahadur Shastri 3.Geetha Mukerjee 4.George Fernandis ");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  {skipq();
                  l1--;
                  break;
                   }

            }
			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==3)
			{
					printf("\nYou have entered the correct answer Now you have won Rs.%d00000 \n\nYour Next Question is ",i);
			}
			else
			{
				printf(" \nYou have entered the wrong answer Better Luck Next Time You have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 5:
			printf("\nWho Correctly Answered to Yaksha's Questions \n1.Drona 2.Abimanyu 3.Yudishtira 4.Arjuna");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  {skipq();
                  l1--;
                  break;
                   }

            }
			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==3)
			{
					printf("\nYou have entered the correct answerNow you have wonRs.%d00000\n\nYour Next Question is",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 6:
			printf("\nWho Heads Reserve Bank of India\n1.FinanceMinister2.Commissioner3.Chief Bank Manager4.Governor");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  {skipq();
                  l1--;
                  break;
                   }

            }
			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==4)
			{
					printf("\nYou have entered the correct answerNow you have wonRs.%d00000\n\nYour Next Question is",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 7:
			printf("\nWhich of these AnimalsLaughs\n1.Monkey2.Tiger3.Giraffe4.Hyna");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  {skipq();
                  l1--;
                  break;
                   }

            }
			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==4)
			{
					printf("\nYou have entered the correct answerNow you have wonRs.%d00000\n\nYour Next Question is",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 8:
			printf("\nWhich is the system of Governance inChina\n1.communism2.communalism3.Monarchy4.Democratic");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  {skipq();
                  l1--;
                  break;
                   }

            }
			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==1)
			{
					printf("\nYou have entered the correct answerNow you have wonRs.%d00000\n\nYour Next Question is",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 9:
			printf("\nHow many Rings does Olympic Symbol have\n1.   3\n2.    2\n3.    6\n4.    5");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  {skipq();
                  l1--;
                  break;
                   }

            }
			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==4)
			{
					printf("\nYou have entered the correct answerNow you have wonRs.%d00000\n\nYour Next Question is",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		case 10:
			printf("\nWho patronised Kalidas\n1.Akbar2.Chandra Guptha3.VikramaAditya4.Krishna Devaraya");

			printf("\n\tYou have %d lifeline left",l1);
            if(l1)
            {
                printf("\nWant to use the lifeline Skip the Question?[Y/N]");
                scanf("%c",&ch);
		    if(ch=='Y'||ch=='y')
                  {skipq();
                  l1--;
                  break;
                   }

            }
			printf("\nEnter your choice\n");
			scanf("%d",&n);
			if(n==3)
			{
					printf("\nYou have entered the correct answerNow you have wonRs.%d00000\n\n*YOU HAVE BECOME CROREPATHI OF THIS WEEK*",i);
			}
			else
			{
				printf("\nYou have entered the wrong answer, BETTER LUCK NEXT TIME \nYou have earned Rs.%d00000",i-1);
				i=11;
			}
			break;
		default:
			break;
			}
			}

			}


