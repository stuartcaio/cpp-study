#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int *students = (int*) malloc(sizeof(int));
    int insertedSizeForStudents;

    cout << "Enter the size of students: ";
    scanf("%d", &insertedSizeForStudents);

    cout << sizeof(*students) << endl;

    students = (int*) realloc(students, insertedSizeForStudents * sizeof(int));

    cout << insertedSizeForStudents * sizeof(*students) << endl;

    for(int i = 0; i < insertedSizeForStudents; i++){
        students[i] = i * 12;

        cout << students[i] << endl;
    }

    free(students);
    
    return 0;
}