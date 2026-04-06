#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Graph structure
struct Graph {
    int vertices;
    struct Node** adjList;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Create graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    graph->adjList = (struct Node**)malloc(vertices * sizeof(struct Node*));

    for (int i = 0; i < vertices; i++) {
        graph->adjList[i] = NULL;
    }

    return graph;
}

// CREATE → Add Edge (Sensor Communication)
void addNode(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;
}

// READ → Display Graph
void displayGraph(struct Graph* graph) {
    printf("\nSensor Communication Network:\n");
    for (int i = 0; i < graph->vertices; i++) {
        struct Node* temp = graph->adjList[i];
        printf("Sensor %d: ", i);

        while (temp) {
            printf("-> %d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

// DELETE → Remove Node
void deleteNode(struct Graph* graph, int key) {
    for (int i = 0; i < graph->vertices; i++) {
        struct Node* temp = graph->adjList[i];
        struct Node* prev = NULL;

        while (temp != NULL) {
            if (temp->data == key) {
                if (prev == NULL)
                    graph->adjList[i] = temp->next;
                else
                    prev->next = temp->next;

                free(temp);
                temp = (prev == NULL) ? graph->adjList[i] : prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
    }
    printf("Node deleted successfully\n");
}

// UPDATE → Modify Node
void updateNode(struct Graph* graph, int oldVal, int newVal) {
    for (int i = 0; i < graph->vertices; i++) {
        struct Node* temp = graph->adjList[i];

        while (temp) {
            if (temp->data == oldVal) {
                temp->data = newVal;
            }
            temp = temp->next;
        }
    }
    printf("Node updated successfully\n");
}

// SEARCH → Find Node
void searchNode(struct Graph* graph, int key) {
    int found = 0;

    for (int i = 0; i < graph->vertices; i++) {
        struct Node* temp = graph->adjList[i];

        while (temp) {
            if (temp->data == key) {
                printf("Node %d found in Sensor %d\n", key, i);
                found = 1;
            }
            temp = temp->next;
        }
    }

    if (!found)
        printf("Node not found\n");
}

// MAIN FUNCTION (Menu Driven)
int main() {
    int vertices, choice;
    int src, dest, val, newVal;

    printf("Enter number of sensors: ");
    scanf("%d", &vertices);

    struct Graph* graph = createGraph(vertices);

    while (1) {
        printf("\n===== Robotics Control Menu =====\n");
        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Update Node\n");
        printf("4. Search\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

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
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
