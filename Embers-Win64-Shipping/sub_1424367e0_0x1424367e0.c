// 函数: sub_1424367e0
// 地址: 0x1424367e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0x30))
int64_t r8 = 0
int64_t r9 = 0
uint64_t rdi = 0
int64_t r10 = 0

if (r11 s>= 2)
    void* rdx_2 = *(arg1 + 0x28) + 0x60
    int64_t i_1 = ((r11 - 2) u>> 1) + 1
    r10 = i_1 * 2
    int64_t i
    
    do
        uint64_t rax_1 = zx.q(*(rdx_2 - 0x40))
        rdx_2 += 0x80
        r8 += rax_1
        r9 += zx.q(*(rdx_2 - 0x80))
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r10 s< r11)
    rdi = zx.q(*((r10 << 6) + *(arg1 + 0x28) + 0x20))

return r9 + r8 + rdi
