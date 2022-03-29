#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char title[40];
    float hours;
} course;

void update_course(course *class);
void display_course(course *class);
int main()
{
    course cs2;
    cs2.id = 101;
    strcpy(cs2.title, "C++ Source");
    cs2.hours = 24;
    update_course(&cs2);
    display_course(&cs2);

    return 0;
}

void update_course(course *class)
{
    printf("Enter the updated ID of your course::");
    scanf("%d", &class->id);
    printf("Enter the updated name of course::");
    scanf("%s", &class->title);
    printf("Enter the updated hours of course::");
    scanf("%f", &class->hours);
}

void display_course(course *class)
{
    printf("%d\n", class->id);
    printf("%s\n", class->title);
    printf("%.1f\n", class->hours);
}