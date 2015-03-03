#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define RL_LEN 10

#define K 2
#define M 3


typedef struct node
{
     int number;
     struct node *next;
     bool is_out;
} Node;


Node* initialize_ring_list(int n)
{
    Node *head_ptr = NULL;
    Node *current_ptr = NULL;
    Node *temp_ptr = NULL;

    for (int i = 0; i < n; ++i)
    {
        if(head_ptr == NULL)
        {
            head_ptr = (Node *)malloc(sizeof(Node));
            head_ptr->next = NULL;
            head_ptr->number = i;
            head_ptr->is_out = false;
            current_ptr = head_ptr;
        }
        else
        {
            temp_ptr = (Node *)malloc(sizeof(Node));
            current_ptr->next = temp_ptr;
            current_ptr = temp_ptr;
            current_ptr->number = i;
            current_ptr->is_out = false;
            if(i == 9)
                current_ptr->next = head_ptr;
            else
                current_ptr->next = NULL;
        }
    }
    return head_ptr;
}


int main(int argc, char const *argv[])
{
    Node *ring_list;

    ring_list = initialize_ring_list(RL_LEN);

    // Node *start_ptr = ring_list;

    // for (int i = 0; i < K-1; ++i)
    //     // printf("%d\n", i);
    //     start_ptr = start_ptr->next;

    // int total_count = RL_LEN;
    
    // int count = 1;

    // while(total_count != 1)
    // {

    //     if(start_ptr->is_out == true)
    //         start_ptr = start_ptr->next;
    //     else if (count == M)
    //     {
    //         start_ptr->is_out = true;
    //         count = 1;
    //         // printf("%d\n", (start_ptr->number)+1);
    //         start_ptr = start_ptr->next;
    //         total_count--;
    //     }
    //     else
    //     {
    //         count++;
    //         start_ptr = start_ptr->next;
    //     }
    // }

    for (int i = 0; i < 30; ++i)
    {
        printf("%d\n", ring_list->number);
        ring_list = ring_list->next;
        /* code */
    }
    
    return 0;
}