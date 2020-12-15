CXX = g++
CXXFLAG = -c -g -Wall `root-config --cflags`
LDFLAGS = `root-config --glibs`
#CXXFLAG = -O2 -Wall -fPIC -pthread -std=c++1y -m64 -I/grid/fermiapp/products/larsoft//root/v6_12_04e/Linux64bit+2.6-2.12-e15-prof/include

executables = TTreeTranslator
objects = main_TTreeTranslator.o  FileReader.o  FomulaReader.o  toolbox.o  TTreeLoader.o  XMLLoader.o


$(executables): main_TTreeTranslator.o  FileReader.o  FomulaReader.o  toolbox.o  TTreeLoader.o  XMLLoader.o
	$(CXX) $(LDFLAGS) main_TTreeTranslator.o -lm FileReader.o  FomulaReader.o  toolbox.o  TTreeLoader.o  XMLLoader.o -o $(executables)

main_TTreeTranslator.o: main_TTreeTranslator.cxx
	$(CXX) $(CXXFLAG)  main_TTreeTranslator.cxx

FileReader.o: FileReader.cxx FileReader.h
	$(CXX) $(CXXFLAG)  FileReader.cxx

FomulaReader.o: FomulaReader.cxx FomulaReader.h
	$(CXX) $(CXXFLAG)  FomulaReader.cxx

toolbox.o: toolbox.cxx toolbox.h
	$(CXX) $(CXXFLAG)  toolbox.cxx

TTreeLoader.o: TTreeLoader.cxx TTreeLoader.h
	$(CXX) $(CXXFLAG)  TTreeLoader.cxx

XMLLoader.o: XMLLoader.cxx XMLLoader.h
	$(CXX) $(CXXFLAG)  XMLLoader.cxx

.PHONY: clean
clean:
	-rm -f $(objects)

#REFERENCE: https://root-forum.cern.ch/t/linking-root-libraries-to-a-makefile-install/12233/2
