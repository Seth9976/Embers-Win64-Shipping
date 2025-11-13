// 函数: sub_141fdc610
// 地址: 0x141fdc610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r14 = 0
int32_t rdx = 0
arg1[2].d = 0

if (*(arg1 + 0x14) != arg2)
    sub_1405dadb0(&arg1[1], arg2)
    rdx = arg1[2].d

int32_t result = rdx + arg2
arg1[2].d = result

if (result s> *(arg1 + 0x14))
    result = sub_1406105e0(&arg1[1])

arg1[3].w = 0x101
*(arg1 + 0x1a) = arg2.b
*(arg1 + 0x1b) = 0
*arg1 = 0

if (arg2 s>= 4)
    void* r8 = arg3 + 8
    uint64_t rax_2 = zx.q(((arg2 - 4) u>> 2) + 1)
    uint64_t i_3 = zx.q(rax_2.d)
    r14 = (rax_2 << 2).d
    uint64_t i
    
    do
        void* rdx_2 = -8 - arg3 + r8
        *(rdx_2 + arg1[1]) = *(r8 - 8)
        *(rdx_2 + arg1[1] + 4) = *(r8 - 4)
        *(r8 - arg3 + arg1[1]) = *r8
        void* rdx_5 = 4 - arg3 + r8
        result = *(r8 + 4)
        r8 += 0x10
        *(rdx_5 + arg1[1]) = result
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r14 s< arg2)
    uint64_t i_2 = zx.q(arg2 - r14)
    int64_t rdx_6 = sx.q(r14) << 2
    uint64_t i_1
    
    do
        result = *(rdx_6 + arg3)
        rdx_6 += 4
        *(rdx_6 + arg1[1] - 4) = result
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
