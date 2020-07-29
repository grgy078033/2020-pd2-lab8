tetris: genMino.o tetris.o Mino_I.o Mino_S.o Mino_J.o Mino_L.o Mino.o genMino.h  
	g++ -o tetris genMino.o tetris.o Mino_I.o Mino_S.o Mino_J.o Mino_L.o Mino.o  
genMino.o: genMino.cpp genMino.h  
	g++ -c genMino.cpp  
tetris.o: tetris.cpp genMino.h  
	g++ -c tetris.cpp  
Mino_I.o: Mino_I.cpp Mino_I.h  
	g++ -c Mino_I.cpp  
Mino_S.o: Mino_S.cpp Mino_S.h  
	g++ -c Mino_S.cpp  
Mino_J.o: Mino_J.cpp Mino_J.h  
	g++ -c Mino_J.cpp  
Mino_L.o: Mino_L.cpp Mino_L.h  
	g++ -c Mino_L.cpp  
Mino.o: Mino.cpp Mino.h  
	g++ -c Mino.cpp  
clean:  
	rm tetris *.o  
