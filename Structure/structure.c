#include <stdio.h>
struct student
{
    char name[20];
    int age;
    float score;
};
int main()
{
    struct student s1 = {"Midhun", 20, 94.5};
    struct student s2 = {"Bob", 22, 90.0};

    printf("Student 1: Name: %s, Age: %d, Score: %.2f\n", s1.name, s1.age, s1.score);
    printf("Student 2: Name: %s, Age: %d, Score: %.2f\n", s2.name, s2.age, s2.score);

    return 0;
}