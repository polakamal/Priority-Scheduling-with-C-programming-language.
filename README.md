# Priority-Scheduling-with-C-programming-language.
implement one of the scheduling algorithms with C programming language <br />
we implemneted the linked queue and linked list data structure to solve and implement the scheduling algorithm.<br />
• Number of processes should be user defined (i.e. user enters number of processes at run time).<br />
• All process data (i.e. process arrival time, burst time and quantum time) must be user defined.<br />
• Waiting Time for each process calculated.<br />
• Average Waiting Time calculated.<br />
• Program  display (Print) the simulated Gantt Chart.<br />
• The process  have the following fields: process_ID and burst_time.<br />
Priority Scheduling: SJF is a simple priority algorithm, where we are not considering the smallest next CPU burst, scheduler consider the priority of processes. The priority assigned to each process and CPU allocated to highest priority process. Equal priority processes scheduled in FCFS order.
Priority can be discussed regarding Lower and higher priority. Numbers denote it. We can use 0 for lower priority as well as more top priority. There is not a hard and fast rule to assign numbers to preferences.
Now in this example, we are using low numbers to represent higher priority.<br />
Process CPU Burst Priority <br />
P1       10          4 <br />
P2       4           1 <br />
P3       6           3 <br />
P4       5           2 <br />
Average waiting time= (0+4+9+15) /4=28/4=7
Average time is 7 milliseconds
