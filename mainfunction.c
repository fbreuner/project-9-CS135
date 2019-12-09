//Project 9
#include <stdio.h>
#define MAX_STR 100

int chooseDifficulty();
void displayScoreboard(int difficulty, int moves);
int readScores(
//edit

int main ()
{
//Menu and Difficulty functions (also to try and figure out how github works)
//edit date: 12/4
//ps: the amount of spaces that it indents is being fucky so feel free to change the formatting if it looks weird

  int menu;
  do
  {
  	printf("hey... you wanna play a game?\n");
  	printf("\n1 - play game\n2 - see scoreboard\n0 - exit\n");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			printf("Great! Let's play.\n");
			int difficulty = chooseDifficulty();
			int moves;
			if(difficulty == 1)
			{
				printf("You have chosen easy difficulty, like the spineless coward that you are.\n");
			}
			if(difficulty == 2)
			{
				printf("You have chosen medium difficulty. Neat.\n");
			}
			if(difficulty == 3)
			{e
				printf("What's this? Hard mode? Well, you asked for it...\nThe ground begins to shake.\nA voice: YOU DARE CHALLENGE ME???\n\n*pokemon battle music*\n");
			}
			printf("Enter a number of moves: ");
			scanf("%d", &moves);
			//genBoard(difficulty, other parameters);
			//playGame(parameters);
			displayScorebaord(difficulty, moves);
			//These functions will probably have other sub-functions in them that we can figure out individually
			printf("\n\n");
			break;
		case 2: 
			printf("Here's what everyone else got.\n");
			displayScorebaord(difficulty, moves);
			printf("Can you do better?\n");
			break;
		case 0:
			break;
	}
}while(menu!=0);

return 0;
}

int chooseDifficulty()
{
	int dif;
	printf("How do you like it?\n");
	printf("1 - easy\n2 - medium\n3 - hard\n");
	scanf("%d", &dif);
	return dif;
}

void displayScorebaord(int difficulty, int moves)
{
	char names[][MAX_STR];
	int scores[];
	FILE*
	if (fopen("scores.txt" "r")==NULL)
	{
		printf(stderror "Could not open scoreboard file.\n");
	}
	else
	{
		printf("Can open scores.txt\n");
	}

}
	
	
	
