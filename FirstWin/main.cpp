#include<windows.h>
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrev,LPSTR lpCnd,int nCndShow) {
	HWND hWnd = FindWindow(NULL,"ѧϰ�ƻ�.txt - ���±�");
   	MessageBox(hWnd,"�����ҵĵ�һ��windowsӦ�ó���","����",MB_OK);

	return 0;
}
