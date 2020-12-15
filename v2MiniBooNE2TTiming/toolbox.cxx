#include "toolbox.h"

void gadget_buildfolder( std::string name){
	std::cout<<"Creating directory "<<name<<std::endl;
	if (access(name.c_str(),F_OK) == -1){
		mkdir(name.c_str(),0777);//Create a folder for pdf.
	}
	else{
		std::cout<<"Overwrite "<<name<<"/ in 2 seconds, 1 seconds, ..."<<std::endl;
//CHECK		sleep(2);
	}
}
