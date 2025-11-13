// 函数: sub_1409508a0
// 地址: 0x1409508a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e2d6c8
arg1[5] = &data_142e2dc18
EnterCriticalSection(&arg1[0xde])
void* rdx = arg1[0xdd]

if (rdx != 0)
    arg1[0xdd] = 0
    sub_14094ea30(&arg1[0xdd], rdx)

if (arg1 != -0x6f0)
    LeaveCriticalSection(&arg1[0xde])

DeleteCriticalSection(&arg1[0xde])
sub_14094ea30(&arg1[0xdd], arg1[0xdd])
sub_141c32310(&arg1[0xda])
sub_14094d090(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
