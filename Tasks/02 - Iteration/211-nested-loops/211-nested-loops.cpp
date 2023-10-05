#include <stdio.h>
#include <iostream>

using namespace std;
int timetables();


int main()
{
    int timetables();

    cout << timetables();
}


int task211()
{
    // Outer loop 
    for (int i = 1; i <= 2; i++)        // Outer loop executes twice
    {
        printf("Outer loop %d\n", i);


        // Inner loop
        for (int j = 1; j <= 5; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("Inner loop %d\n", j);
            printf("\t\ti,j,k\n");
            printf("\t\t-----\n");// note the use of the tab (\t) option at the start to improve the layout

            //Task - Write another level of nesting here
            for (int k = 1; k <= 3; k++)
            {
                printf("\t\t%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}

int timetables()
{
    for (int i = 1; i <= 12; i++)
    {
        printf("(%d)\n", i);


        for (int j = 1; j <= 12; j++)
        {
            int result = i * j;
            printf("\t%d * %d = %d\n", i, j, result);
        
        }

    }
    return 0;
}