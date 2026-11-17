#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void DisplayMenu() {
    printf("\n\n\n");
    printf("                                                            ______________________________\n");
    printf("                                                           |         Switch Craft         |\n");
    printf("                                                           |------------------------------|\n");
    printf("                                                           | / / / Choose Your Game / / / |\n");
    printf("                                                           |------------------------------|\n");
    printf("                                                           | 1 | Snakes and Ladder        |\n");
    printf("                                                           | 2 | Tic Tac Toe              |\n");
    printf("                                                           | 3 | Guess The Number         |\n");
    printf("                                                           | 4 | Exit Menu                |\n");
    printf("                                                           |_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=|\n\n");
    printf("                                           Pick An Option: ");
}

void game1() {
    char Retry;
    system("cls");
    do{
        int p1 = 1, p2 = 1, turn = 1, dice;
        getchar();
    do{
            printf("                                             Snakes and Ladder\n");
for (int row = 9; row >= 0; row--) {
        printf("                                             ");
    for (int col = 0; col < 10; col++) {
        printf("\033[107;30m+------");
    }
    printf("+\033[0m\n");
    printf("                                             ");
    for (int col = 0; col < 10; col++) {
        int sq = (row * 10) + col + 1;
        int isLadder = (sq == 4 || sq == 9 || sq == 21 || sq == 28 || sq == 51 || sq == 71);
        int isSnake  = (sq == 17 || sq == 54 || sq == 62 || sq == 64 || sq == 87 || sq == 98);

        printf("\033[107;30m|");
        if (isLadder)      printf("\033[102;30m");
        else if (isSnake)  printf("\033[101;30m");
        else               printf("\033[107;30m");
        if (sq == p1 && sq == p2) {
            printf("\033[1;35m 1&2  ");
        } else if (sq == p1) {
            printf("\033[1;34m  P1  ");
        } else if (sq == p2) {
            printf("\033[1;36m  P2  ");
        } else if (sq == 4) {
            printf(" L->14");
        } else if (sq == 9) {
            printf(" L->31");
        } else if (sq == 21) {
            printf(" L->42");
        } else if (sq == 28) {
            printf(" L->84");
        } else if (sq == 51) {
            printf(" L->67");
        } else if (sq == 71) {
            printf(" L->91");
        } else if (sq == 17) {
            printf(" S->7 ");
        } else if (sq == 54) {
            printf(" S->34");
        } else if (sq == 62) {
            printf(" S->19");
        } else if (sq == 64) {
            printf(" S->60");
        } else if (sq == 87) {
            printf(" S->24");
        } else if (sq == 98) {
            printf(" S->79");
        } else {
            printf("      ");
        }
    }
    printf("\033[107;30m|\033[0m\n");
    printf("                                             ");
    for (int col = 0; col < 10; col++) {
        int sq = (row * 10) + col + 1;
        int isLadder = (sq == 4 || sq == 9 || sq == 21 || sq == 28 || sq == 51 || sq == 71);
        int isSnake  = (sq == 17 || sq == 54 || sq == 62 || sq == 64 || sq == 87 || sq == 98);

        printf("\033[107;30m|");
        if (isLadder)      printf("\033[102;30m%-6d", sq);
        else if (isSnake)  printf("\033[101;30m%-6d", sq);
        else               printf("\033[107;30m%-6d", sq);
    }
    printf("\033[107;30m|\033[0m\n");
}
printf("                                             ");
for (int col = 0; col < 10; col++) {
    printf("\033[107;30m+------");
}
printf("+\033[0m\n");
    if (turn == 1){
    printf("Player 1's Turn \n");
    printf("Press Enter to Roll The Dice \n");
    dice = (rand() % 6) + 1;
    getchar();
    p1 = p1+dice;
    printf("You Rolled a %d \n",dice);
    if(p1>=100){
        printf("Player 1 Win \n");
        break;
    }
    else if (p1 == 4)       { p1 = 14; printf("Ladder! Climbed to 14!\n"); }
    else if (p1 == 9)  { p1 = 31; printf("Ladder! Climbed to 31!\n"); }
    else if (p1 == 21) { p1 = 42; printf("Ladder! Climbed to 42!\n"); }
    else if (p1 == 28) { p1 = 84; printf("Ladder! Climbed to 84!\n"); }
    else if (p1 == 51) { p1 = 67; printf("Ladder! Climbed to 67!\n"); }
    else if (p1 == 71) { p1 = 91; printf("Ladder! Climbed to 91!\n"); }
    else if (p1 == 17) { p1 = 7;  printf("Snake! Slid down to 7!\n"); }
    else if (p1 == 54) { p1 = 34; printf("Snake! Slid down to 34!\n"); }
    else if (p1 == 62) { p1 = 19; printf("Snake! Slid down to 19!\n"); }
    else if (p1 == 64) { p1 = 60; printf("Snake! Slid down to 60!\n"); }
    else if (p1 == 87) { p1 = 24; printf("Snake! Slid down to 24!\n"); }
    else if (p1 == 98) { p1 = 79; printf("Snake! Slid down to 79!\n"); }
    printf("Press Enter to Continue \n");
    getchar();
    system("cls");
    turn = 2;
    }
else if (turn == 2){
    printf("Player 2's Turn \n");
    printf("Press Enter to Roll \n");
    dice = (rand() % 6) + 1;
    getchar();
    p2 = p2+dice;
    printf("You Rolled a %d \n",dice);
    if(p2>=100){
        printf(" Player 2 Wins \n");
        break;
    }
    else if (p2 == 4)  { p2 = 14; printf("Ladder! Climbed to 14!\n"); }
    else if (p2 == 9)  { p2 = 31; printf("Ladder! Climbed to 31!\n"); }
    else if (p2 == 21) { p2 = 42; printf("Ladder! Climbed to 42!\n"); }
    else if (p2 == 28) { p2 = 84; printf("Ladder! Climbed to 84!\n"); }
    else if (p2 == 51) { p2 = 67; printf("Ladder! Climbed to 67!\n"); }
    else if (p2 == 71) { p2 = 91; printf("Ladder! Climbed to 91!\n"); }
    else if (p2 == 17) { p2 = 7;  printf("Snake! Slid down to 7!\n"); }
    else if (p2 == 54) { p2 = 34; printf("Snake! Slid down to 34!\n"); }
    else if (p2 == 62) { p2 = 19; printf("Snake! Slid down to 19!\n"); }
    else if (p2 == 64) { p2 = 60; printf("Snake! Slid down to 60!\n"); }
    else if (p2 == 87) { p2 = 24; printf("Snake! Slid down to 24!\n"); }
    else if (p2 == 98) { p2 = 79; printf("Snake! Slid down to 79!\n"); }
    printf("Press Enter to Continue \n");
    getchar();
    system("cls");
    turn = 1;
    }
    }
    while(p1< 100 && p2<100);

        do {
            printf("Type R to Replay \n");
            printf("Type E to Go back to Menu \n");
            scanf(" %c", &Retry);
            if (Retry == 'E') {
                break;
            }
            system("cls");
        } while (Retry != 'E' && Retry != 'R');
        system("cls");
    }
    while (Retry == 'R');
}

