#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void display()
{
printf("\n\t\t\t\tTIC TAC TOE\n");
}
void align()
{
printf("\n\n\n\t\t\t\t ---|---|---\n");
printf("\t\t\t\t  %c | %c | %c\n",a[0],a[1],a[2]);
printf("\t\t\t\t ---|---|---\n");
printf("\t\t\t\t  %c | %c | %c\n",a[3],a[4],a[5]);
printf("\t\t\t\t ---|---|---\n");
printf("\t\t\t\t  %c | %c | %c\n",a[6],a[7],a[8]);
}
void playerName()
{
printf("\nplayer 1:X\n");
printf("player 2:O\n");
}
void start()
{
char pa;
printf("enter who will start the game:player 1 or player 2\n");
scanf("%c",pa);
}
void play()
{
 char p,s,i;
 for(i=0;i<9;i++)
 {
 printf("enter position and symbol for the player:\n");
 fflush(stdin);
 scanf("%c",&p);
 fflush(stdin);
 scanf("%c",&s);
 check(p,s);
 printf("\n\n\n\t\t\t\t ---|---|---\n");
printf("\t\t\t\t  %c | %c | %c\n",a[0],a[1],a[2]);
printf("\t\t\t\t ---|---|---\n");
printf("\t\t\t\t  %c | %c | %c\n",a[3],a[4],a[5]);
printf("\t\t\t\t ---|---|---\n");
printf("\t\t\t\t  %c | %c | %c\n",a[6],a[7],a[8]);
 if((a[0]!='1')&&(a[0]==a[1])&&(a[1]==a[2]))
 {
 printf("player is won\n");
 break;
 }
 else if((a[3]!='3')&&(a[3]==a[4])&&(a[4]==a[5]))
 {
 printf("player is won\n");
 break;
 }
 else if((a[6]!='6')&&(a[6]==a[7])&&(a[7]==a[8]))
 {
 printf("player is won\n");
 break;
 }
 else if((a[0]!='1')&&(a[0]==a[4])&&(a[4]==a[8]))
 {
 printf("player is won\n");
 break;
 }
 else if((a[2]!='3')&&(a[2]==a[4])&&(a[4]==a[6]))
 {
 printf("player is won\n");
 break;
 }
 else if((a[0]!='1')&&(a[0]==a[3])&&(a[3]==a[6]))
 {
 printf("player is won\n");
 break;
 }
 else if((a[1]!='2')&&(a[1]==a[4])&&(a[4]==a[7]))
 {
 printf("player is won\n");
 break;
 }
  else if((a[2]!='3')&&(a[2]==a[5])&&(a[5]==a[8]))
 {
 printf("player is won\n");
 break;
 }
 else if((a[0]!='1')&&(a[0]==a[1])&&(a[1]==a[2]))
 {
 printf("player is won\n");
 break;
 }
 }
}
int check(p,s)
{
int i;
for(i=0;i<9;i++)
{
if(a[i]==p)
{
a[i]=s;
}
}
}
void main()
{
clrscr();
display();
align();
playerName();
start();
play();
getch();
}













