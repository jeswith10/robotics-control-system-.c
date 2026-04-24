#include <stdio.h>
#include <stdlib.h>

/* =========================================================
   NODE STRUCTURE
   ========================================================= */
struct Node
{
    int data;
    struct Node* next;
};

/* =========================================================
   GRAPH STRUCTURE
   ========================================================= */
struct Graph
{
    int vertices;
    struct Node** adjList;
};

/* =========================================================
   CREATE NODE
   ========================================================= */
struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

/* =========================================================
   CREATE GRAPH
   ========================================================= */
struct Graph* createGraph(int vertices)
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    if (graph == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    graph->vertices = vertices;

    graph->adjList = (struct Node**)malloc(vertices * sizeof(struct Node*));

    if (graph->adjList == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < vertices; i++)
    {
        graph->adjList[i] = NULL;
    }

    return graph;
}

/* =========================================================
   ADD NODE (EDGE)
   ========================================================= */
void addNode(struct Graph* graph, int src, int dest)
{
    if (src >= graph->vertices || dest >= graph->vertices)
    {
        printf("Invalid sensor index!\n");
        return;
    }

    struct Node* newNode = createNode(dest);

    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    printf("Connection added successfully\n");
}

/* =========================================================
   DISPLAY GRAPH
   ========================================================= */
void displayGraph(struct Graph* graph)
{
    printf("\n===== Sensor Communication Network =====\n");

    for (int i = 0; i < graph->vertices; i++)
    {
        struct Node* temp = graph->adjList[i];

        printf("Sensor %d: ", i);

        while (temp != NULL)
        {
            printf("-> %d ", temp->data);
            temp = temp->next;
        }

        printf("\n");
    }
}

/* =========================================================
   DELETE NODE
   ========================================================= */
void deleteNode(struct Graph* graph, int key)
{
    int deleted = 0;

    for (int i = 0; i < graph->vertices; i++)
    {
        struct Node* temp = graph->adjList[i];
        struct Node* prev = NULL;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                if (prev == NULL)
                {
                    graph->adjList[i] = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }

                free(temp);

                deleted = 1;

                if (prev == NULL)
                    temp = graph->adjList[i];
                else
                    temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
    }

    if (deleted)
        printf("Node deleted successfully\n");
    else
        printf("Node not found\n");
}

/* =========================================================
   UPDATE NODE
   ========================================================= */
void updateNode(struct Graph* graph, int oldVal, int newVal)
{
    int updated = 0;

    for (int i = 0; i < graph->vertices; i++)
    {
        struct Node* temp = graph->adjList[i];

        while (temp != NULL)
        {
            if (temp->data == oldVal)
            {
                temp->data = newVal;
                updated = 1;
            }

            temp = temp->next;
        }
    }

    if (updated)
        printf("Node updated successfully\n");
    else
        printf("Old value not found\n");
}

/* =========================================================
   SEARCH NODE
   ========================================================= */
void searchNode(struct Graph* graph, int key)
{
    int found = 0;

    for (int i = 0; i < graph->vertices; i++)
    {
        struct Node* temp = graph->adjList[i];

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                printf("Node %d found in Sensor %d\n", key, i);
                found = 1;
            }

            temp = temp->next;
        }
    }

    if (!found)
    {
        printf("Node not found\n");
    }
}

/* =========================================================
   FREE MEMORY
   ========================================================= */
void freeGraph(struct Graph* graph)
{
    for (int i = 0; i < graph->vertices; i++)
    {
        struct Node* temp = graph->adjList[i];

        while (temp != NULL)
        {
            struct Node* next = temp->next;
            free(temp);
            temp = next;
        }
    }

    free(graph->adjList);
    free(graph);
}

/* =========================================================
   MAIN FUNCTION
   ========================================================= */
int main()
{
    int vertices;
    int choice;

    int src, dest;
    int val, newVal;

    printf("Enter number of sensors: ");
    scanf("%d", &vertices);

    struct Graph* graph = createGraph(vertices);

    while (1)
    {
        printf("\n===== Robotics Control Menu =====\n");

        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Update Node\n");
        printf("4. Search Node\n");
        printf("5. Display Graph\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter source and destination: ");
                scanf("%d %d", &src, &dest);
                addNode(graph, src, dest);
                break;

            case 2:
                printf("Enter node to delete: ");
                scanf("%d", &val);
                deleteNode(graph, val);
                break;

            case 3:
                printf("Enter old value and new value: ");
                scanf("%d %d", &val, &newVal);
                updateNode(graph, val, newVal);
                break;

            case 4:
                printf("Enter node to search: ");
                scanf("%d", &val);
                searchNode(graph, val);
                break;

            case 5:
                displayGraph(graph);
                break;

            case 6:
                printf("Exiting program...\n");
                freeGraph(graph);
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
