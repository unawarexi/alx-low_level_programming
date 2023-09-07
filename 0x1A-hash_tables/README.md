# Hash Functions, Hash Tables, and Collisions

This README provides answers to common questions related to hash functions, hash tables, and collisions.

## What is a hash function?

A hash function is a mathematical function that takes an input (or 'key') and returns a fixed-size string of characters, which is typically a hexadecimal number or a binary representation. The primary purpose of a hash function is to map data of arbitrary size to a fixed-size output, making it suitable for various applications such as data indexing, data retrieval, and data verification.

## What makes a good hash function?

A good hash function should possess the following properties:

1. **Deterministic**: Given the same input, it should always produce the same hash value.
2. **Fast to compute**: It should be computationally efficient to calculate the hash value.
3. **Uniform distribution**: Hash values should be evenly distributed across the output space to minimize collisions.
4. **Pre-image resistance**: It should be computationally infeasible to reverse-engineer the original input from the hash value.
5. **Avalanche effect**: A small change in the input should result in a significantly different hash value.
6. **Collision resistance**: It should be challenging to find two different inputs that produce the same hash value (collision-resistant).

## What is a hash table, how do they work, and how to use them?

A hash table (or hash map) is a data structure that uses hash functions to map keys to values. It consists of an array of buckets, where each bucket can store a key-value pair. The hash function is used to determine which bucket a key should be placed in. To use a hash table:

1. Calculate the hash value of the key using the hash function.
2. Use the hash value to determine the index (bucket) where the key-value pair will be stored.
3. Store the key-value pair in the chosen bucket.
4. When you need to retrieve a value associated with a key, calculate the hash value again, find the corresponding bucket, and retrieve the value.

Hash tables offer fast O(1) average-time complexity for key-value retrieval.

## What is a collision, and what are the main ways of dealing with collisions in the context of a hash table?

A collision occurs when two different keys produce the same hash value and need to be stored in the same bucket. Common collision resolution techniques include:

1. **Separate Chaining**: Each bucket contains a linked list or another data structure to store multiple key-value pairs that hash to the same index.
2. **Open Addressing**: When a collision occurs, the algorithm searches for the next available bucket (using a probing sequence) until an empty one is found.
3. **Double Hashing**: A variant of open addressing where a secondary hash function determines the probe step size.

## What are the advantages and drawbacks of using hash tables?

**Advantages**:
- Fast O(1) average-time complexity for key-value retrieval and insertion.
- Efficient for data indexing and retrieval.
- Suitable for applications requiring rapid lookups.

**Drawbacks**:
- Hash tables can have high memory usage, especially if they are sparsely populated.
- Collisions can degrade performance if not handled correctly.
- Hash functions may not always guarantee a perfectly uniform distribution.

## What are the most common use cases of hash tables?

Common use cases for hash tables include:
- Implementing dictionaries or associative arrays for efficient key-value storage.
- Symbol tables in compilers and interpreters.
- Caching systems to quickly retrieve frequently used data.
- Counting occurrences of elements in datasets.
- Implementing data structures like sets and bags.
- Cryptographic applications like password storage (with salted hashes).

