// 函数: sub_142713290
// 地址: 0x142713290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int32_t zmm6_1
result, zmm6_1 = sub_142704500(arg2)

if (result.b != 0)
    uint32_t r8_1 = zx.d(*arg2)
    int32_t r9_1 = *(arg1 + 0x150)
    
    if (r8_1 s>= r9_1)
        int32_t r8_3 = r8_1 + 1 + *(arg1 + 0x150) - r9_1
        *(arg1 + 0x150) = r8_3
        
        if (r8_3 s> *(arg1 + 0x154))
            sub_1406105e0(arg1 + 0x148)
    
    result = *(arg1 + 0x148)
    *(result + (zx.q(*arg2) << 2)) = zmm6_1

return result
