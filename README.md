The main theme of this program to show the CPU scheduling. At First in this program it is going to collect the information (i.e., Process Name; Arrival time of process and Burst time of the process) from the user and stores respectively. Now it will check the condition that which process has entered first (least value of arrival time) according to the burst time it will execute for the first 6 units of time (give that the process should interruption for 6 units of time at first). It will check the burst time again and execute again until 10 units of time (as mentioned in the question). And then it is going to check the burst time to perform the last function i.e., shortest Job First (according to the question needs more time to complete than the other processes to go in the terminated state).
Shortest Job First:
This scheduling algorithm favours processes with the shortest expected execution time. As each process becomes ready, it joins the ready queue. A different approach to CPU scheduling is the shortest-job-first (SJF) scheduling algorithm. This algorithm associates with each process the length of the latter's next CPU burst. When the CPU is available, it is assigned to the process that has the smallest next CPU burst. If two processes have the same length next CPU burst, FCFS scheduling is used to break the tie (to choose one). Note that a more appropriate term would be the shortest next CPU burst, because the scheduling is done by examining the length of the next CPU burst of a process, rather than its total length. We use the term SJF because most people and textbooks refer to this type of scheduling discipline as SJF.
After the function the final output of the program is Average Waiting Time of the processes and average Turn Around Time of the processes.
