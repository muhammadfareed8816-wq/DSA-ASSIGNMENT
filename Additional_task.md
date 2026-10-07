# DSA Assignment - Additional Tasks & Questions

## Q1. Stack (Additional Tasks)

### 1. Time Complexity and Space Complexity:
* **PUSH()**:
  - Time Complexity: O(1)
  - Space Complexity: O(1)
* **POP()**:
  - Time Complexity: O(1)
  - Space Complexity: O(1)
* **PEEK()**:
  - Time Complexity: O(1)
  - Space Complexity: O(1)
* **DISPLAY()**:
  - Time Complexity: O(n)
  - Space Complexity: O(1)
* **Overall Space Complexity of Stack**: O(MAX)

### 2. What happens when the stack size exceeds MAX?
* When the number of elements reaches `MAX` and an attempt is made to insert another element, a **Stack Overflow** condition occurs.
* In this condition, the new element cannot be inserted, and an overflow error message is displayed to prevent invalid memory operations.

---

## Q2. Circular Queue (Additional Tasks)

### 1. Why a circular queue provides better memory utilization than a linear queue?
* In a linear queue, once elements are dequeued from the front, those slots remain unused even if there is free space, because insertions always occur at the rear. Once the rear reaches the end, no new elements can be added.
* A circular queue wraps around using modulo arithmetic `(rear + 1) % SIZE`, allowing vacated front spaces to be reused efficiently without memory wastage.

### 2. Time Complexity of ENQUEUE and DEQUEUE:
* **Circular Queue**:
  - ENQUEUE: O(1)
  - DEQUEUE: O(1)
* **Linear Queue**:
  - ENQUEUE: O(1)
  - DEQUEUE: O(1)

### 3. Space Complexity:
* **Space Complexity**: O(SIZE) (due to array allocation).

### 4. What problem occurs in a linear queue when rear reaches the end?
* It leads to the **False Overflow** (or False Full) problem.
* Even if previous elements have been deleted and there is free space available at the beginning of the array, new elements cannot be enqueued because the `rear` index has reached the maximum capacity limit.
