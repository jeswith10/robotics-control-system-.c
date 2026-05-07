# 🤖 Robotics Control System

---

## 📌 Project Title

**Robotics Control System using Sensor Communication Graph (DSA in C)**

---

## 👥 Team Members
* 1.JESWITH VENKATA SAI.P (CDS/2025/1819)
* 2.LAKSHMAN.M (CDS/2025/1787)
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

Enter number of sensors: 5

===== Robotics Control Menu =====
1. Add Node
2. Delete Node
3. Update Node
4. Search Node
5. Display Graph
6. Exit
Enter your choice: 1
Enter source and destination: 0 1
Connection added successfully

Enter your choice: 1
Enter source and destination: 0 2
Connection added successfully

Enter your choice: 1
Enter source and destination: 1 3
Connection added successfully

Enter your choice: 1
Enter source and destination: 3 4
Connection added successfully

Enter your choice: 5

===== Sensor Communication Network =====
Sensor 0: -> 2 -> 1 
Sensor 1: -> 3 
Sensor 2: 
Sensor 3: -> 4 
Sensor 4: 

Enter your choice: 4
Enter node to search: 3
Node 3 found in Sensor 1

Enter your choice: 3
Enter old value and new value: 3 5
Node updated successfully

Enter your choice: 5

===== Sensor Communication Network =====
Sensor 0: -> 2 -> 1 
Sensor 1: -> 5 
Sensor 2: 
Sensor 3: -> 4 
Sensor 4: 

Enter your choice: 2
Enter node to delete: 2
Node deleted successfully

Enter your choice: 5

===== Sensor Communication Network =====
Sensor 0: -> 1 
Sensor 1: -> 5 
Sensor 2: 
Sensor 3: -> 4 
Sensor 4: 

Enter your choice: 6
Exiting program...
<img width="351" height="273" alt="Screenshot 2026-04-30 094733" src="https://github.com/user-attachments/assets/18464f45-a0fc-4198-9327-042a2b6388ec" />
<img width="415" height="240" alt="Screenshot 2026-04-30 094757" src="https://github.com/user-attachments/assets/bb10bbb4-e58d-41b6-8929-b5aa45298cbd" />
<img width="440" height="248" alt="Screenshot 2026-04-30 094823" src="https://github.com/user-attachments/assets/b636f1ac-62d9-41bd-b6e2-a5acc0bdfa96" />
<img width="492" height="354" alt="Screenshot 2026-04-30 094845" src="https://github.com/user-attachments/assets/11e822d0-e294-4062-860b-7d5160031d78" />
<img width="414" height="246" alt="Screenshot 2026-04-30 094855" src="https://github.com/user-attachments/assets/8a0acaca-313d-46d2-88ed-b1102d4b9648" />
<img width="431" height="232" alt="Screenshot 2026-04-30 094905" src="https://github.com/user-attachments/assets/8e8feebe-7604-45ff-b3b3-2c77f43649a4" />
<img width="375" height="251" alt="Screenshot 2026-04-30 094941" src="https://github.com/user-attachments/assets/889f9a01-8d55-40bc-a698-13fe39ff52b0" />
<img width="407" height="211" alt="Screenshot 2026-04-30 094952" src="https://github.com/user-attachments/assets/75fe8dbf-9692-4232-a5d5-fc829a97b136" />


## 🎥 Demo Video Link
https://drive.google.com/file/d/1pPUmPJTx_-NaxHq56GkVOF-O8IxrSqQF/view?usp=drive_link

https://drive.google.com/file/d/1ewsNdtI7X-JibiDjsKGLG8FhofPVTMTk/view?usp=drive_link
---
