// 函数: sub_141ef7e50
// 地址: 0x141ef7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if ((*(arg1 + 0x389) & 0x20) != 0)
    float zmm0 = *(arg1 + 0xc8)
    float zmm3 = *(arg1 + 0xc4)
    float zmm2 = *(arg1 + 0xcc)
    
    if (not(zmm3 * zmm3 + zmm0 * zmm0 + zmm2 * zmm2 >= arg2 * arg2 * 1.0201f))
        result.b = 1
        return result

result.b = 0
return result
