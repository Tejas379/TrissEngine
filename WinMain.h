#ifndef _WINMAIN_              //if winmain is not defined,we define it
#define _WINMAIN_              
//this is done for not to include our file more than once.                             
//#pregma once can also be used but we don't know what we'll end-up yet 
//may be will create this engine crossplatform in near future or whatever.so,we did this.


//C runtime header files

#ifndef _WINDOW_
#include <Windows.h>

#endif

int _tmain(int argc, char* argv[]); //for Debugging
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);


#endif  //_WINMAIN_
