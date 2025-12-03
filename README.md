# My_First_Repo_7 --> My first project.
### Dynamic Student Performance Analyzer
<hr>
A C program designed to manage and evaluate the academic performance of multiple students.The program dynamically <br>allocates memory based on the number of students and subjects, validates input, calculates<br>averages, and identifies the class topper.
<hr>
<h2> Objective </h2>
<h4> Develop a C program that: </h4>
--> Accepts the number of students and number of subjects at runtime
<br>
--> Uses dynamic memory allocation to store student records and marks
<br>
--> Validates marks to ensure they are within the 0–100 range
<br>
--> Calculates the average marks for each student
<br>
--> Identifies and displays the student with the highest average
<br>
--> Frees all dynamically allocated memory before program termination
<hr>
<h2> Features </h2>
<br>
--> Struct-based organization for student data
<br>
--> Dynamic allocation of memory for flexible subject count
<br>
--> Input validation for students, subjects, and marks
<br>
--> Automatic calculation of average marks
<br>
--> Identification of the topper based on highest average
<br>
--> Safe memory deallocation (prevents memory leaks)
<hr>
<h3> Data Structure </h3><br>
typedef struct {<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int Rollno;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int *Marks;<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;char Name[50];<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;float Average;<br>
} Details;<br>
<hr>
This structure efficiently stores all required information for each student.
<hr>
<h1>Compilation and Execution</h1> 
<h2> Compile</h2>
&nbsp;&nbsp;&nbsp;&nbsp;gcc student_performance_analyzer.c -o analyzer

### Run
./analyzer
<br><hr>

<h3>Follow the prompts to enter the number of students, subjects, and each student’s details.</h3>
<h4> Sample Output</h4>
Enter no of Students: 2<br>
Enter number of subjects: 3<br>

Enter Student no: 1<br>
Name: Alex<br>
Roll no: 101<br>
Marks of 3 subjects (0-100):<br>
Enter subject no:1 Marks: 85<br>
Enter subject no:2 Marks: 90<br>
Enter subject no:3 Marks: 88<br>

Enter Student no: 2<br>
Name: John<br>
Roll no: 102<br>
Marks of 3 subjects (0-100):<br>
Enter subject no:1 Marks: 95<br>
Enter subject no:2 Marks: 92<br>
Enter subject no:3 Marks: 94<br>

--- Topper Details ---<br>
Name    : John<br>
Roll no : 102<br>
Average : 93.67
<hr>
<h2> Recommended File Name </h2>
student_performance_analyzer.c<hr>

### Future Improvements

--> Support for full names (with spaces)<br>

--> Save results to file (CSV or TXT)<br>

--> Sort students by average marks<br>

--> Add grade classification or ranking<br>

--> Menu-driven system for better usability<hr>

### Author
<hr>
<h4>Ismail<br>
Computer Science and Engineering Student.
</h4>
<hr>