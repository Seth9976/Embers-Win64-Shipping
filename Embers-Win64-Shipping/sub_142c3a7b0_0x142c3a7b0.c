// 函数: sub_142c3a7b0
// 地址: 0x142c3a7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0x70)

if (arg2 u>= arg3)
    return 

uint64_t i_1 = zx.q(arg3 - arg2)
uint64_t rax = zx.q(arg2) * 0x14
uint64_t i

do
    if ((*(r11 + rax + 0x10) & 0x1f) == 0xc)
        if (arg4 != 0)
            int64_t rdx = *(arg1 + 0x80)
            *(rdx + rax + 8) -= *(rdx + rax)
            int64_t rdx_1 = *(arg1 + 0x80)
            *(rdx_1 + rax + 0xc) -= *(rdx_1 + rax + 4)
        
        *(rax + *(arg1 + 0x80)) = 0
        *(*(arg1 + 0x80) + rax + 4) = 0
    
    rax += 0x14
    i = i_1
    i_1 -= 1
while (i != 1)
