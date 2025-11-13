// 函数: sub_142b3bef0
// 地址: 0x142b3bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x4c) == 0)
    *(arg1 + 8) = 0
    *arg1 = 0xffff
    arg1[1] = 0xffff
    arg1[2] = 0xfffe
    return arg1

int16_t rax_1 = *(arg2 + 0x48)
int16_t r8 = *(arg2 + 0x2f0)
int16_t r9 = *(arg2 + 0x68)

if (rax_1 s<= 0 && r8 s> 0)
    rax_1 = r8

*arg1 = rax_1
arg1[2] = r9

if (r8 s> 0)
    rax_1 = r8

*(arg1 + 8) = 5
arg1[1] = rax_1
return arg1
