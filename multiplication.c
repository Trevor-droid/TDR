#include <stdio.h>
 int main(){
int j=0,i=0,s; 
printf("\n  Enter number to obtain multiplication of 15 by that number...");
scanf("%d",&s);//scans the number at which the multiplication table stops at ;
printf("\n======================= =MULTIPLICATION TABLE OF 15 BY %d===============================\n \n",s);

while(1){
j++;
if(j>15) break;
for(i=1;i<=s;i++){
	
		printf(" %03d   ", j*i);
	
}
printf("\n");
 }
 
printf("\n==========================================================================================");
 
 printf("");
 return 0;	
 }