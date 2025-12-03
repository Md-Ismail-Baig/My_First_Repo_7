#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Rollno;
    int *Marks;
    char Name[50];
    float Average;
}Details;

int valid_Marks(int Marks)
{
    if(Marks < 0 || Marks > 100)
    {
        printf("Invalid marks, Enter valid marks...Try again...\n");
        return 1;
    }
        return 0;
}

int main() {
    
    int numStudents,numSubjects,topperIndex,total;
    float avg;
    Details *student;
    printf("Enter no of Students: ");
    scanf("%d",&numStudents);
    
    while(numStudents <= 0) {
        printf("Invalid number of students!\n");
        scanf("%d",&numStudents);
    }
    
    printf("Enter number of subjects: ");
    scanf("%d",&numSubjects);   
    
    while(numSubjects <= 0) {
    	printf("Invalid number of subjects!\n");
    	scanf("%d",&numSubjects);
    }    
    
    topperIndex = 0;
    avg = 0.0;
    student = (Details*)malloc(numStudents*sizeof(Details));
    
    if (student == NULL) {
    	printf("Memory allocation failed!\n");
    	return 1;
    }
    
    for(int i = 0;i<numStudents;i++)
    {
        total = 0;
        student[i].Marks = (int*)malloc(numSubjects*sizeof(int));
        
        if (student[i].Marks == NULL) {
    		printf("Memory allocation failed!\n");
    		return 1;
        }
        
        printf("Enter Student no: %d\n",i+1);
        
        printf("Name: ");
        scanf("%s",student[i].Name);
        
        printf("Roll no: ");
        scanf("%d",&student[i].Rollno);
        
        printf("Marks of %d subjects (0-100):\n",numSubjects);
        for(int j = 0;j < numSubjects;j++)
        {
            printf("Enter subject no:%d Marks: ",j+1);
            scanf("%d",&student[i].Marks[j]);
            if(valid_Marks(student[i].Marks[j]))
                j--;
            else
                total += student[i].Marks[j];
        }
                
        student[i].Average = ((float)total)/numSubjects;
        
        if(avg < student[i].Average)
        {
            avg = student[i].Average;
            topperIndex = i;
        }
        printf("\n");
    }
    
    printf("----------------------------------------------");
    printf("\n--- [ ^_^ ] --- Topper Details --- [ ^_^ ] ---\n");
    printf("----------------------------------------------\n");
    printf("\t\t\t\tName    : %s\n",student[topperIndex].Name);
    printf("\t\t\t\tRoll no : %d\n",student[topperIndex].Rollno);
    printf("\t\t\t\tAverage : %f\n",student[topperIndex].Average);
    printf("===============================================");
    
    for (int i = 0; i < numStudents; i++) {
        free(student[i].Marks);
    }
    free(student);
    
    return 0;

}
