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

int main()
{
    int Choice,End = 0;
    char Retry;
    do{
    DisplayMenu();
    scanf("%d",&Choice);
    switch(Choice){
case 1:
    do{
    printf("Will Have Game 1 code here Making Structure first \n");
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
    break;
case 2:
    do{
    printf("Will Have Game 2 code here Making Structure first \n");
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
    break;
case 3:
    do{
    printf("Will Have Game 3 code here Making Structure first \n");
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
    break;
case 4:
    printf("Exiting");
    End = 1;
    break;
default:
    printf("Invalid Please Choose among the given options \n");
    break;
    }
    }
    while (End == 0);
    return 0;
}
