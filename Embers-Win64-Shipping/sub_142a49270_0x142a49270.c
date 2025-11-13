// 函数: sub_142a49270
// 地址: 0x142a49270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 1) != 0)
    return 0xffffffff

int16_t rdx = *(arg1 + 8)
int32_t rax_2

if (rdx s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(rdx) s>> 5

int32_t r9 = 0

if (arg3 s< 0)
    arg3 = 0
else if (arg3 s> rax_2)
    arg3 = rax_2

if (arg4 s>= 0)
    int32_t rax_3 = rax_2 - arg3
    r9 = arg4
    
    if (arg4 s> rax_3)
        r9 = rax_3

void* rbx = arg1 + 0xa

if ((rdx.b & 2) == 0)
    rbx = *(arg1 + 0x18)

void* rax_5 = sub_142a8bd00(rbx + (sx.q(arg3) << 1), arg2, r9)

if (rax_5 != 0)
    return (rax_5 - rbx) s>> 1

return 0xffffffff
