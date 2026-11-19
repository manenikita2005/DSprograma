#include <stdio.h>
#include <string.h>
struct Student
{
  char prn[20];
  char name[20];
  int marks;
  float cgpa;
};
int main()
{
  struct Student s[3] = {
      {"26PMC002","Nikita",560,8.1},
      {"26PMC0035","Neha",350,5.2},
      {"26PMC0069","Janhavi",700,9.2}
};
int i;
float sum = 0,avg;
printf("\nStudent Details:\n");
for(i=0; i<3; i++)
{
   printf("\nPRN: %s", s[i].prn);
   printf("\nName: %s", s[i].name);
   printf("\nMarks: %d", s[i].marks);
   printf("\nCGPA: %.1f\n", s[i].cgpa);
sum = sum + s[i].cgpa;
}
printf("\nCGPA More Than 7:\n"):
  for(i=0; i<3; i++)
{
  if(s[i].cgpa>7.0)
      printf
