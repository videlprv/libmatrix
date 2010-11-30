Flags = -Wreturn-type -pedantic -pedantic-errors -Wundef
CPP = gcc

rk : rk.
	$(CPP) -o rk $(Flags) rk.cpp 

planets : planets.cpp
	$(CPP) -o planets $(Flags) planets.cpp


