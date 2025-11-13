// 函数: sub_142188730
// 地址: 0x142188730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xa8)

if (rdi == 0)
    rdi = sub_141ee69e0(arg1)

float zmm6[0x4]
float var_18[0x4] = zmm6
void* result

if (rdi != 0)
    result = *(arg1 + 0x408)
    
    if (result != 0)
        int32_t zmm0 = (zx.o(0)).d
        float temp0_1[0x4] = __maxss_xmmss_memss((*(result + 0xa4))[0], *(arg1 + 0x4b8))
        
        if (not(temp0_1[0] f<= zmm0))
            float temp0_2[0x4] = __maxss_xmmss_memss(temp0_1[0], 0x3dcccccd)
            
            if (not(temp0_2[0] f<= zmm0) && not(temp0_2[0] f>= *(arg1 + 0x4c4))
                    && sub_14243ade0(rdi).b != 0)
                temp0_2[0] = temp0_2[0] f+ *(arg1 + 0x26c)
                float temp0_3 = *(rdi + 0x520)
                temp0_2[0] - temp0_3
                result.b = temp0_2[0] < temp0_3
                return result

result.b = 0
return result
