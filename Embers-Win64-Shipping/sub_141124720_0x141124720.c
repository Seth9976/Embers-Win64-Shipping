// 函数: sub_141124720
// 地址: 0x141124720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x160) s<= 0)
    return 0xffffffff

char rcx = *(arg1 + 0x50)
int32_t r8_2 = neg.d(sbb.d(arg3, arg3, rcx != 0)) - 1

if (*(arg1 + 0xa8) != 0)
    if (rcx != 0)
        int32_t rdx = r8_2
        
        if (*(sx.q(r8_2) * 0x58 + arg1 + 0x48) s> *(arg1 + 0xa0))
            rdx = 1
        
        r8_2 = rdx
    else
        r8_2 = 1

if (*(arg1 + 0x100) != 0)
    if (r8_2 != 0xffffffff)
        int32_t rdx_1 = r8_2
        
        if (*(sx.q(r8_2) * 0x58 + arg1 + 0x48) s> *(arg1 + 0xf8))
            rdx_1 = 2
        
        r8_2 = rdx_1
    else
        r8_2 = 2

if (*(arg1 + 0x158) != 0)
    if (r8_2 == 0xffffffff)
        return 3
    
    if (*(sx.q(r8_2) * 0x58 + arg1 + 0x48) s> *(arg1 + 0x150))
        r8_2 = 3

return zx.q(r8_2)
