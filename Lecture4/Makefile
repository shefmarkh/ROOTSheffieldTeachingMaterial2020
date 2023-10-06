EXE_NAME     := myROOTCommand
OBJECTS      := myROOTCommand.o

$(EXE_NAME): $(OBJECTS)
	g++ -Wl,-rpath,${ROOTSYS}/lib  -g -Wall -o $@ $^  `root-config --libs` -lvectorDict

cc=g++  -std=c++11 -g -Wall -I $(shell root-config --cflags) -o

$(OBJECTS:.o=.d): %.d: %.c
	$(cc) $@ -MM -MT '$(@:.d=.o) $@' $<
-include $(OBJECTS:.o=.d) 
$(OBJECTS): 
	$(cc) $@ -c $<


clean:
	rm -f *.o *.d *~ \#* $(EXE_NAME)

