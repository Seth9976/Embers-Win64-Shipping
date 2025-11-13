// 函数: sub_142428800
// 地址: 0x142428800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14334a9d0
arg1[1] = 0
int64_t rax = j_sub_140a82f30(0x348)
int64_t rbx = rax

if (rax == 0)
    rbx = 0
else
    memset(rax, 0, 0x348)

arg1[2] = rbx
__builtin_memset(&arg1[3], 0, 0x14)
InitializeCriticalSection(&arg1[6])
SetCriticalSectionSpinCount(&arg1[6], 0xfa0)
arg1[0xb] = 0
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0
sub_141f79600(&arg1[0xe])
return arg1
