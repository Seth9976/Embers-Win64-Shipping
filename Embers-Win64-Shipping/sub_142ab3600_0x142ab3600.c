// 函数: sub_142ab3600
// 地址: 0x142ab3600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

char rax = *(arg1 + 0x40)
int64_t count = sx.q(arg2)
int32_t r15_1

if (rax == 0)
    r15_1 = 0
else
    r15_1 = *(arg1 + 0x38)

if (rax == 0)
    int64_t rax_1 = sub_142a7dd00(count)
    *(arg1 + 0x30) = rax_1
    *(arg1 + 0x38) = count.d
    memset(rax_1, 0, count)
else if (r15_1 s< count.d)
    int32_t rsi_1 = (count * 2).d
    int64_t rax_2 = sub_142a7dd00(sx.q(rsi_1))
    int64_t rbx_1 = sx.q(r15_1)
    memcpy(rax_2, *(arg1 + 0x30), rbx_1.d)
    memset(rbx_1 + rax_2, 0, sx.q(count.d - r15_1))
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = rax_2
    *(arg1 + 0x38) = rsi_1

*(arg1 + 0x40) = 1
