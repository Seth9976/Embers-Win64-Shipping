// 函数: sub_140322c70
// 地址: 0x140322c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x8] = *arg3
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
int32_t r8_1
int64_t r9_1

if (result.d != 0xff)
    if (arg2 s> 0)
        if (arg2 != 1)
            r8_1 = arg2 & 1
            result = arg1 + 0x40
            r9_1 = 0
            zmm0[0].o = data_142d3f660
            int32_t temp0_2[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg4, arg4)
            
            do
                *(result - 0x40) = zmm0[0].o
                *(result - 0x20) = temp0_2
                *(result - 0x30) = temp0_2
                *(result - 0x10) = zmm0[0].o
                r9_1 += 2
                *(result + 0x10) = temp0_2
                *result = temp0_2
                result += 0x60
            while (arg2 - r8_1 != r9_1.d)
            
        label_140322d3a:
            
            if (r8_1 != 0)
                goto label_140322d43
        else
        label_140322ce9:
            r9_1 = 0
        label_140322d43:
            result = r9_1 * 0x30
            zmm0[0].o = data_142d3f660
            *(arg1 + result) = zmm0[0].o
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            *(arg1 + result + 0x20) = zmm0[0].o
            *(arg1 + result + 0x10) = zmm0[0].o
else if (arg2 s> 0)
    if (arg2 == 1)
        goto label_140322ce9
    
    r8_1 = arg2 & 1
    result = arg1 + 0x40
    r9_1 = 0
    zmm0[0].o = data_142d3f660
    int32_t temp0_1[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg4, arg4)
    
    do
        *(result - 0x40) = zmm0[0].o
        *(result - 0x20) = temp0_1
        *(result - 0x30) = temp0_1
        *(result - 0x10) = zmm0[0].o
        r9_1 += 2
        *(result + 0x10) = temp0_1
        *result = temp0_1
        result += 0x60
    while (arg2 - r8_1 != r9_1.d)
    
    goto label_140322d3a
_mm256_zeroupper()
return result
