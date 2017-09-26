
INCLUDE_DIR = -Iinclude
SRCS=$(wildcard  src/*.cpp)
OBJS=$(SRCS:%.cpp=%.o)
TARGET = woowa

#$(FLAGS) $(INCLUDE_DIR) $(LIBS)
#	@echo $(SRCS)
#	@echo $(OBJS)

$(TARGET) : $(OBJS)

	g++ $(OBJS) -o $(TARGET)

$(OBJS) : %.o : %.cpp
	g++ -c $(INCLUDE_DIR) $< -o $@



clean:
	rm -f $(OBJS) $(TARGET)
