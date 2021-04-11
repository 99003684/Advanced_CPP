# Please find my review Feedback, Rajesh
* Including cpp files, totally contracidcting healthy practices, 
* Follow best practices on header files, source files
* Also Including a cpp file with main is a fundamental deviation
* Why do you need vector inside Gyroscope class, when no.of fileds 
  are known/fixed (x,y, z etc)
* Circular dependency between Gyroscope, Message Queue and Sender code, 
  let it be for now...if you can convert Gyroscope object as 
  standard packet format(encode on sender side) and decode on other side (Receiver) 
  this problem will be solved
* Parser is not a class 
* Why are you converting all objects into vector on sender side, instead
  send one object at a time over Message Queue and once you receive
  objects 
* Why are you using sizeof(Box) in message queue class, when object is 
  of Gyroscope type
* In receiver side, there is no class which holds all Gyroscope objects into 
  STL container..Receiver class should invoke add method of class holding 
  container (like car model and modelsdb)
* Receiver part is totally non object oriented way (no usage of Gyroscope class,
  another class holding Gyro objects in Gyro container etc )
* What are the computations, inferences you are drawing on collection of Gyro objects.
* Multiple main functions are there (there should be only two main functions 
  - one for sender and one for receiver)
* No attempt on C++11 & 14 features
* No usage of Makefiles and other Development tools/code quality. 
  (Basic indentation itself not followed, use clang-format, and then
  rest of code quality tools)
* i didn't build code, but could see that the code is not test without compilation issues