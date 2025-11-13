// 函数: sub_142bc5d10
// 地址: 0x142bc5d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x18)
int32_t r8 = 0

if (r9 != 0)
    do
        int32_t rax_4 = ((r9 - r8) u>> 1) + r8
        int32_t rdx = *(*(arg1 + 0x20) + zx.q(rax_4) * 0x10)
        
        if (rdx == arg2)
            return zx.q(rax_4 + 1)
        
        if (rdx u>= arg2)
            r9 = rax_4
        else
            r8 = rax_4 + 1
    while (r8 u< r9)

return 0
