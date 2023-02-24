#include<stdio.h>

struct node {
    char usn[10], name[10], dept[10], phone[10];
    int salary;
    struct node* rlink;
    struct node* llink;
};

typedef struct node* NODE;

NODE head=NULL, tail=NULL, temp;

void insertFront();
NODE getnode();
void create();
void deleteFront();
void displayCount();

void main() {
    int choice;
    while(1) {
        printf("\nEnter\n1. Insert nodes to the dll\n2. Delete node from the dll\n3. Display dll\n4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:insertFront();
            break;
            case 2:deleteFront();
            break;
            case 3: displayCount();
            break;
            case 4:exit(0);
            break;
            default: printf("Invalid Choice!!");
        }

    }
}
 
void insertFront() {
    printf("Insert the details of the Student");
    create();
    
}

void create() {
    int n,i;
    printf("Enter the number of Students :");
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        printf("Enter the details of the %d Students ",i++);
        read();
        if(head == NULL)  {
            head = tail = temp;
        }else  {
            tail->rlink = temp;
            temp->llink= tail;
            tail = temp;
        }
        }
    }


void read() {
    temp = getnode();
    temp->rlink=temp->llink = NULL;
    printf("Enter the usn :");
        scanf("%s",&temp->usn);
         printf("Enter Student Name :");
        scanf("%s",&temp->name);
         printf("Enter the Branch :");
        scanf("%s",&temp->dept);
         printf("Enter the Phone Number :");
        scanf("%s",&temp->phone);
         printf("Enter the Salary :");
        scanf("%d",&temp->salary);
}

NODE getnode() {
    NODE x = (NODE)malloc(sizeof(struct node));
    return x;
}