# CPP_Learnings

### Vectors_Strings

### Problem Statement: How do Vectors and Strings work in C++?

### Solution: Vectors are dynamically allocated arrays in C++. The address of the vector object and the base address which is the address of first element of the vector are different.
### This is because the object stores metadata about the vector such as size, capacity, etc which is at different location in the memory. 