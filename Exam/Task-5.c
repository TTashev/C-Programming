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
