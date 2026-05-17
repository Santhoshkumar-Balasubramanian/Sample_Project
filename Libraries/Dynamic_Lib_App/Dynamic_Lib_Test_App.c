#include "D:\VisualStudioSamples\Libraries\Dynamic_Lib\Dynamic_Header.h" 
typedef void (*AddFunc)(int);
int main()
{
	HINSTANCE hDll = LoadLibrary(L"D:\\VisualStudioSamples\\Libraries\\Dynamic_Lib\\Debug\\Dynamic_Lib.dll");
	if (!hDll) {
		printf("DLL not loaded"); 
		return 1;
	}
	AddFunc func = (AddFunc)GetProcAddress(hDll, "rev");
	if (!func) {
		printf("Function not found");
		return 1;
	}
	func(1234);
	FreeLibrary(hDll);
}
