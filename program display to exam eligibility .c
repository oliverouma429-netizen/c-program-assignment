//simple display of exams eligibility 
/*
Name: Oliver Ouma 
Reg No:CT101/G/29075/25
Description Exam eligibility display program 
*/
#include<stdio.h>
  int main(){
  int attendances;
  int average_mark;

  printf("Enter the percentage attendances:");
  scanf("%d",& attendances);

  printf("Enter the average marks:");
  scanf("%d",&average_mark);

if (attendances>=75&&average_mark>=48)
{
  printf("Legible to do exams");
}
else{
  printf("Not legible");
}
return 0;
    
}