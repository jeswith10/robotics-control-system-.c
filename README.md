# 🤖 Robotics Control System

---

## 📌 Project Title

**Robotics Control System using Sensor Communication Graph (DSA in C)**

---

## 👥 Team Members

* Member 1 Jeswith venkata sai . p CDS/2025/1819
* Member 2 Lakshman . m CDS/2025/1787

---

## ❗ Problem Statement

To develop a robotics control system that models sensor communication using a graph data structure and allows dynamic management of the system through CRUD operations (Create, Read, Update, Delete) using a menu-driven C program.

---

## 🧠 Data Structure Used

* **Graph (Adjacency List Representation)**

  * Nodes represent sensors
  * Edges represent communication links
* **Linked List**

  * Used to store adjacency lists
* **Dynamic Memory Allocation**

  * `malloc()` and `free()` used for memory management

---

## ⚙️ Algorithm Explanation

### 1. Graph Representation

* The system uses an adjacency list to store sensor connections
* Each sensor maintains a list of connected sensors

### 2. CRUD Operations

* **Create (Add Node/Edge):** Add communication link between sensors
* **Read (Display):** Show all sensor connections
* **Update:** Modify existing sensor connection values
* **Delete:** Remove a sensor connection

### 3. Search Operation

* Traverse adjacency list to find a specific sensor node

### 4. Working Principle

1. User selects an option from the menu
2. System performs the requested graph operation
3. Updates are reflected dynamically

---

## ▶️ Compilation Instructions

### Using GCC Compiler:

```bash id="cmdrun1"
gcc robot.c -o robot
./robot
```

---

## 📊 Sample Output

Enter number of sensors: 4

===== Robotics Control Menu =====
1. Add Node
2. Delete Node
3. Update Node
4. Search
5. Display
6. Exit
Enter your choice: 1
Enter source and destination: 0 1

Enter your choice: 1
Enter source and destination: 0 2

Enter your choice: 1
Enter source and destination: 1 3

Enter your choice: 1
Enter source and destination: 2 3

Enter your choice: 5

Sensor Communication Network:
Sensor 0: -> 2 -> 1 
Sensor 1: -> 3 
Sensor 2: -> 3 
Sensor 3: 

Enter your choice: 4
Enter node to search: 3
Node 3 found in Sensor 1
Node 3 found in Sensor 2

Enter your choice: 3
Enter old value and new value: 3 5
Node updated successfully

Enter your choice: 5

Sensor Communication Network:
Sensor 0: -> 2 -> 1 
Sensor 1: -> 5 
Sensor 2: -> 5 
Sensor 3: 

Enter your choice: 2
Enter node to delete: 5
Node deleted successfully

Enter your choice: 5

Sensor Communication Network:
Sensor 0: -> 2 -> 1 
Sensor 1: 
Sensor 2: 
Sensor 3: 

Enter your choice: 6
Exiting program...

<img width="351" height="273" alt="Screenshot 2026-04-30 094733" src="https://github.com/user-attachments/assets/18464f45-a0fc-4198-9327-042a2b6388ec" />


## 🎥 Demo Video Link

👉 https://example.com/robotics-demo

*(Replace with your actual demo video link before submission)*

---
