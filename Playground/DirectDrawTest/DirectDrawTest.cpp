// DirectDrawTest.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "DirectDrawTest.h"
#include <d3d8.h>
#include <ddraw.h>
#include "BaseApplication.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

	BaseApplication BaseApp;

	BaseApp.Initialize();

	return BaseApp.Run();
}

void DrawPoint(int x, int y, DWORD color)
{

}