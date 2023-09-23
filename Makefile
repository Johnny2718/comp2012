ifeq (Windows_NT, $(OS))
RM_CMD := del /F
ZIP_CMD := zip.exe
else
RM_CMD := rm -vf
ZIP_CMD :=zip
endif

CPPFLAGS = -std=c++11
SRCS = main.cpp Sushi.cpp SushiTrain.cpp
OBJS = $(SRCS:.cpp=.o)

all: lab2.exe

zinc: lab2.zip

lab2.exe: $(OBJS)
	g++ -o $@ $(CPPFLAGS) $^

%.o: %.cpp
	g++ -o $@ $(CPPFLAGS) -c $<

lab2.zip: Sushi.cpp SushiTrain.cpp
	$(ZIP_CMD) $@ $^

clean:
	$(RM_CMD) $(OBJS) lab2.exe lab2.zip
