
# ALX;  C - Doubly linked lists

Title:   C - Doubly linked lists

## Authors

- [@unawarexi](https://www.github.com/unawarexi)


## LEARNING OBJECTIVES

A doubly linked list is a type of data structure used in computer science and programming. It is similar to a regular linked list, but with an additional pointer in each node that points to the previous node as well as the next node in the sequence. This bidirectional linkage allows for more versatile traversal and manipulation of the list compared to a singly linked list, where nodes only have a reference to the next node.

### Each node in a doubly linked list contains three main components:

#### Data: 
- This is the actual value or information that the node holds.
#### Pointer to the Previous Node: 
- This pointer points to the node that comes before the current node.
#### Pointer to the Next Node: 
- This pointer points to the node that comes after the current node.

### Here's a simple representation of a doubly linked list:
```
   <-- Prev    Data     Next -->
   [Node 1] <-> [Node 2] <-> [Node 3]
```
### Advantages of Doubly Linked Lists:

#### Bidirectional traversal:
You can traverse the list both forwards and backwards.
Easy insertions and deletions: Adding or removing nodes from the middle of the list is more efficient compared to a singly linked list.
#### Efficient reversal: 
Reversing a doubly linked list is straightforward.

### Disadvantages:

#### Slightly more memory overhead due to the additional pointers.
More complex implementation compared to a singly linked list.
Here's an example of how you might use a doubly linked list in a programming context, 

- *using a simple pseudo-code illustration:*

```c
class Node:
    data
    prev
    next

class DoublyLinkedList:
    head
    tail

    constructor:
        head = null
        tail = null

    function addNode(data):
        new_node = Node(data)
        if head is null:
            head = new_node
            tail = new_node
        else:
            tail.next = new_node
            new_node.prev = tail
            tail = new_node

    function removeNode(data):
        current = head
        while current is not null:
            if current.data = data:
                if current.prev is not null:
                    current.prev.next = current.next
                else:
                    head = current.next

                if current.next is not null:
                    current.next.prev = current.prev
                else:
                    tail = current.prev

                return

            current = current.next

    function printList():
        current = head
        while current is not null:
            print(current.data)
            current = current.next
```
This pseudo-code demonstrates a simple doubly linked list implementation with basic operations like adding and removing nodes, as well as printing the list.

Remember that the specific implementation details can vary depending on the programming language you're using. Make sure to manage memory properly to avoid memory leaks and null pointer issues.
## Tech Stack

**language:** C program
