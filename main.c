#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   char name[20],d;
   printf("****************Welcome to Casino Game**************\n");
   printf("-------------------------------------------------------\n");
   printf("                  Game rules                         \n");
     printf("-------------------------------------------------------\n");

   printf("1.You have to make a bid and guess a number between 1 and 10.\n");
   printf("2.If the guess is correct then u will get 10 times the bid amount\n");
   printf("3.If your guess is wrong then you will lose the bid\n");
        printf("-------------------------------------------------------\n");

   int money,user_guess,bid,initial=0;
   printf("enter the name");
   scanf("%s",&name);
   printf("enter the money ");
   scanf("%d",&money);
   initial = money;
   while(1)
   {
       if(money == 0)
       {
           printf("Your current balance is $0\n");
           printf("You cannot play the game right now\n");
           break;
       }
       printf("your current balance is $%d\n",money);
       printf("enter the amount to be bid $");
       scanf("%d",&bid);
       if(bid > money)
       {
           printf("You have bidded more than your current balance\n");
           printf("Please enter valid bid\n");
           scanf("%d",&bid);

       }
       printf("Guess a number betweeen 1 and 10");
       scanf("%d",&user_guess);
       int computer_guess =   rand()% 10 + 1;
       if(user_guess == computer_guess)
       {
           printf("You have guessed Correctly.You have won\n");
           money = money + 9*bid;
           printf("your current balance is $%d\n",money);
       }
       else
       {
           printf("Bad luck this time!!.You lost $%d\n",bid);
           money = money -bid;
           printf("your current balance is $%d\n",money);

       }
       printf("Do you want to play again.Enter y to play again else enter n\n");
       scanf("%s",&d);
       if(d=='n')
       {
           printf("You have chosen to stop the game\n");
           break;
       }
   }
}
