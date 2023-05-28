/*
Date: 28th May 2023
Problem of the day: Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.
solution is given below:
(language:c++)
*/
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *temp1 = head;
           Node *temp2 = head; 
           
           int count = 0;
           
           while(temp1) {
                temp1 = temp1 -> next;
                count++;
                if(count > n)
                    temp2 = temp2 -> next;
           }
           
           if(count < n) {
               return -1;
           }
           
           return temp2->data; 
    }
};

