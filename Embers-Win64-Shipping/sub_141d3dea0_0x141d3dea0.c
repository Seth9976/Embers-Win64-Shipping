// 函数: sub_141d3dea0
// 地址: 0x141d3dea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 8)
int128_t zmm4 = *(arg1 + 0xc)
float zmm0 = *(arg1 + 4)
float zmm5 = zmm1 * zmm1
int128_t zmm6
zmm6.d = zmm4.d f* zmm4.d
int64_t result

if (zmm0 <= 0f || zmm0 f<= *(arg2 + 0x54) || not(zmm0 f> *(arg2 + 0x58)))
    float zmm2
    
    if (zmm1 <= 0f)
    label_141d3df35:
        
        if (not(zmm4.d f<= 0f))
            zmm0 = *(arg2 + 0x10)
            zmm2 = *(arg2 + 0xc)
            zmm1 = *(arg2 + 0x14)
            zmm2 = zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1
        
        if (zmm4.d f<= 0f || zmm2 f>= zmm6.d)
            result.b = 1
            return result
    else
        zmm0 = *(arg2 + 0x28)
        zmm2 = *(arg2 + 0x24)
        zmm1 = *(arg2 + 0x2c)
        zmm2 = zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1
        
        if (zmm2 >= zmm5)
            goto label_141d3df35
        
        zmm0 = *(arg2 + 0x34)
        zmm2 = *(arg2 + 0x30)
        zmm1 = *(arg2 + 0x38)
        zmm2 = zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1
        
        if (not(zmm2 < zmm5))
            goto label_141d3df35

result.b = 0
return result
