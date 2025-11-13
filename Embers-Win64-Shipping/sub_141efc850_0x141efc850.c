// 函数: sub_141efc850
// 地址: 0x141efc850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x8a) & 1) == 0)
    return 

void* rax
char r8_1
rax, r8_1 = sub_141ee2210(arg1)

if (rax != 0)
    *(arg1 + 0x8a) &= 0xfe
    return sub_141e88650(rax, *(arg1 + 0x740), r8_1) __tailcall
