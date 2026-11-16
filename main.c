#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void DisplayMenu(){
printf(" ______________________________\n");
printf("|         Switch Craft         |\n");
printf("|------------------------------|\n");
printf("| / / / Choose Your Game / / / |\n");
printf("|------------------------------|\n");
printf("| 1 | Snakes and Ladder        |\n");
printf("| 2 | Tic Tac Toe              |\n");
printf("| 3 | Guess The Number         |\n");
printf("| 4 | Exit Menu                |\n");
printf("|_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=|\n");
printf("\n");
printf("Pick An Option: ");
}
void game1() {
    char Retry;
    system("cls");
    do{
        int p1 = 1, p2 = 1, turn = 1, dice;
        getchar();
    do{
for (int row = 9; row >= 0; row--) {
    for (int col = 0; col < 10; col++) {
        printf("\033[107;30m+------");
    }
    printf("+\033[0m\n");
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

void game2(){
    int Choice,End = 0;
    int p1 = 0,p2 = 0;
    char Retry;
    system("cls");
    do{
    printf("This will be replaced by Game 2 \n");
    // IM WORKING ON THE STRUCTURE FIRST ONCE THATS DONE ILL MOVE ON TO THE GAME
    do{
    printf("Type R to Retry \n");
    printf("Type E to Go back to Menu \n");
    scanf(" %c",&Retry);
    if(Retry == 'E'){
        break;
    }
    system("cls");
    }
    while(Retry != 'E' && Retry != 'R');
    system("cls");
    }
    while (Retry == 'R');
}
void game3(){
    int Choice,End = 0;
    int p1 = 0,p2 = 0;
    char Retry;
    system("cls");
    do{
    printf("This will be replaced by Game 3 \n");
    // IM WORKING ON THE STRUCTURE FIRST ONCE THATS DONE ILL MOVE ON TO THE GAME
    do{
    printf("Type R to Retry \n");
    printf("Type E to Go back to Menu \n");
    scanf(" %c",&Retry);
    if(Retry == 'E'){
        break;
    }
    system("cls");
    }
    while(Retry != 'E' && Retry != 'R');
    system("cls");
    }
    while (Retry == 'R');
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
