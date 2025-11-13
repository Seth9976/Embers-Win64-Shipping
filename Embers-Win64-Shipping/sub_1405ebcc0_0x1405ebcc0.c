// 函数: sub_1405ebcc0
// 地址: 0x1405ebcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &data_142d5ee08
arg1[1] = &data_142d5ee30
arg1[2].b = 0
*(arg1 + 0x14) = 0
InitializeCriticalSection(&arg1[3])
SetCriticalSectionSpinCount(&arg1[3], 0xfa0)
arg1[8] = 0
arg1[9] = 0
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* arg_10 = rax

if (rax == 0)
    rax = nullptr
else
    *rax = 0

arg1[0xb] = rax
arg1[0xa] = rax
__builtin_memset(&arg1[0xc], 0, 0x19)
__builtin_memset(&arg1[0x10], 0, 0x1c)
arg1[0x14].b = 0
arg1[0x15] = 0
arg1[0x17].b = 0
arg1[0x18] = 0
arg1[0x19].b = 0
*(arg1 + 0xcc) = 0
arg1[0x1a].b = 0
__builtin_memset(&arg1[0x1b], 0, 0x20)
arg1[0xd] = sub_140a491d0(0)
return arg1
