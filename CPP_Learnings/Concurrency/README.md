# CPP_Learnings

## Const Keyword

### Problem Statement: Write a shape class which does not let user define the shape of an object once the object is created or constructed.

### Solution: Use of const keyword helps in this situation. const keyword makes the value of a data member constant meaning it cannot be changed later once its initilized.
### Thus the const data member can be initialized using constructor but setter methods don't work. Image 1 from output image directory shows error while assigning const data member a value but the constructor works fine.
### Image 2 displays that a non constant member function cannot be called on const object.
### Image 3 displays an error caused by attempting to change data of const object.
### Image 4 displays an error caused by attempting to change const pointer to object. 