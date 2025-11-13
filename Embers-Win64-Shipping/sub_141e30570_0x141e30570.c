// 函数: sub_141e30570
// 地址: 0x141e30570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[6] = 0

if (arg1[7] s<= 0xffffffff)
    sub_1405a5410(&arg1[4], 0)

uint64_t rax = sub_141e30450(&arg1[8])

if (arg2 == 0)
    *arg1 = 0xffffffff
    return rax

int32_t rax_1 = *(arg2 + 0x558)
*arg1 = rax_1
return rax_1
