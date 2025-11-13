// 函数: sub_142088120
// 地址: 0x142088120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) &= 0xfffffffb
uint32_t r14 = zx.d(arg2)
int32_t result = (r14 ^ 1) << 2
*(arg1 + 0x68) |= result

if (arg3 != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x40) s> 0)
        int64_t rsi_1 = 0
        
        do
            result = sub_142088120(*(*(arg1 + 0x38) + rsi_1), zx.q(r14.b), zx.q(arg3))
            i += 1
            rsi_1 += 8
        while (i s< *(arg1 + 0x40))

return result
