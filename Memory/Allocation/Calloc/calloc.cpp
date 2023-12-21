#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int* students;
    int insertedSizeForStudents;

    printf("Enter the number of students: ");
    scanf("%d", &insertedSizeForStudents);

    students = (int*) calloc(insertedSizeForStudents, insertedSizeForStudents * sizeof(int));

    if(students){
        for(int i = 0; i < insertedSizeForStudents; i++){
            students[i] = i * (i + 10);

            cout << students[i] << endl;
        }
    }

    free(students);

    return 0;
}