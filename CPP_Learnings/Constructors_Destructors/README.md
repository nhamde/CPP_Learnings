# CPP_Learnings

### Constructors and Destructors

### Problem Statement: What is the benefit of using constructors and destructors in C++?

### Solution: Constructors remove the need for initializing every data member of the object. 
### They act as functions which can also be overloaded giving flexibility to user to initialize the object the way they want.

### Destructors are automatically called at the end of project lifetime, which give user an ability to release memory of data members without forgetting it.
### This handles the problem of memory leak. Memory leak happens when developer forgets to release the dynamically alloted memory which then eventually grows and
### later on free memory reduces to allocate to new data. That's when destructors become handy.