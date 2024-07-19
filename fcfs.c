
#include <stdio.h>

int main()
{
    int at[10],bt[10],ct[10],tat[10],wt[10];//={0},bt[]={0},ct[]={0},tat[]={0},wt[]={0},p_id[]={0};
    int n,i,sum=0;
   // ct[-1]=0;
    printf("\n enter the total number of processes = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter the arrival time of process_%d = ",i+1);
        scanf("%d",&at[i]);
        printf(" enter the burst  time  of process_%d = ",i+1);
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+bt[i];
       ct[i]=sum;
      // ct[i]=ct[i-1]+bt[i];
      tat[i]=ct[i]-at[i];
      wt[i]=tat[i]-bt[i];
    }
    printf("\n\n");
    printf("\t_________________________________________________________\n");
    printf("\t| p_id |   at    |  bt    |  ct   |  tat   |  wt  |\n");
    for(i=0;i<n;i++)
    {
         printf("\t_________________________________________________________\n");
        printf("\t|   %d    |  %d    |  %d    |  %d    |  %d    |  %d  |\t\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
    }
     printf("\t_________________________________________________________\n");
    
    return 0;
}

