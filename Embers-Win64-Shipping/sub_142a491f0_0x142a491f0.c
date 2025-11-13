// 函数: sub_142a491f0
// 地址: 0x142a491f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r10 = *(arg1 + 8)
int32_t rax_1

if (r10 s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(r10) s>> 5

int32_t rdx = 0

if (arg3 s< 0)
    arg3 = 0
else if (arg3 s> rax_1)
    arg3 = rax_1

if (arg4 s>= 0)
    int32_t rax_2 = rax_1 - arg3
    rdx = arg4
    
    if (arg4 s> rax_2)
        rdx = rax_2

void* rbx = arg1 + 0xa

if ((r10.b & 2) == 0)
    rbx = *(arg1 + 0x18)

int16_t* rax_4 = sub_142a8bc00(rbx + (sx.q(arg3) << 1), arg2, rdx)

if (rax_4 != 0)
    return (rax_4 - rbx) s>> 1

return 0xffffffff
