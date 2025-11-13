// 函数: sub_142807710
// 地址: 0x142807710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x2c))

if (result.d != 0 && *(arg1 + 0x3c) != 0)
    memset(*(arg1 + 0x20), 0xffffffff, zx.q((result << 2).d))
    int32_t r9_1 = *(arg1 + 0x28)
    int32_t i = 0
    
    if (r9_1 != 1)
        int32_t* rdx_1 = nullptr
        int64_t r8_2 = 0
        
        do
            i += 1
            r8_2 += 4
            *(rdx_1 + *(arg1 + 0x18)) = i
            rdx_1 = &rdx_1[1]
        while (i u< r9_1 - 1)
    
    result = *(arg1 + 0x18)
    *(result + (zx.q(*(arg1 + 0x28) - 1) << 2)) = 0xffffffff
    *(arg1 + 0x34) = 0
    *(arg1 + 0x3c) = 0

return result
