#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compute_score(char word[100]);

int main(void)
{
    char word1[100];
    printf("Player 1: ");
    scanf("%s", word1);
    int score1 = compute_score(word1);
    printf("%i\n", score1);
    
    
    char word2[100];
    printf("Player 2: ");
    scanf("%s", word2);
    int score2 = compute_score(word2);
    printf("%i\n", score2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Its a tie!\n");
    }
}

int compute_score(char word[100])
{
    char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int  key[]  = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    int score = 0;
    int n = strlen(word);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 26; j++)
        if (toupper(word[i]) == alph[j])
        {
            score += key[j];
        }
    }
    return score;
}