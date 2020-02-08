#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GuessGame(int amount_bet, int* inhand_cash)
{
    char Hole[3] = { 'N', 'R', 'N' };
    printf("\nWait !! Rat is shuffling its position...\n");
    srand((time(NULL)));
    int i, x, y, temp;

    /*Swapping the Rat's (R's) position  five times using
    the random number for random index*/

    for (i = 0; i < 5; i++) {
        x = rand() % 3;
        y = rand() % 3;
        temp = Hole[x];
        Hole[x] = Hole[y];
        Hole[y] = temp;
    }

    int PlayerGuess;
    printf(" There are 3 holesin total named 1 , 2 , 3 \n");
    printf("\nYou may now guess the hole in which Rat is present: ");

    scanf("%d", &PlayerGuess);

    if (Hole[PlayerGuess - 1] == 'R') {
        (*inhand_cash) += 2 * amount_bet;
        printf("You win ! The holes are as follows: ");
        printf("\"%c %c %c\" ", Hole[0], Hole[1], Hole[2]);
        printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
    }

    else {
        (*inhand_cash) -= amount_bet;
        printf("You Loose ! The holes are as follows: ");
        printf("\"%c %c %c\" ", Hole[0], Hole[1], Hole[2]);
        printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
    }
}

int main()
{
    int amount_bet, inhand_cash;
    /*
    You have to guess the hole in which the
     Rat is hidden among three holes
    The hole in which Rat is present is
    named as 'R' and rest two are named as 'N'
    If your guess is wrong, you loose the
    amount_bet from your inhand_cash
    If you guess it right, you win
     twice the amount_bet in your inhand_cash
    Keep playing and keep winning
    until you go out of cash or if
    u want to quit in between enter the amont bet as 0.
    */
    printf("------Menu------\n");
    printf("1- Instructions\n");
    printf("2- Play\n");
    printf("3- Quit\n");
    int choice,choice2;
    scanf("%d",&choice);
    if(choice==1){
        printf("You have to guess the hole in which the\n");
        printf("Rat is hidden among three holes\n");
    printf("The hole in which Rat is present is\n");
    printf("named as 'R' and rest two are named as 'N'\n");
    printf("If your guess is wrong, you loose the\n");
    printf("amount_bet from your inhand_cash\n");
    printf("If you guess it right, you win twice\n");
    printf("the amount_bet in your inhand_cash\n");
    printf("Keep playing and keep winning\n");
    printf("until you go out of cash or if u want\n");
    printf("to quit in between enter the amont bet as 0.\n");
    printf("\nTo continue to the game press 2\n");
    scanf("%d",&choice2);
    }
    if(choice==2 || choice2==2){
    printf("----Enter the inhand_cash you have right now---- : ");

    scanf("%d", &inhand_cash);

    while (inhand_cash > 0) {
        printf("\nEnter the amount_bet you want to play for : ");
        scanf("%d", &amount_bet);
        if (inhand_cash == 0 || amount_bet > inhand_cash || amount_bet == 0)
            break;
        GuessGame(amount_bet, &inhand_cash);
    }

    if (inhand_cash == 0 || amount_bet > inhand_cash ) {
        printf("\n\""
               " sorry you don't have enough cash to play more, ");
        printf("Do come next time\""
               "\n");
        printf("Thank You for playing \n");
    }
    else if(amount_bet==0){
        printf("Amount_bet can not be 0 \n");
        printf("Thank You for playing ");
    }
    }
    if(choice==3 )
        exit(1);
    return 0;
}
