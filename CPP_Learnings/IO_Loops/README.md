# CPP_Learnings

### IO_Loops

### Problem Statement: What do cin, cout, loops do in C++?

### cin is an input stream object connected to os's console which takes in input from standard inputters such as keyboard as sequence characters but later it converts data type depending upon the type of variable it's storing into. cin is a non-copyable object which can not be copied. ">>> cin >> a >> b;" :  First 'operator>>' stores data in a and returns reference to cin object which then again stores next data in variable b. This way the input stream is kept open.

### Similarly, cout is also an object but of output stream ostream, which is also connected with the console. An operator overloading was implemented which showed how a space which we technically call buffer is formed which stores the data that we provide to the output stream and displays out to console at once.