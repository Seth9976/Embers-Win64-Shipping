// 函数: sub_14105eae0
// 地址: 0x14105eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x42) == 0
*(arg1 + 0x41) = 1
*(arg1 + 0x44) = 9

if (cond:0)
    return 

struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = arg1[5]

if (lpBaseAddress != 0)
    UnmapViewOfFile(lpBaseAddress)

HANDLE hObject = arg1[4]

if (hObject != 0)
    CloseHandle(hObject)

HANDLE hObject_1 = arg1[3]

if (hObject_1 != 0)
    CloseHandle(hObject_1)

return DeleteFileW(*arg1) __tailcall
