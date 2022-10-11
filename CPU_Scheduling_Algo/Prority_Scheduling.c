// Prority Scheduling

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

typedef struct Prority_Scheduling
{
    int exetime;
    int prority;
    char pid[N];
} prs;

int main()
{
    prs p[10];
    int n, wtime = 0, TAT, Total_WT = 0;
    int i, j, temp;
    char t[13];
    float avgwt;

    printf("Enter number of process: ");
    scanf("%d", &n);

    printf("Enter the following: \n");
    for (i = 0; i < n; i++)
    {
        printf("PID: ");
        scanf("%s", p[i].pid);
        printf("Burst Time:  ");
        scanf("%d", &p[i].exetime);
        printf("Prority:  ");
        scanf("%d", &p[i].prority);
    }
    printf("\nPID\t\tBURST TIME\tPrority\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%d\n", p[i].pid, p[i].exetime, p[i].prority);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (p[j].prority > p[j + 1].prority)
            {
                temp = p[j].prority;
                p[j].prority = p[j + 1].prority;
                p[j + 1].prority = temp;

                strcpy(t, p[j].pid);
                strcpy(p[j].pid, p[j + 1].pid);
                strcpy(p[j + 1].pid, t);

                temp = p[j].exetime;
                p[j].exetime = p[j + 1].exetime;
                p[j + 1].exetime = temp;
            }
        }
    }
    printf("\nPID\t\tBURST TIME\tPrority\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%d\n", p[i].pid, p[i].exetime, p[i].prority);
    }
    printf("\n Wait Time\t\tBURST(EXE) TIME\tTURN AROUND TIME\n");
    for (i = 0; i < n; i++)
    {
        TAT = p[i].exetime + wtime; // TAT = BT + WT
        printf("%s\t\t%d\t\t%d\t\t%d\n", p[i].pid, wtime, p[i].exetime, p[i].prority);
        Total_WT = Total_WT + wtime;
        wtime = wtime + p[i].exetime;
    }
    avgwt = (float)Total_WT / n;
    printf("Total Waiting Time: %d\n", Total_WT);
    printf("Average Waiting Time: %.2f msec\n", avgwt);

    return 0;
}