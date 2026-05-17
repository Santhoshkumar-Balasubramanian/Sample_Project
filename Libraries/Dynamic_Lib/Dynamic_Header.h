#include <stdio.h>
#include <windows.h>

#ifdef __cplusplus
#include <iostream>
extern "C"
{
	__declspec(dllexport) void rev(int);
}
#else
__declspec(dllexport) void rev(int);
#endif