#include <stdio.h>

struct Student
{
    char name[20];
    int Rollno;
    float marks;
};

int main(){
   struct Student s1[5];
   for(int i=0;i<5;i++){
    printf("Enter Your Name");
    scanf("%s:",s1[i].name);
      printf("Enter Your Rollno");
    scanf("%d:",s1[i].Rollno);
      printf("Enter Your Marks");
          scanf("%f:",s1[i].marks);
   }
   return 0;
}