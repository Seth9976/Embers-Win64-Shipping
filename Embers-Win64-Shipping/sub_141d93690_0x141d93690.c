// 函数: sub_141d93690
// 地址: 0x141d93690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = arg2[1].d

if (count == 0)
    return 

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 + count

if (rdx s> *(arg1 + 0xc))
    sub_1405c5510(arg1, rdx)
    rax_1 = arg1[1].d

memcpy(sx.q(rax_1) + *arg1, *arg2, count)
arg1[1].d += count
