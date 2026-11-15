#include <stdio.h>
#include <stdlib.h>
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
void game1(){
    int Choice,End = 0;
    char Retry;
    system("cls");
    do{
    printf("This will be replaced by Game 1 \n");
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
void game2(){
    int Choice,End = 0;
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
    }
    while(Retry != 'E' && Retry != 'R');
    }
    while (Retry == 'R');
}
void game3(){
    int Choice,End = 0;
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
    }
    while(Retry != 'E' && Retry != 'R');
    }
    while (Retry == 'R');
}

int main()
{
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
