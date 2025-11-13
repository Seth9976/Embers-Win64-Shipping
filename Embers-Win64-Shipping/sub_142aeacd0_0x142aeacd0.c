// 函数: sub_142aeacd0
// 地址: 0x142aeacd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 s< *(arg1 + 0x20) || arg2 s>= *(arg1 + 0x10))
    int64_t r8
    r8.b = 1
    result = (*(*(arg1 + 0x38) + 0x20))(arg1, arg2, r8)
else
    result = zx.q(arg2.d - *(arg1 + 0x20))
    
    if (result.d s> *(arg1 + 0x1c))
        result = (*(*(arg1 + 0x38) + 0x48))()
        *(arg1 + 0x28) = result.d
    else
        *(arg1 + 0x28) = result.d

int64_t r8_1 = sx.q(*(arg1 + 0x28))

if (r8_1.d s< *(arg1 + 0x2c))
    result = *(arg1 + 0x30)
    
    if ((zx.d(*(result + (r8_1 << 1))) & 0xfffffc00) == 0xdc00)
        if (r8_1.d == 0)
            (*(*(arg1 + 0x38) + 0x20))(arg1, *(arg1 + 0x20))
        
        result = zx.q(*(arg1 + 0x28))
        
        if (result.d s> 0)
            int32_t r8_2 = (result - 1).d
            result = *(arg1 + 0x30)
            
            if ((zx.d(*(result + (sx.q(r8_2) << 1))) & 0xfffffc00) == 0xd800)
                *(arg1 + 0x28) = r8_2

return result
