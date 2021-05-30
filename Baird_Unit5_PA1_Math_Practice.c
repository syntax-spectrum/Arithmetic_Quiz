//Zachary Baird
//6-14-2020
//Math Week 5

#include<stdio.h>
#include <stdlib.h>

int correctAnswers=0,ttlProblems=0;
int randomNum(int min,int max){
return rand() % (max + 1 - min) + min;
}
void   calculate(char difficulty, char operator){
	int n1,n2;
   if(difficulty=='e'){
   n1=randomNum( 0, 10);
   n2=randomNum( 0, 10);
   }else
   if(difficulty=='m'){
   n1=randomNum( 11, 100);
   n2=randomNum( 11, 100);
   }else
   if(difficulty=='h'){
   n1=randomNum( 100, 1000);
   n2=randomNum( 100, 1000);
   }
   printf("\n%d %c %d ? ",n1,operator,n2);
   int ans;
   scanf("%d",&ans);
   if(operator=='+'){
       if((n1+n2)==ans){
       	printf("\nCorrect!\n");
       	 correctAnswers++;
       }
       else {
	   printf("\nSorry! Please try again.\n");}
       }
	   else
   if(operator=='-'){
       if((n1-n2)==ans){
		printf("\nCorrect!\n");
       correctAnswers++;
       }
      else {
	  printf("\nSorry! Please try again.\n"); }
   }else

   if(operator=='*'){
       if((n1*n2)==ans){
		printf("\nCorrect!\n");
       correctAnswers++;
       }
      else{
	  printf("\nSorry! Please try again.\n");}
   }else

   if(operator=='/'){
       if((n1/n2)==ans){
		printf("\nCorrect!\n");
       correctAnswers++;
       }
       else{
       printf("\nSorry! Please try again.");
   			}
   }
ttlProblems++;
}
int main(){
int option=0;
char difficulty;
   while(option != 5){
       printf("Math practice program main menu\n");
       printf("1. Addition\n");
       printf("2. Subtraction\n");
       printf("3. Multiplication\n");
       printf("4. Division\n");
       printf("5. Exit\n");
       printf("Select an option ");
       scanf("%d",&option);
       
	   if(   option==5)
           break;
		printf("Please enter your answer as a whole number.\n");

       printf("Select difficulty level e-easy m-medium h-hard ");
      
       scanf(" %c",&difficulty);
       for(;difficulty!='e' && difficulty!='m' && difficulty!='h' ;){
       printf("\nPlease enter e, m or h ");
      
       scanf(" %c",&difficulty);
       
       }

      if(option == 1)
       calculate(difficulty,'+');
       else if(option == 2)
       calculate(difficulty,'-');
           else if(option == 3)
       calculate(difficulty,'*');
           else if(option == 4)
       calculate(difficulty,'/');
	   	
   }
   
float percent=(((float)correctAnswers/(float)ttlProblems)*100.0);
printf("You attempted %d problems and got %d correct\nFor a percentage correct of %.2f percent\n",ttlProblems,correctAnswers,percent);
}
