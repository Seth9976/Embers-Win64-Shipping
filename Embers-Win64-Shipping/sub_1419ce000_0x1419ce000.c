// 函数: sub_1419ce000
// 地址: 0x1419ce000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(*(arg1 + 0xe8) + ((zx.q(*(arg1 + 0xdc)) & zx.q((*arg2).w)) << 2))

if (i != 0xffffffff)
    int64_t r9_2 = *(arg1 + 0x68)
    
    do
        int64_t rcx_1 = sx.q(i) * 5
        
        if (*(r9_2 + (rcx_1 << 2)) == *arg2 && *(r9_2 + (rcx_1 << 2) + 8) == *(arg2 + 8)
                && *(r9_2 + (rcx_1 << 2) + 0x10) == arg2[4])
            return zx.q(i)
        
        i = *(*(arg1 + 0xf0) + (zx.q(i) << 2))
    while (i != 0xffffffff)

return 0xffffffff
