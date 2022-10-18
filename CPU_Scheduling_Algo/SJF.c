// Shortest Job Fast
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i,j,n,pos,bt[20],tat[20],wt[20],temp,p[20],total=0;
    double avg_tat,avg_wt;
    
    printf("Enter the size: ");
    scanf("%d",&n);
    
    printf("Enter the Burst Time ");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]: ",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    
    for(i=0;i<n;i++)
    {
        pos = i;
        for(j=i+1;j<n;j++)
        {
            if(bt[pos]>bt[j])
            {
                pos=j;
            }
        }
            temp=bt[i];
            bt[i]=bt[pos]; // Sorting of Burst Time
            bt[pos]=temp;
            
            temp=p[i];  // Sorting process according to above B.T
            p[i]=p[pos];
            p[pos]=temp;
    }
    wt[0]=0;
    
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i] + bt[j];   
        }
  
        total = total + wt[i];
    }
//   for (i = 1; i < n; i++) // calculating waiting time
//     {
//         wt[i] = 0;
//         for (j = 0; j < i; j++)
//         {
//             wt[i] = wt[i] + bt[j];
//         }
//     }
    avg_wt=(float)total/n;      
    total=0;
    
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i] = bt[i] + wt[i];   
        total = total + tat[i];
        printf("\n P%d\t\t %d\t\t %d\t\t %d",p[i],bt[i],wt[i],tat[i]);
    }
  
    avg_tat=(float)total/n;    
    printf("\nAverage Waiting Time=%.2f",avg_wt);
    printf("\nAverage Turnaround Time=%.2fn",avg_tat);
}
