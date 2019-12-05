//Project 9
#include <stdio.h>

int chooseDifficulty();

int main ()
{
//Menu and Difficulty functions (also to try and figure out how github works)
//edit date: 12/4
//ps: the amount of spaces that it indents is being fucky so feel free to change the formatting if it looks weird

  int menu;
  do
  {
  	printf("hey... you wanna play a game?\n1 - play game\n2 - see scoreboard\n0 - exit\n")
	scanf("%d", menu);
	switch(menu)
	{
		case 1:
			printf("Great! Let's play.\n");
			int difficulty = chooseDifficulty();
			if(difficulty == 1)
			{
				printf("You have chosen easy difficulty, like the spineless coward that you are.\n");
			}
			if(difficulty == 2)
			{
				printf("You have chosen medium difficulty. Neat.\n");
			}
			if(difficulty == 3)
			{
				printf("What's this? Hard mode? Well, you asked for it...\nThe ground begins to shake.\nA voice: YOU DARE CHALLENGE ME???\n\n*pokemon battle music*\n);
			}
			//genBoard(difficulty, other parameters);
			//playGame(parameters);
			//displayScoreboard(parameters);
			//These functions will probably have other sub-functions in them that we can figure out individually
			break;
		case 2: 
			printf("Here's what everyone else got.\n");
			//displayScoreboard(parameters);
			printf("Can you do better?"\n);
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

