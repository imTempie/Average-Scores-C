#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float total = 0;
    int numbers = get_int("How many scores do you want to average: ");

    for (int i = 0; i < numbers; i++)
    {
        float score = get_float("Enter a score:  ");
        total += score;
    }

    float average = (total) / numbers;
    printf("Average:  %f\n", average);
}
