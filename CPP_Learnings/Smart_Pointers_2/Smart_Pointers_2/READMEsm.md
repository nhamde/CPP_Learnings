# CPP_Learnings

### Smart Pointers

### Problem Statement: Provide proper resource management, avoiding dangling pointers, memory leak, ensuring memory is properly allotted and freed.

### Unique Pointers:
###	Unique Pointers are used for single ownership of object. No other pointer can copy unique pointer.
###	Image 1 from output image directory shows that no other unique pointer can copy unique pointer.
###	Also no other raw pointer can have the memory address unique pointer is pointing to.

### Shared Pointers:
###	Shared Pointers are used for shared ownership of object and the object is deleted only when all of its shared pointers are destructed.
###	Shared Pointers keep count of how many pointers does the object have.
###	Image 2 shows use of shared pointers.

### Weak Pointers:
###	Weak Pointers don't have ownership of object. They work with shared pointers. There is not make_weak functionality as unique or shared pointers have.
###	Image 3 from output image directory shows that weak pointers don't increase the count of pointers to object being shared.
### 	Image 4 from output image directory demonstrates the safety in assigning creating another shared pointers.