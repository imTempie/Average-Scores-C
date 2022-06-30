#include <stdio.h>

int main(void)
{
  float total = 0;
  float score;
  int numbers;
  printf("How many scores do you want to average: ");
  scanf("%i", &numbers);
  
  for (int i = 0; i < numbers; i++)
  {
    printf("Enter a score:  ");
    scanf("%f", &score);
    total += score;
  }

  float average = (total) / numbers;
  printf("Average:  %f\n", average);
}
