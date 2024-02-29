**README for Hash Table Implementation in C**

In this README, I will provide a comprehensive documentation of the implementation of a hash table in C, adhering to the guidelines and requirements specified below. The project focuses on understanding hash functions, hash tables, collision handling, and their applications.

### Table of Contents
1. [Introduction](#introduction)
2. [General Overview](#general-overview)
3. [Hash Functions](#hash-functions)
4. [Hash Tables](#hash-tables)
5. [Collision Handling](#collision-handling)
6. [Advantages and Drawbacks](#advantages-and-drawbacks)
7. [Common Use Cases](#common-use-cases)
8. [Requirements](#requirements)
9. [Implementation Details](#implementation-details)
10. [Testing](#testing)
11. [Conclusion](#conclusion)
12. [References](#references)

---

### Introduction
A hash table is a data structure that stores key-value pairs and enables efficient retrieval of values based on keys. This README provides insights into the implementation of a hash table in C programming language.

### General Overview
This section covers fundamental concepts related to hash functions, hash tables, collision handling, advantages, drawbacks, and common use cases.

- **What is a Hash Function?**
  - A hash function is a mathematical algorithm that converts an input (or 'key') into a fixed-size string of characters, which is typically a hash code.
- **What Makes a Good Hash Function?**
  - A good hash function should distribute keys uniformly across the hash table, minimize collisions, and provide efficient computation.
- **What is a Hash Table? How Do They Work?**
  - A hash table is a data structure that implements an associative array abstract data type, where data elements are stored in an array format.
  - Each key is mapped to a unique index in the array using a hash function.
  - Hash tables employ chaining or open addressing to handle collisions.
- **Collision Handling**
  - Collisions occur when two distinct keys hash to the same index.
  - Main ways of dealing with collisions include chaining and open addressing.
- **Advantages and Drawbacks of Hash Tables**
  - Advantages: Fast retrieval, efficient insertion and deletion, flexibility in handling dynamic datasets.
  - Drawbacks: High memory usage, sensitivity to hash function quality, potential for performance degradation with poor hash functions.
- **Common Use Cases of Hash Tables**
  - Hash tables are widely used in various applications such as database indexing, caches, symbol tables, and language interpreters.

### Requirements
The project adheres to the following requirements:
- Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with specified options
- Coding Style: Betty style, with appropriate header files and function prototypes
- Data Structures: Utilization of provided data structures for hash table implementation

### Implementation Details
The project comprises several tasks, each focusing on a specific aspect of hash table implementation:
1. **Task 0: Creating a Hash Table**
   - Function: `hash_table_create(unsigned long int size)`
   - Creates a hash table of specified size.

2. **Task 1: Implementing DJB2 Hash Function**
   - Function: `hash_djb2(const unsigned char *str)`
   - Implements the DJB2 hash function for hashing strings.

3. **Task 2: Determining Index for Key**
   - Function: `key_index(const unsigned char *key, unsigned long int size)`
   - Computes the index in the hash table array for a given key.

4. **Task 3: Adding an Element to Hash Table**
   - Function: `hash_table_set(hash_table_t *ht, const char *key, const char *value)`
   - Adds or updates a key-value pair in the hash table.

5. **Task 4: Retrieving Value Associated with Key**
   - Function: `hash_table_get(const hash_table_t *ht, const char *key)`
   - Retrieves the value associated with a given key in the hash table.

6. **Task 5: Printing Hash Table**
   - Function: `hash_table_print(const hash_table_t *ht)`
   - Prints the contents of the hash table in array and list format.

7. **Task 6: Deleting Hash Table**
   - Function: `hash_table_delete(hash_table_t *ht)`
   - Deletes the entire hash table and frees allocated memory.

### Conclusion
This README provides an overview of the hash table implementation project, covering its objectives, requirements, implementation details, and testing approach.