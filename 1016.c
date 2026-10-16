#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    if (head == NULL || second == NULL)
    {
        printf("記憶體配置失敗\n");
        return 1;
    }

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    printf("First Node : %d\n", head->data);
    printf("Second Node: %d\n", head->next->data);

    free(head);
    free(second);

    return 0;
}