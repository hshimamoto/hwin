MINGW = i686-w64-mingw32-
CXX = $(MINGW)g++
LD = $(MINGW)g++
AR = $(MINGW)ar

CXXFLAGS = -g -O2 -Wall
CXXFLAGS += -mwindows
LDFLAGS = -g -O2 -Wall
LDFLAGS += -mwindows
LDFLAGS += -static
LIBS = -lws2_32

test-objs = hwin.o hwinnet.o test.o

all: test.exe

test.exe: $(test-objs)
	$(LD) $(LDFLAGS) -o $@ $($(basename $@)-objs) $(LIBS)

%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c -o $@ $<

hwin.o: hwin.hxx

clean:
	rm -f *.o
