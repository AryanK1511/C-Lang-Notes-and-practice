// Arrays: Arrays store a collection of data of the same type.
// Structures: Structs store a collection of data that can be of different types.

#include <stdio.h>

// Declaring a struct called 'Student'
struct Date {
    int year, month, day;
};

struct Student {
    int id;
    struct Date birthDate;
    double mark;
};

int main() 
{
    // Creating an instance of Struct 'Student' and intializing it
    struct Student student1 = {
        123, {1997, 4, 17}, 73.1
    };

    // Creating a second instance
    struct Student student2 = {
        456, {1996, 7, 11}, 81.7
    };

    // Using dot notation to access the contents
    printf("Student1: id=%d, birth=%d/%d/%d, grade=%.2lf\n", student1.id, student1.birthDate.year, student1.birthDate.month, student1.birthDate.day, student1.mark);
    printf("Student2: id=%d, birth=%d/%d/%d, grade=%.2lf\n", student2.id, student2.birthDate.year, student2.birthDate.month, student2.birthDate.day, student2.mark);

    // Use dot notation to modify one field in student1
    student1.mark = 77.77;

    // Assign the value of student1 to student2
    student2 = student1; // Can only do this with structs

    // Print the new value of student2
    printf("Student2: id=%d, birth=%d/%d/%d, grade=%.2lf\n", student2.id, student2.birthDate.year, student2.birthDate.month, student2.birthDate.day, student2.mark);

    return 0;
}