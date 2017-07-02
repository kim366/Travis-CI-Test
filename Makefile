main: main.cpp
	$(CXX) $(CFLAGS) $(CXXFLAGS) -c $<
	$(CXX) $@.o -o $@ -lsfml-graphics -lsfml-window -lsfml-system
