// 函数: sub_142873000
// 地址: 0x142873000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_1 = *(arg1 + 0xa8)

if (r8_1 != 0)
    void* r8 = *(r8_1 + 0x238)
    
    if (r8 != 0)
        int32_t rdx = *(r8 + 0x40)
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 4) == 0)
            if ((*(r8 + 0x1c) & 0x1c8) != 0 && rdx == 0x505)
                return 0x909
        else if (rdx == 0x909)
            return 0x404
        
        return zx.q(rdx)

return 0xffffffff
