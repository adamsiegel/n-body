##############################################################################
#								             #
#	NAME:    Adam Siegel						     #
#	PURPOSE: Generic Makefile					     #
#	Date:    16 August 2018  					     #
#									     #
##############################################################################





# Variable Declarations
CMP = g++
DBG = -w
OPT = -03

# Files
EXE = n_nody
SRC = main.cpp n_body.cpp solver.cpp runge_kutta.cpp
OBJ = main.o n_body.o solver.o runge_kutta.o
#LIB = -L/home/pi/bin/opencv_install/lib/ -lopencv_core -lopencv_imgcodecs -lopencv_imgproc -lopencv_highgui



# Main target
$(EXE): $(OBJ)
	$(CMP) $(DBG) $(OBJ) -o $(EXE)

# Object file generation
main.o: main.h
	$(CMP) $(DBG) -c main.cpp

n_body.o: n_body.cpp n_body.h
	$(CMP) $(DBG) -c n_body.cpp

solver.o: solver.cpp solver.h
	$(CMP) $(DBG) -c solver.cpp

runge_kutta.o: runge_kutta.cpp runge_kutta.h
	$(CMP) $(DBG) -c runge_kutta.cpp


# To remove
clean:
	rm -f $(EXE) $(OBJ)

realclean:
	rm -f $(EXE) $(OBJ) *~
