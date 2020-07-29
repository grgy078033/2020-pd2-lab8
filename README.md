1.  
Because of rethrowing an empty exception, the program will be terminated  
immediately.  
  
2.  
Yes, because there is an exception which is a floating point (3.0) thrown  
by try and the catch block is also for a floating point.  
Due to this, it will print out "exception caugh" and the program won't be  
terminated because the exception was handled.So the function will keep  
executing, then "I love C++" will be showed.  
(But in my terminal, when I execute this code, it said that 3.0's data type  
is double, so the exception is not caught, the program would abort.)  
  
3.  
pd2@VirtualBox:~/lab8$ make  
g++ -c genMino.cpp  
g++ -c tetris.cpp  
g++ -c Mino_I.cpp  
g++ -c Mino_S.cpp  
g++ -c Mino_J.cpp  
g++ -c Mino_L.cpp  
g++ -c Mino.cpp  
g++ -o tetris genMino.o tetris.o Mino_I.o Mino_S.o Mino_J.o Mino_L.o Mino.o  
pd2@VirtualBox:~/lab8$ ./tetris  
mino_ptr[0] new success  
mino_ptr[1] new success  
Exception: std::bad_alloc  

