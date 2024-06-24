#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[20];
    int maths, eng, sci;
    int total;
    int per;
};
int main()
{
    struct student st1[3];
    int i;

    for (i = 1; i <= 3; i++)
    {

        printf("Roll no:%d\n", st1[i].rollno = i);
        printf("Enter a student name:");
        strcpy(st1[i].name, "Student");
        scanf("%s", st1[i].name);
        printf("Enter a maths marks:");
        scanf("%d", &st1[i].maths);
        printf("Enter a english marks:");
        scanf("%d", &st1[i].eng);
        printf("Enter a science marks:");
        scanf("%d", &st1[i].sci);
        st1[i].total = st1[i].maths + st1[i].eng + st1[i].sci;
        printf("total:%d\n", st1[i].total);
        st1[i].per = st1[i].total * 100 / 300;
        printf("persantage:%d\n", st1[i].per);
    }
}