# CPP_Learnings

### Smart Pointers

### Problem Statement: Provide proper resource management, avoiding dangling pointers, memory leak, ensuring memory is properly allotted and freed.

### Smart pointers are wrapper around regular pointers. They automatically delete themselves when they go out of scope which depends upon which pointer we use.
### Unique pointers are destroyed and deleted automatically when they go out of scope.
### They are called as scoped pointers. Unique pointers cannot be copied.
### If we copy unique pointer then there are two pointers which point to same memory.
### So when one goes out of scope, memory is freed and then the second pointer 	does not have the memory to point to. That's why they are unique pointers.
### Shared pointers point to same object and are destroyed only when all of its sharings go out of scope.
### Image 1 in output images directory shows that first the object of Employee class is created, then the smart pointer is created.
### Then smart pointer is released and the object returned to a raw pointer. When the scope ends the smart pointer which now points to null, gets destroyed.
### Developer can design their own smart pointers which allows them to manage memory resources at their freedom.

### Image 2 in output image directory navigates through the entire procedure.
### 1) First employee object is created by constructor which prompts to enter values.
### 2) The smart pointer is constructed and its raw pointer points to the employee object.
### 3) display functions are called.
### 4) Nested block starts where another smart pointer is initialized with another employee object which uses parameterized constructor.
### 5) While assigning new smart pointer to old smart pointer, object with old smart pointer is deleted to avoid memory leak.
### 6) Copy constructor is called for second employee object.
### 7) Second smart pointer goes out of scope and gets destructed and the second object of that smart pointer also destructed.
### 8) Coming out of inner scope.
### 9) Old smart pointer has been assigned to new Employee object.
### 10) Smart pointer is released and it returns a raw pointer to the object to let developer decide what to do with the object.
### 11) The object displays its data.
### 12) At the end of the scope, the old smart pointer is destructed.
### 13) The raw pointer has to be manually deleted.