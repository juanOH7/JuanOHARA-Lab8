museo.exe:	obras.o lit.o esc.o pint.o diseA.o museo.o
	g++ obras.o lit.o esc.o pint.o diseA.o museo.o -o museo.exe

museo.o:	museo.cpp obras.h lit.h esc.h pint.h diseA.h
	g++ -c museo.cpp

diseA.o:	diseA.cpp obras.h diseA.h
	g++ -c diseA.cpp

pint.o:	pint.cpp obras.h esc.h pint.h
	g++ -c pint.cpp

esc.o:	esc.cpp obras.h esc.h
	g++ -c esc.cpp

lit.o:	lit.cpp obras.h lit.h
	g++ -c lit.cpp

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp