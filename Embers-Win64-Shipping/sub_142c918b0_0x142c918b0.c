// 函数: sub_142c918b0
// 地址: 0x142c918b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

int32_t* rdi = *(arg1 + 0x38)

if (*(arg1 + 0x24) != 0)
    int64_t s = sx.q(*(arg1 + 0x30))
    
    if (s.d != 0xffffffff)
        if (*rdi == 5)
            shutdown(s, SD_BOTH)
            s = zx.q(*(arg1 + 0x30))
        
        sub_1428f4c10(s.d)
        *(arg1 + 0x30) = 0xffffffff
    
    if (rdi != 0)
        sub_1428a6780(*(rdi + 8))
        sub_1428a6780(*(rdi + 0x10))
        sub_1428c2230(*(rdi + 0x20))
        sub_1428a6780(rdi)
    
    *(arg1 + 0x38) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x20) = 0

return 1
