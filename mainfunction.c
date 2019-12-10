//Project 9
#include <stdio.h>
#define ARR_LEN 100
#define ARR_HEIGHT 11

int chooseDifficulty();
void readScoreboard(char names[ARR_HEIGHT][ARR_LEN], int scores[ARR_HEIGHT][ARR_LEN]);

void displayScoreboard(int difficulty, int moves);


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
            int difficulty;
            difficulty = chooseDifficulty();
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
            {
                printf("What's this? Hard mode? Well, you asked for it...\nThe ground begins to shake.\nA voice: YOU DARE CHALLENGE ME???\n\n*pokemon battle music*\n");
            }
            printf("Enter a number of moves: ");
            scanf("%d", &moves);
            //genBoard(difficulty, other parameters);
            //playGame(parameters);
            displayScoreboard(difficulty, moves);
            //These functions will probably have other sub-functions in them that we can figure out individually
            printf("\n\n");
            break;
        case 2:
            printf("Here's what everyone else got.\n");
            displayScoreboard(difficulty, moves);
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

void displayScoreboard(int difficulty, int moves)
{
    char names[ARR_HEIGHT][ARR_LEN];
    int scores[ARR_HEIGHT][ARR_LEN];
    readScoreboard(names, scores);

}

void readScoreboard(char names[ARR_HEIGHT][ARR_LEN], int scores[ARR_HEIGHT][ARR_LEN])
{
    FILE*source_fp;
    FILE*dest_fp;
    char ch;
    int num;
    int j;
    int k;
    if ((source_fp = fopen("scores.txt", "r"))==NULL)
    {
        fprintf(stderr, "Could not open scoreboard file.\n");
    }
    else
    {
        printf("Can open scores.txt\n");
    }
    for(int i=0; i<ARR_HEIGHT; i++)
    {
        j = 0;
        k = 0;
        while((fscanf(source_fp, "%c", &ch))!=EOF&&ch!='\0'&&ch!='\n')
        {
            printf("scanned: %c\n", ch);
            if(ch<='z'&&ch>='A')
            {
                printf("added to names array location [%d][%d]: %c\n", i, j, names[i][j]);
                names[i][j] = ch;
                j++;
            }
            if(ch>='1'&&ch<='9')
            {
                //converts integers from their character values into integer values
               scores[i][k] = ch-48;
               printf("added to scores array location [%d][%d]: %d\n", i, k, scores[i][k]);
              k++;
            }
            if(ch==48)
            {
                scores[i][k] = 0;
                printf("added to scores array location [%d][%d]: %d\n", i, k, scores[i][k]);
            }
        }
        names[i][j]='\0';
        scores[i][k]='\0';
        printf("\n");
    }
//display names and scores
    for(int i = 0; i<ARR_HEIGHT; i++)
    {
        for(int i2=0; names[i][i2]!='\0'; i2++)
        {
            printf("%c", names[i][i2]);
        }
        printf(" ");
        for(int i2=0; scores[i][i2]!='\0'; i2++)
        {
            printf("%d", scores[i][i2]);
            if(scores[i][i2]==0)
            {
                printf("ZERO");
            }
        }
        printf("\n");
    }
}


