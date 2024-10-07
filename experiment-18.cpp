//Yash Nangia
//152
//EnTC b3
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int main() {
    int choice, value, i;
    
    while(1) {
        // Display the menu options
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: // Enqueue
                if(rear == MAX - 1) {
                    printf("Queue Overflow! Cannot add more elements.\n");
                } else {
                    printf("Enter the value to enqueue: ");
                    scanf("%d", &value);
                    if(front == -1) front = 0;
                    queue[++rear] = value;
                    printf("%d enqueued into the queue.\n", value);
                }
                break;

            case 2: // Dequeue
                if(front == -1 || front > rear) {
                    printf("Queue Underflow! No elements to dequeue.\n");
                } else {
                    printf("%d dequeued from the queue.\n", queue[front++]);
                    if (front > rear) { // Reset the queue when empty
                        front = rear = -1;
                    }
                }
                break;

            case 3: // Display
                if(front == -1 || front > rear) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue elements are: ");
                    for(i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Exit
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}
//Output:-
Queue Operations Menu:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter the value to enqueue: 12
12 enqueued into the queue.