void game2() {
    char Retry;
    system("cls");
    do {
        char board[3][3] = {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}
        };
        int turn = 1, moves = 0, win = 0, box;

        do{
            system("cls");
            printf("\n\n");
            printf("                                             === TIC TAC TOE ===\n\n");
            for (int row = 0; row < 3; row++) {
                printf("                                             +---+---+---+\n");
                printf("                                             ");
                for (int col = 0; col < 3; col++) {
                    char mark = board[row][col];
                    if (mark == 'X') {
                        printf("|\033[1;34m X \033[0m");
                    } else if (mark == 'O') {
                        printf("|\033[1;31m O \033[0m");
                    } else {
                        printf("| %c ", mark);
                    }
                }
                printf("|\n");
            }
            printf("                                             +---+---+---+\n\n");
            if (win == 1 || moves == 9) {
                break;
            }
            if (turn == 1) {
                printf("                                             Player 1 (X), choose box (1-9): ");
            } else {
                printf("                                             Player 2 (O), choose box (1-9): ");
            }
            if (scanf("%d", &box) != 1) {
                while (getchar() != '\n');
                printf("                                             Invalid input! Press Enter...");
                getchar();
                continue;
            }
            int r = (box - 1) / 3;
            int c = (box - 1) % 3;

            if (box >= 1 && box <= 9 && board[r][c] != 'X' && board[r][c] != 'O') {
                board[r][c] = (turn == 1) ? 'X' : 'O';
                moves++;
                for (int i = 0; i < 3; i++) {
                    if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) win = 1;
                    if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) win = 1;
                }
                if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) win = 1;
                if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) win = 1;
                if (win == 0) {
                    if (turn == 1) {
                        turn = 2;
                    }
                    else {
                    turn = 1;
                    }
                }
            } else {
                while (getchar() != '\n');
                printf("                                             Box taken or out of range! Press Enter...");
                getchar();
            }

        } while (1);
        if (win == 1) {
            if (turn == 1) {
                printf("                                             \033[1;34mPlayer 1 (X) Wins!\033[0m\n\n");
            } else {
                printf("                                             \033[1;31mPlayer 2 (O) Wins!\033[0m\n\n");
            }
        } else {
            printf("                                             \033[1;33mIt's a Draw!\033[0m\n\n");
        }

        do {
            printf("                                             Type R to Retry \n");
            printf("                                             Type E to Go back to Menu \n");
            printf("                                             Choice: ");
            scanf(" %c", &Retry);
            if (Retry == 'E') {
                break;
            }
            system("cls");
        } while (Retry != 'E' && Retry != 'R');
        system("cls");
    } while (Retry == 'R');
}
void game3() {
    char Retry;
    system("cls");
    do {
        int diff, maxRange = 100, maxAttempts = 7;
        int secret, guess, attempts = 0, won = 0, score = 0;
        printf("=== GUESS THE NUMBER ===\n\n");
        printf("1. Easy   (1 - 50,  10 tries)\n");
        printf("2. Medium (1 - 100, 7 tries)\n");
        printf("3. Hard   (1 - 200, 5 tries)\n\n");
        printf("Choose Difficulty (1-3): ");
        scanf("%d", &diff);

        switch (diff) {
            case 1:
                maxRange = 50;
                maxAttempts = 10;
                break;
            case 3:
                maxRange = 200;
                maxAttempts = 5;
                break;
            default:
                diff = 2;
                maxRange = 100;
                maxAttempts = 7;
                break;
        }
        secret = (rand() % maxRange) + 1;
        system("cls");
        printf("I picked a number between 1 and %d!\n", maxRange);
        printf("You have %d attempts.\n\n", maxAttempts);
        while (attempts < maxAttempts) {
            printf("Attempt %d/%d - Enter your guess: ", attempts + 1, maxAttempts);
            scanf("%d", &guess);
            attempts++;

            if (guess == secret) {
                won = 1;
                break;
            } else if (guess < secret) {
                printf("Too low! Try a HIGHER number.\n\n");
            } else {
                printf("Too high! Try a LOWER number.\n\n");
            }
        }
        if (won == 1) {
            score = (maxAttempts - attempts + 1) * 10 * diff;
            printf("\nYou got it! The number was %d.\n", secret);
            printf("Attempts used: %d | Score: %d\n\n", attempts, score);
        } else {
            printf("\nOut of attempts! The secret number was %d.\n\n", secret);
        }
        do {
            printf("Type R to Retry \n");
            printf("Type E to Go back to Menu \n");
            scanf(" %c", &Retry);
            if (Retry == 'E') {
                break;
            }
            system("cls");
        } while (Retry != 'E' && Retry != 'R');
        system("cls");
    } while (Retry == 'R');
}

int main()
{
    srand(time(NULL));
    int Choice,End = 0;
    char Retry;
    do{
    DisplayMenu();
    scanf("%d",&Choice);
    switch(Choice){
case 1:
    game1();
    system("cls");
    break;
case 2:
    game2();
    system("cls");
    break;
case 3:
    game3();
    system("cls");
    break;
case 4:
    printf("Exiting");
    End = 1;
    break;
default:
    system("cls");
    break;
    }
    }
    while (End == 0);
    return 0;
}
