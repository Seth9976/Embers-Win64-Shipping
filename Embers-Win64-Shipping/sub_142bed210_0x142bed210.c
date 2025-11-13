// 函数: sub_142bed210
// 地址: 0x142bed210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x18)
int64_t r11 = *(arg1 + 0x20)
uint64_t rax_1 = zx.q(r8 u>> 1)
int32_t r9 = 0

if (r8 != 0)
    do
        if (rax_1.d u> r8 || rax_1.d u< r9)
            rax_1 = zx.q((r8 + r9) u>> 1)
        
        int32_t rdx = *(r11 + (rax_1 << 3))
        
        if (arg2 == rdx)
            return zx.q(*(r11 + (rax_1 << 3) + 4) + 1)
        
        if (arg2 u>= rdx)
            r9 = (rax_1 + 1).d
        else
            r8 = rax_1.d
        
        rax_1 = zx.q(rax_1.d + arg2 - rdx)
    while (r9 u< r8)

return 0
