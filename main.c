#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void display (int id,int burst,int waiting_time)
{
printf("\n p%d \n",id);
printf("--------------------------------------------\n");
printf("\n burst_time    = %d\t",burst);
printf("\n waiting_time    = %d\t",waiting_time);

}
int main()
{
    list l;
    createlist(&l);
    int i,no_process,burst_time,piorty,process_id;
    printf("please enter no of process: ");
    scanf("%d",&no_process);
    for(i=0;i<no_process;i++)
    {
printf("enter process %d id :",(i+1));
    scanf("%d",&process_id);
    printf("enter process %d burst time :",(i+1));
    scanf("%d",&burst_time);
    printf("enter process %d piorty :",(i+1));
    scanf("%d",&piorty);
    printf("----------------------------\n");
    inserList(&l,process_id,burst_time,piorty);
    }

    grantt_chart(&l,no_process);

time(&l,no_process);
traverse(&l,display);
average_time(&l,no_process);
    return 0;
}
