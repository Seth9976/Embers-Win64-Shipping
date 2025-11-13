// 函数: sub_1424359e0
// 地址: 0x1424359e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0x150))
int32_t r8 = 0
int32_t r10 = 0
int32_t rdi = 0
int64_t rcx = 0

if (r11 s>= 2)
    int64_t* rdx_1 = *(arg1 + 0x148)
    int64_t i_1 = ((r11 - 2) u>> 1) + 1
    rcx = i_1 * 2
    int64_t i
    
    do
        int64_t rax_1 = *rdx_1
        rdx_1 = &rdx_1[2]
        r8 += *(rax_1 + 0xa0)
        r10 += *(rdx_1[-1] + 0xa0)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rcx s< r11)
    rdi = *(*(*(arg1 + 0x148) + (rcx << 3)) + 0xa0)

return zx.q(r10 + r8 + rdi)
