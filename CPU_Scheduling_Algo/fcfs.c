// First Come First Serve in C without using Arrival Time=0
#include <stdio.h>
#include <stdlib.h>
#define S 20
int main()
{
    int n, i, j, bt[S], wt[S], tat[S];
    double awt = 0, atat = 0;

    printf("Enter number of process: ");
    scanf("%d", &n);

    printf("Enter the Burst Time: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }

    wt[0] = 0; // Waiting time for 1st process is 0 always

    for (i = 1; i < n; i++) // calculating waiting time
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

    for (i = 0; i < n; i++) // calculating turnaround time
    {
        tat[i] = bt[i] + wt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i], tat[i]);
    }

    awt = awt / i;
    atat = atat / i;
    printf("\n\nAverage Waiting Time: %.2f", awt);
    printf("\nAverage Turnaround Time: %.2f\n", atat);

    return 0;
}