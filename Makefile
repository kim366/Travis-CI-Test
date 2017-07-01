main: main.cpp
	$(CXX) -c $<
	$(CXX) $@.o -o $@ -lsfml-graphics -lsfml-window -lsfml-system
