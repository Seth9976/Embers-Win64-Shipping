// 函数: sub_140b65ad0
// 地址: 0x140b65ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE hObject = *arg1

if (hObject != 0)
    CloseHandle(hObject)
    *arg1 = 0
