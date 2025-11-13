// 函数: sub_1411563a0
// 地址: 0x1411563a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg1)
float zmm3 = arg2
int32_t r10 = (r11 + 1).d
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, r10)
uint64_t result = zx.q(temp0 u>> 0x1f)
int64_t rcx = sx.q(r10 - (temp0 + result.d) * 3)

if (not(*(arg3 + (rcx << 2) + 0xc) f< *(arg4 + (rcx << 2) + 0xc))
        && not(*(arg3 + (rcx << 2)) f> *(arg4 + (rcx << 2))))
    result = sx.q((r11 + 2).d s% 3)
    
    if (not(*(arg3 + (result << 2) + 0xc) f< *(arg4 + (result << 2) + 0xc))
            && not(*(arg3 + (result << 2)) f> *(arg4 + (result << 2))))
        float zmm0 = *(arg4 + (r11 << 2))
        int32_t zmm2 = *(arg3 + (r11 << 2))
        
        if (not(zmm0 f< zmm2))
            arg2 = *(arg3 + (r11 << 2) + 0xc)
        
        if (zmm0 f< zmm2 || zmm0 > arg2)
            *(arg4 + (r11 << 2) + 0xc) = zmm2
        else
            *(arg4 + (r11 << 2)) = arg2
            zmm0 = arg2
        
        result = zx.q(int.d(_mm_max_ss(*(arg4 + (r11 << 2) + 0xc) - zmm0, 0) / zmm3 + 0.5f))
        *(arg4 + (r11 << 2) + 0x1c) = result.d

return result
