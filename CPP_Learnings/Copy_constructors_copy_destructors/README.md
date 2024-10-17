# CPP_Learnings

### Copy Constructors and Copy Destructors

### Problem Statement: How to create copy of present object to another object in C++?

### Copying an object into another object has become simpler with the use of copy constructors.
### There are two types of copy constructors, one is default which is provided by the compiler and second one is user defined.
### The image 1 in output directory shows the use of default copy constructor which carries out shallow copy of the object.
### It means the second object which is being newly created with the use of first object gets its own memory but for the data members, a member-wise copy occurs.
### But image 2 shows that when we use dynamically allotted memory in the objects, they point to same memory address for both the objects. This is where shallow copy is dangerous.
### This happens as the pointer will be copied in to new object at different location but the value it stores which is address to another object, is also copied.
### This causes the different pointers in different objects pointing to same object in the memory which is disastrous.
### Image 3 shows that pointers now point to different addresses;