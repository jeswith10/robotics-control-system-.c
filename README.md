# 🤖 Robotics Control System

---

## 📌 Project Title

**Robotics Control System using Sensor Communication Graph (DSA in C)**

---

## 👥 Team Members

* Jeswith
* Venkata Sai
* Lakshman

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

```id="sample1"
Enter number of sensors: 3

===== Robotics Control Menu =====
1. Add Node
2. Delete Node
3. Update Node
4. Search
5. Display
6. Exit

Enter your choice: 1
Enter source and destination: 0 1

Enter your choice: 5

Sensor Communication Network:
Sensor 0 -> 1
Sensor 1 ->
Sensor 2 ->
```

---

## 🎥 Demo Video Link

👉 https://example.com/robotics-demo

*(Replace with your actual demo video link before submission)*

---
