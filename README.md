# My_First_Repo_7 — My First Project
Dynamic Student Performance Analyzer

A C program designed to manage and evaluate the academic performance of multiple students. The program dynamically allocates memory based on the number of students and subjects, validates input, calculates averages, and identifies the class topper.

Objective

Develop a C program that:

Accepts the number of students and number of subjects at runtime

Uses dynamic memory allocation to store student records and marks

Validates marks to ensure they are within the 0–100 range

Calculates the average marks for each student

Identifies and displays the student with the highest average

Frees all dynamically allocated memory before program termination

Features

Struct-based organization for student data

Dynamic allocation of memory for flexible subject count

Input validation for students, subjects, and marks

Automatic calculation of average marks

Identification of the topper based on highest average

Safe memory deallocation (prevents memory leaks)

Data Structure
typedef struct {
    int Rollno;
    int *Marks;
    char Name[50];
    float Average;
} Details;


This structure efficiently stores all required information for each student.

Compilation and Execution
Compile
gcc student_performance_analyzer.c -o analyzer

Run
./analyzer


Follow the prompts to enter the number of students, subjects, and each student’s details.

Sample Output
Enter no of Students: 2
Enter number of subjects: 3

Enter Student no: 1
Name: Alex
Roll no: 101
Marks of 3 subjects (0-100):
Enter subject no:1 Marks: 85
Enter subject no:2 Marks: 90
Enter subject no:3 Marks: 88

Enter Student no: 2
Name: John
Roll no: 102
Marks of 3 subjects (0-100):
Enter subject no:1 Marks: 95
Enter subject no:2 Marks: 92
Enter subject no:3 Marks: 94

--- Topper Details ---
Name    : John
Roll no : 102
Average : 93.67

Recommended File Name

student_performance_analyzer.c

Future Improvements

Support for full names (with spaces)

Save results to file (CSV or TXT)

Sort students by average marks

Add grade classification or ranking

Menu-driven system for better usability

Author

Ismail
Computer Science and Engineering Student