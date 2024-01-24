/*
 * main.c
 *
 *  Created on: Oct 16, 2023
 *      Author: arunk
 */

#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Narendra Modhi -> BJP "
#define CANDIDATE2 "Rahul Gnadhi -> INC "
#define CANDIDATE3 "Arvind Kejriwal -> AMP "
#define CANDIDATE4 "NOTA(NONE OF THE ABOVE)"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, total;

float p1,p2,p3,p4;
void castVote(){
int choice;
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);


printf("\n\n Input your choice (1 - 4) : ");
fflush(stdout);
scanf("%d",&choice);

switch(choice){
    case 1:{ votesCount1++;
            printf("\n\tYou casted your vote for %s \n",CANDIDATE1);
            break;}
    case 2: {votesCount2++;
            printf("\n\tYou casted your vote for %s \n",CANDIDATE2);
            break;}
    case 3: {votesCount3++;
            printf("\n\tYou casted your vote for %s \n",CANDIDATE3);
            break;}
    case 4:{ votesCount4++;
            printf("\n\t You casted your vote for %s \n",CANDIDATE4);
            break;}
//    case 5: spoiledtvotes++; break;
    default: printf("\n\t Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n \n\t\tthanks for vote !!\n");
getchar();
}
void percent(){
    total=(votesCount1+votesCount2+votesCount3+votesCount4);
	p1=((votesCount1*100)/total);
	p2=((votesCount2*100)/total);
    p3=((votesCount3*100)/total);
    p4=((votesCount4*100)/total);
}
void votesCount(){
printf("\n\t\t ##### Voting Statics ####\n");
printf("\n %s - %d -  %.2f%% ", CANDIDATE1, votesCount1,p1);
printf("\n %s - %d -  %.2f%% ", CANDIDATE2, votesCount2,p2);
printf("\n %s - %d -  %.2f%% ", CANDIDATE3, votesCount3,p3);
printf("\n %s - %d -  %.2f%% ", CANDIDATE4, votesCount4,p4);
printf("\n Total Votes casted:- %d ", total);
getchar();
}

void getLeadingCandidate(){
    printf("\n\t\t #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("\t\t%s",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("\t\t%s",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("\t\t%s",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("\t\t%s",CANDIDATE4);
    else
    printf("\t\t----- Warning !!! No-win situation----");
    printf("\n---------------------------------------------------------------------------------\n");
    getchar();

}

int main()
{
//int i;
int choice;

do{
printf("\n\n\t\t\tPress Enter to Continue \n");
fflush(stdout);
getchar();
printf("\n---------------------------------------------------------------------------------\n");
printf("\n\t\t ###### Welcome to Election/Voting 2023 #####");
printf("\n---------------------------------------------------------------------------------\n");

printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");


printf("\n\n Please enter your choice : ");
fflush(stdout);
scanf("%d", &choice);
printf("\n---------------------------------------------------------------------------------\n");
switch(choice)
{
case 0:printf("\n------------------------------------END----------------------------------\n");exit(0);
case 1: castVote();break;
case 2:{percent();
        votesCount();
        break;
}
case 3: getLeadingCandidate();break;

default: printf("\n Error: Invalid Choice");
}
}while(choice!=4);

//hold the screengetchar();

return 0;
}




