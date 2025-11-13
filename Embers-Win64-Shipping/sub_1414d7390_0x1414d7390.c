// 函数: sub_1414d7390
// 地址: 0x1414d7390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0xd64) == 0 || *(arg1 + 0x6a0) != 0)
    float zmm5 = *(arg2 + 0xc4) f- *(arg1 + 0x610)
    float zmm2 = *(arg2 + 0xc0) f- *(arg1 + 0x60c)
    float zmm0 = *(arg2 + 0xc8) f- *(arg1 + 0x614)
    float zmm1 = *(arg1 + 0xd5c)
    float zmm3 = *(arg1 + 0x1290)
    float zmm4 = *(arg2 + 0xd8)
    
    if (zmm4 * zmm4 > (zmm5 * zmm5 + zmm2 * zmm2 + zmm0 * zmm0) * zmm1 * zmm1 * zmm3 * zmm3
            * 0.00039999999f)
        result.b = 1
        return result

result.b = 0
return result
