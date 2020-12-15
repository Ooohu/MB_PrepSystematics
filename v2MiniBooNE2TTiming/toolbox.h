#ifndef TOOLBOX_H
#define TOOLBOX_H

//Include shared tools here;
#include <sys/stat.h> //for creating terminal directory 
#include <iostream>
#include <unistd.h>

//ROOT
#include <TObject.h>

/*
 * A gadget to make a directory after
 * checking if that directory exist.
 *
 */
void gadget_buildfolder( std::string name);


#endif
