// 函数: sub_1405ec120
// 地址: 0x1405ec120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &data_142d62a10
arg1[1].d = 0
InitializeCriticalSection(&arg1[2])
SetCriticalSectionSpinCount(&arg1[2], 0xfa0)
__builtin_memset(&arg1[7], 0, 0x50)
int64_t rax = j_sub_140a82f30(0x30)
int64_t arg_10 = rax

if (rax == 0)
    rax = 0
else
    __builtin_memset(rax, 0, 0x28)

arg1[0x13] = rax
arg1[0x12] = rax
void*** rax_1 = j_sub_140a82f30(0x30)
arg_8 = rax_1

if (rax_1 == 0)
    rax_1 = nullptr
else
    __builtin_memset(rax_1, 0, 0x28)

arg1[0x15] = rax_1
arg1[0x14] = rax_1
return arg1
