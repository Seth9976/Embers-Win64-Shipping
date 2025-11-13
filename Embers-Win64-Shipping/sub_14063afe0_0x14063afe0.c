// 函数: sub_14063afe0
// 地址: 0x14063afe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405e1b50(arg1 + 0x100, 0)
uint64_t result = zx.q(*(arg1 + 0x148))

if (result.d s> 0)
    int64_t r8_1 = 0
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        uint64_t result_1 = *(arg1 + 0x140)
        result = arg1 + 0x138
        int64_t rdx_3 = (sx.q(*(arg1 + 0x148)) - 1) & r8_1
        
        if (result_1 != 0)
            result = result_1
        
        r8_1 += 1
        *(result + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
