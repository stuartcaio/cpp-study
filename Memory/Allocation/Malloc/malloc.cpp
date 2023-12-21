#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int* students;
    int insertedSizeForStudents;

    printf("Enter the number of students: ");
    scanf("%d", &insertedSizeForStudents);

    students = (int*) malloc(insertedSizeForStudents * sizeof(int));

    if(students){
        for(int i = 0; i < insertedSizeForStudents; i++){
            students[i] = i * (i + 10);

            cout << students[i] << endl;
        }
    }

    return 0;
}