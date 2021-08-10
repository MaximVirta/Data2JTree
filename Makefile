PROGRAM         = Data2JTree

LIBDIRARCH      = lib/archive

CXX             = g++
CXXFLAGS        = -Wall -fPIC 

LD              = g++
SOFLAGS         = -shared -Wno-deprecated
CXXFLAGS        += $(shell root-config --cflags)
LIBS            = $(shell root-config --libs)

CXXFLAGS       += $(INCS)

HDRSDICT = 	./src/AliJBaseTrack.h \
			./src/AliJBaseEventHeader.h \
			./src/JTreeDataManager.h \
			./src/JHistos.h

HDRS += $(HDRSDICT)  nanoDict.h

SRCS 		= $(HDRS:.h=.cxx)
OBJS		= $(HDRS:.h=.o)

%.o: %.cxx %.h
	$(COMPILE.C) $(OUTPUT_OPTION) $(INCS) -c $<

$(PROGRAM):     $(OBJS) $(HDRS) $(PROGRAM).C 
		$(CXX) $(PROGRAM).C -o $(PROGRAM) $(CXXFLAGS) $(OBJS) $(LIBS) $(INCS)
		@echo "$(PROGRAM) done"

.PHONY : clean debug

clean : 
	@echo cleaning up
	rm -f $(OBJS) core *Dict*  $(PROGRAM).o $(PROGRAM) || echo "already cleaned"

cl:  clean $(PROGRAM)

debug:
	echo $(OBJS)

nanoDict.cc: $(HDRSDICT)
		@echo "Generating dictionary ..."
		@rm -f nanoDict.cc nanoDict.hh nanoDict.h
		@rootcint -f nanoDict.cc -c $(INCS) $(HDRSDICT)
