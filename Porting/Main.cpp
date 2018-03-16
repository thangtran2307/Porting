#include <windows.h>  
#include <stdlib.h>  
#include <string.h>  
#include <tchar.h>
#include <stdio.h>
#include "CreateWindowApp.h"
#include <vld.h>

int main()
{
	printf("AAAAAAAAAAAAA");
	CreateWindowApp *a = new CreateWindowApp("AAA", "BBB", 500, 500);
	a->Show();
	delete a;
}
