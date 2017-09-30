
INCLUDE_DIR = -Iinclude
LIB_DIR = 
LIBS = -lopencv_core -lopencv_highgui
FLAG = -g
SRCS=$(wildcard  src/*.cpp)
OBJS=$(SRCS:%.cpp=%.o)
TARGET = woowa

#$(FLAGS) $(INCLUDE_DIR) $(LIBS)
#	@echo $(SRCS)
#	@echo $(OBJS)

$(TARGET) : $(OBJS)
	g++ $(OBJS) $(LIBS) $(FLAG) -o $(TARGET)

$(OBJS) : %.o : %.cpp
	g++ -c $(INCLUDE_DIR) $(FLAG) $< -o $@



clean:
	rm -f $(OBJS) $(TARGET)
