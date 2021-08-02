// A program to Calculate GPA of 3 courses
#include<stdio.h>
int main()
{
	float GPA1, GPi , GPi2, GPi3;
	int CUi ,CUi2, CUi3;
	float GPA;
	
	// prompting user to input details for the First course
	printf("Enter the GPi of First course: ");
	scanf("%f", &GPi);
	printf("Enter the CUi of the First course: ");
	scanf("%d", &CUi);	
	
	// prompting user to input details for the Second course
	printf("Enter the GPi of the Second course: ");
	scanf("%f", &GPi2);	
	printf("Enter the CUi of the Second course: ");
	scanf("%d", &CUi2);
	
	// prompting user to input details for the Third course
	printf("Enter the GPi of the third course: ");
	scanf("%f", &GPi3);
	printf("Enter the CUi of the third course: ");
	scanf("%d", &CUi3);
	
	//calculating the GPA for all the three courses 
	GPA = (GPi*CUi + GPi2*CUi2 + GPi3*CUi3)/(CUi + CUi2 + CUi3);
	printf("the GPA is %.2f", GPA);
	
	
	return 0;
}
