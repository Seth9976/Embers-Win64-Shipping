// 函数: sub_140b5b5d0
// 地址: 0x140b5b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE hMutex = *arg1

if (hMutex == 0)
    return 

ReleaseMutex(hMutex)
CloseHandle(*arg1)
*arg1 = 0
