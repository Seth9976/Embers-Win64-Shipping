// 函数: sub_140d7dfe0
// 地址: 0x140d7dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE hHandle = data_143e20cb0

if (hHandle == 0)
    return 

HWND hWnd = data_143e20cc0

if (hWnd != 0)
    PostMessageW(hWnd, 2, 0, 0)
    hHandle = data_143e20cb0

WaitForSingleObject(hHandle, 0xffffffff)
CloseHandle(data_143e20cb0)
HWND hWnd_1 = data_143e20cc8
data_143e20cb0 = 0
data_143e20cc0 = 0

if (hWnd_1 != 0)
    PostMessageW(hWnd_1, 2, 0, 0)
    data_143e20cc8 = 0
