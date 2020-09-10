#define LINKED_H_INCLUDED

typedef struct process
{
int pro_id;
int pro_burst;
int pro_piorty;
int waiting_time;
int average_waiting_time;
struct process *next;
}Process;

typedef struct
{
    Process *head;
    int size;
}       list;



void createlist(list *pl);
void inserList(list *pl,int id,int burst,int piorty);
void traverse (list *pl,void (*display) (int id,int burst,int waiting_time));

