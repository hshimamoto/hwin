MINGW = i686-w64-mingw32-
CXX = $(MINGW)g++
LD = $(MINGW)g++
AR = $(MINGW)ar

CXXFLAGS = -g -O2 -Wall
CXXFLAGS += -mwindows
LDFLAGS = -g -O2 -Wall
LDFLAGS += -mwindows

test-objs = hwin.o test.o

all: test.exe

test.exe: $(test-objs)
	$(LD) $(LDFLAGS) -o $@ $($(basename $@)-objs)

%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o
