//В курса по C лекторът има нужда да знае имената на всички студенти с оценки над 5.
//За целта той въвежда имената на студентите (под 30 символа), точките които са
//изкарали на теста, точките от домашни, и сумата от точките на практическите задачи
//(във формат %s %d %d %d) и натиска enter. Схемата за оценяване е 0 - 44т. (2), 45 - 59т.
//(3), 60 - 74т. (4), 75-79т. (5), 80т.+ (6). Данните са изход са имената на всички студенти с
//оценки 5 и 6, като имената са разделени с нов ред. Задачата трябва да се реши със
//структури. Напревете функция, която приема структурата като аргумент и връща каква
//е оценката на студент. Студентите за които се подават резултати на вход са 100.

#include <stdio.h>
#include <stdlib.h>

struct StudentInfo
{
    char name[30];
    int ExamPoints;
    int HomeworkPoints;
    int ExamTasksPoints;
};

void EvaluateCurrentStudentGrade(struct StudentInfo CurrentStudent);

int main()
{
    struct StudentInfo students[100];
    int i, CurrentScore , CurrentStudentExamPoints, CurrentStudentHomeworkPoints, CurrentStudentExamTasksPoints;
    char CurrentStudentName[30];
    for(i = 0; i < 100; i++)
    {
        struct StudentInfo CurrentStudent;
        scanf("%s %d %d %d", &CurrentStudent.name, &CurrentStudent.ExamPoints, &CurrentStudent.HomeworkPoints, &CurrentStudent.ExamTasksPoints );
        EvaluateCurrentStudentGrade(CurrentStudent);
    }
    return 0;
}

void EvaluateCurrentStudentGrade(struct StudentInfo CurrentStudent)
{
    int CurrentScore;
    CurrentScore = CurrentStudent.ExamPoints + CurrentStudent.HomeworkPoints + CurrentStudent.ExamTasksPoints;
    if(CurrentScore >= 75)
    {
       printf("%s\n",CurrentStudent.name);
    }
}
