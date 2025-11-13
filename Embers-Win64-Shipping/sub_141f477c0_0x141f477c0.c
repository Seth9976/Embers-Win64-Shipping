// 函数: sub_141f477c0
// 地址: 0x141f477c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(*(arg1 + 0x717))
int32_t rdi = arg2

if (rsi != arg2)
    *(arg1 + 0x717) = rdi.b
    char rax
    rax, arg2 = sub_141f365a0(arg1)

if (arg1[0x86] == 0 || (rsi == rdi && *(arg1 + 0x717) != 0))
    return 

arg2.b = 1

if (sub_141f3fb10(arg1, arg2.b, 0) != 0)
    sub_1405a9f90(&arg1[0x132], 0)
