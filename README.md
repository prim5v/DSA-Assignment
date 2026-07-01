# Queue Implementation in C (Array-Based)

## Overview

This project demonstrates the implementation of a **Queue** using an array in the C programming language. A queue is a linear data structure that follows the **FIFO (First In, First Out)** principle, meaning the first element inserted is the first one removed.

The program supports basic queue operations such as inserting elements (enqueue), removing elements (dequeue), checking whether the queue is full, and checking whether it is empty.

---

## Features

* Queue implementation using an array
* Fixed queue size
* Enqueue operation
* Dequeue operation
* Queue full detection
* Queue empty detection
* Console messages showing each operation

---

## Queue Operations

### Enqueue

Adds a new element to the rear (back) of the queue.

**Algorithm:**

1. Check if the queue is full.
2. If the queue is empty, initialize the `front` index.
3. Increment the `rear` index.
4. Insert the new element.

---

### Dequeue

Removes the element at the front of the queue.

**Algorithm:**

1. Check if the queue is empty.
2. Store the front element.
3. Increment the `front` index.
4. If all elements have been removed, reset both `front` and `rear` to `-1`.

---

### isFull()

Checks whether the queue has reached its maximum capacity.

Returns:

* `1` if the queue is full.
* `0` otherwise.

---

### isEmpty()

Checks whether the queue contains any elements.

Returns:

* `1` if the queue is empty.
* `0` otherwise.

---

## Program Flow

1. Create an empty queue.
2. Insert five integers into the queue.
3. Attempt to insert a sixth integer (operation fails because the queue is full).
4. Remove all elements one by one.
5. Attempt to remove another element (operation fails because the queue is empty).

---

## Sample Output

```text
10 has been Queued!!
20 has been Queued!!
30 has been Queued!!
40 has been Queued!!
50 has been Queued!!
The Q is full!!

10 has been Dequeued!!
20 has been Dequeued!!
30 has been Dequeued!!
40 has been Dequeued!!
50 has been Dequeued!!
The Q is empty!!
```

---

## Data Structure Illustration

Initial State

```text
Front = -1
Rear  = -1
Queue = [ ]
```

After Enqueue Operations

```text
Front = 0
Rear  = 4

+----+----+----+----+----+
|10  |20  |30  |40  |50  |
+----+----+----+----+----+
```

After All Dequeue Operations

```text
Front = -1
Rear  = -1
Queue = [ ]
```

---

## Time Complexity

| Operation | Time Complexity |
| --------- | --------------- |
| Enqueue   | O(1)            |
| Dequeue   | O(1)            |
| isFull    | O(1)            |
| isEmpty   | O(1)            |

---

## Limitations

This project implements a **linear queue**. Once the `rear` index reaches the last position of the array, no additional elements can be inserted, even if there are unused spaces at the beginning due to previous dequeue operations. A **circular queue** can overcome this limitation by reusing freed positions.

---

## Conclusion

This project provides a simple implementation of an array-based queue in C and demonstrates the fundamental FIFO concept. It is suitable for learning the basic operations and behavior of queues before advancing to more efficient implementations such as circular queues or dynamic queues using linked lists.
