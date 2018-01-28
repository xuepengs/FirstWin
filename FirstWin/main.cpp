#include<windows.h>
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrev,LPSTR lpCnd,int nCndShow) {
	HWND hWnd = FindWindow(NULL,"学习计划.txt - 记事本");
   	MessageBox(hWnd,"这是我的第一个windows应用程序","标题",MB_OK);

	return 0;
}
