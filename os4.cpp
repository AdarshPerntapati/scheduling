#include<stdio.h>
int main()
{
	int n,i,t=0,flag=0;
	printf("\n Enter number of process");
	scanf("%d",&n);
	int bt[n],at[n],tq=6,tq1=10,p[n],avgtat=0,avgwt=0,a[n],b=n;
	for(i=0;i<n;i++){
		p[i]=i;
		printf("\nEnter Arrival Time of p[%d] process",i+1);
		scanf("%d",&at[i]);
		printf("Enter Burst Time of p[%d] process",i+1);
		scanf("%d",&bt[i]);
		a[i]=bt[i];
	}
	printf("\nProcess\t|Turnaround Time|Waiting Time\n");
	while(b!=0)
	{
		//printf("interrupting the processor after every 6 units of time\n");
		if(a[i]<=tq&&a[i]>0)
		{
			t=t+a[i];
			a[i]=0;
			flag=1;
		}
		else if(a[i]>0)
		{
		a[i]-=tq;
		t=t+tq;
		}
		if(a[i]==0&&flag==1)
		{
		b--;
		printf("P[%d]\t\t|\t\t%d\t|\t\t%d\n",i+1,t-at[i],t-at[i]-bt[i]);
		avgwt+=t-at[i]-bt[i];
		avgtat+=t-at[i];
		flag=0;
		}
		if(b==n-1)
		b=0;
		else if(at[b+1]<=t)
		b++;
		else
		b=0;}
	
	//printf("\nProcess\t|Turnaround Time|Waiting Time\n");
	while(b!=0)
	{
		//printf("interrupting the processor after every 10 units of time\n");
		if(a[i]<=tq&&a[i]>0)
		{
			t=t+a[i];
			a[i]=0;
			flag=1;
		}
		else if(a[i]>0)
		{
		a[i]-=tq;
		t=t+tq;
		}
		if(a[i]==0&&flag==1)
		{
		b--;
		printf("P[%d]\t\t|\t\t%d\t|\t\t%d\n",i+1,t-at[i],t-at[i]-bt[i]);
		avgwt+=t-at[i]-bt[i];
		avgtat+=t-at[i];
		flag=0;
		}
		if(b==n-1)
		b=0;
		else if(at[b+1]<=t)
		b++;
		else
		b=0;}
	
printf("\nAverage Waiting Time= %f\n",avgwt*1.0/n);
printf("Avg Turnaround Time = %f",avgtat*1.0/n);
}

