#include "queue.h"
#include <stdlib.h>

void createlist(list *pl)
{
   pl->head=NULL;
 pl->size=0;

}

void inserList(list *pl,int id,int burst,int piorty)
{
     Process *p,*q;
   p = (Process *)malloc(sizeof(Process));

    p->pro_id = id;
    p->pro_burst=burst;
    p->pro_piorty=piorty;


if (pl->size==0 || piorty < pl->head->pro_piorty)
            {

           p->next = pl->head;
           pl->head=p;
           }
            else
                {
    q =pl->head;
    while (q->next != NULL && q->next->pro_piorty <= piorty)
        {
 q=q->next;
 }
    p->next=q->next;

    q->next = p;


        }
    pl->size++;
    }
   void time(list *pl,int no)
   {
int i;
   Process *q,*p;
   q=pl->head;
 p=pl->head;
 q->waiting_time = 0;
   for (i=1;i<no;i++ )
    {
      q=q->next;
    q->waiting_time =p->waiting_time+p->pro_burst;

        p = p->next;
    }
   }
void grantt_chart (list *pl,int no)
{
     Process *q,*p;
    int i,x;
    q=pl->head;
    p=pl->head;
printf("-------------------------------------------------------------\n");

while (p){

printf("|  P%d |\t",p->pro_id);
p=p->next;
}
printf("\n-----------------------------------------------------------\n");
  p=pl->head;

 q->waiting_time = 0;
 printf("%d  ",q->waiting_time);
   for (i=1;i<no;i++ )
    {
      q=q->next;
    q->waiting_time =p->waiting_time+p->pro_burst;
printf(" \t%d ",q->waiting_time);
        p = p->next;
    }

x=q->waiting_time += q->pro_burst;
printf("\t%d\n",x);
   }



void traverse (list *pl,void (*display) (int id,int burst,int waiting_time))
{
    Process *p=pl->head;
    while (p)
        {
        (*display)(p->pro_id,p->pro_burst,p->waiting_time);
        p=p->next;
        }


        }
        void average_time(list *pl,int no)
        {

        int i,sum=0;

   Process *q,*p;
   q=pl->head;
 p=pl->head;

 q->waiting_time =0;
   for (i=1;i<no;i++ )
    {
        q = q->next;
    q->waiting_time =p->waiting_time+p->pro_burst;
         sum+=q->waiting_time;

        p = p->next;


}
printf("\n average time is %d  milliseconds.",sum/no);

        }


