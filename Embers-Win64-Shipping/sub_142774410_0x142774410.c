// 函数: sub_142774410
// 地址: 0x142774410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE hObject = arg1[0x10]

if (hObject != -1)
    CloseHandle(hObject)
    arg1[0x10] = -1

int64_t* rcx = arg1[5]

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)
    arg1[5] = 0

int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)
    arg1[2] = 0

arg1[0x11].d = 0
*arg1 = 0
arg1[1] = 0
arg1[3] = 0
arg1[4] = 0
__builtin_memset(&arg1[6], 0, 0x12)
__builtin_memset(&arg1[9], 0, 0x38)
return 0
