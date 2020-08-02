#ifdef BUILD_DLL
	#define MYDLL __declspec(dllexport)
#else 
	#define MYDLL __declspec(dllimport)
#endif

MYDLL int soma(int x, int y);
MYDLL int sub(int x, int y);