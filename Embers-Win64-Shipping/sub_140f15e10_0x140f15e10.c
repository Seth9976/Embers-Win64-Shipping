// 函数: sub_140f15e10
// 地址: 0x140f15e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xb0)

if (rdi == 0)
    return 

EnterCriticalSection(rdi + 0x488)
*(rdi + 0x3c0) = *arg2
*(rdi + 0x3c1) = arg2[1]
sub_140692f90(rdi + 0x3c8, &arg2[8])

if (rdi != -0x488)
    LeaveCriticalSection(rdi + 0x488)
