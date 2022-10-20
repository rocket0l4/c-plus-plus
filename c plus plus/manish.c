#include <stdio.h>
#include<math.h>
struct student {
    char firstName[50];
    int roll;
    float points;

} s[10];

int main() {
    int x1,x2,y1,y2;
	int x,y;		//temporary variables
	float distance;
	printf("Enter X and Y coordinates of first point");
	scanf("%d %d",&x1,&y1);
	printf("Enter X and Y coordinates of Second point");
	scanf("%d %d",&x2,&y2);

	x=x2-x1;
	y=y2-y1;
	distance=sqrt((x*x)+(y*y)); 
	printf("Distance: %.2f",distance);
    
    //information of student.

    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter points: ");
        scanf("%f", &s[i].points);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("points: %.1f", s[i].points);
        printf("\n");
    }
    return 0;
}