// 函数: sub_141296520
// 地址: 0x141296520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_10 = *(arg2 + 0x68)

if (rax_10 != 0)
    arg2 = rax_10

void* rdx = arg2 + sx.q(arg3) * 0x68
void* rax_1 = *(rdx + 0x10)

if (rax_1 != 0)
    rax_1 = *(rax_1 + 0x10)

*(arg1 + 0xb8) = rax_1
*(arg1 + 0xc4) = *(rdx + 0x40)
int32_t rcx = *(rdx + 0x44)
*(arg1 + 0xc8) = rcx
*(arg1 + 0xcc) = *(rdx + 0x48)

if (rcx == 0)
    *(arg1 + 0xd0) = *(rdx + 0x30)
    int32_t rax_9 = *(rdx + 0x38)
    *(arg1 + 0xd8) = rax_9
    *(arg1 + 0xc0) = arg4
    return rax_9

*(arg1 + 0xd0) = *(rdx + 0x4c)
int32_t rax_7 = *(rdx + 0x54) - *(rdx + 0x50) + 1
*(arg1 + 0xc0) = arg4
*(arg1 + 0xd4) = rax_7
return rax_7
