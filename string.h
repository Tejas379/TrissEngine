#ifndef _STRING_H
#define _STRING_H

//C runtime header files
#ifndef _TCHAR_INC_
	#include <tchar.h>
#endif

#ifndef _STRING_
	#include <string>
#endif

//Defines

#ifdef UNICODE
	#define tstring wstring
	#define TOSTRING (value) std::to_wstring(value)
#else
	#define tstring string
	#define TOSTRING (value) std::to_string(value)
#endif

#endif  //_STRING_H
