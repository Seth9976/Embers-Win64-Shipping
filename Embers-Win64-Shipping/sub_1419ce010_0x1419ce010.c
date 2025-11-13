// 函数: sub_1419ce010
// 地址: 0x1419ce010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(*(arg1 + 0xc8) + ((zx.q(*(arg1 + 0xbc)) & zx.q(*arg2)) << 2))

if (i != 0xffffffff)
    int64_t r8_2 = *(arg1 + 0x58)
    
    do
        int64_t rcx = sx.q(i) * 5
        
        if (*(r8_2 + (rcx << 2)) == *arg2 && *(r8_2 + (rcx << 2) + 8) == *(arg2 + 8)
                && *(r8_2 + (rcx << 2) + 0x10) == *(arg2 + 0x10))
            return zx.q(i)
        
        i = *(*(arg1 + 0xd0) + (zx.q(i) << 2))
    while (i != 0xffffffff)

return 0xffffffff
