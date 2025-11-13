// 函数: sub_141e176e0
// 地址: 0x141e176e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg2
uint32_t result_1[0x4] = arg4
int128_t zmm13
int128_t var_88 = zmm13
float temp0[0x4] = _mm_max_ss(arg3[0], 0)
arg4[0] = arg4[0] f- 1.00000001e-07f

if (not(temp0[0] f>= arg4[0]))
    zmm13 = 0x3f800000
    
    if (not(arg1[0] f>= 0f))
        zmm9 ^= data_142d3f780
        zmm13 = 0xbf800000
    
    uint32_t result[0x4] = __andps_xmmxud_memxud(arg1, data_142d3f770)
    float temp0_1[0x4] = _mm_min_ss(zmm9[0], 0)
    
    if (not(temp0_1[0] >= -9.99999975e-05f))
        result[0] = result[0] f* -5f
        result[0] = result[0] f/ temp0_1[0]
        
        if (not(arg4[0] f<= result[0]))
            result_1 = result
    
    result_1[0] = result_1[0] f- 1.00000001e-07f
    
    if (not(temp0[0] f>= result_1[0]))
        result_1[0] = result_1[0] f* result_1[0]
        result[0] = result[0] f* 20f
        result[0] = result[0] f* -6f
        result_1[0] = result_1[0] f* -8f
        result_1[0] = result_1[0] f* result_1[0]
        result_1[0] = result_1[0] f* temp0_1[0]
        result_1[0] = result_1[0] f* result_1[0]
        result_1[0] = result_1[0] f- result[0]
        result[0] = result[0] f* -0.5f
        result_1[0] = result_1[0] f/ result_1[0]
        uint32_t zmm7[0x4] = _mm_max_ss(result_1[0], 0)
        arg3 = zmm7
        arg3[0] = arg3[0] * 1.5f
        zmm7[0] = zmm7[0] f* 0.5f
        zmm7[0] = zmm7[0] f* result_1[0]
        arg3[0] = arg3[0] f* result_1[0]
        zmm7[0] = zmm7[0] f* 0.5f
        result_1[0] = result_1[0] f* 3f
        result_1[0] = result_1[0] f* temp0_1[0]
        zmm7[0] = zmm7[0] f+ result_1[0]
        result_1[0] = result_1[0] f* result_1[0]
        result[0] = result[0] f- zmm7[0]
        result_1[0] = result_1[0] f* 8f
        result_1[0] = result_1[0] f* 6f
        result[0] = result[0] f/ result_1[0]
        result_1[0] = result_1[0] f* temp0_1[0]
        result[0] = result[0] f* 15f
        result[0] = result[0] f* temp0[0]
        result_1[0] = result_1[0] f+ arg3[0]
        result_1[0] = result_1[0] f* temp0_1[0]
        result_1[0] = result_1[0] f+ result[0]
        result_1[0] = result_1[0] f+ arg3[0]
        result_1[0] = result_1[0] f/ result_1[0]
        result[0] = result[0] f- result_1[0]
        result[0] = result[0] f+ result_1[0]
        result[0] = result[0] f/ result_1[0]
        result[0] = result[0] f* temp0[0]
        result[0] = result[0] f+ result[0]
        result[0] = result[0] f* temp0[0]
        result[0] = result[0] f+ zmm7[0]
        result[0] = result[0] f* temp0[0]
        result[0] = result[0] f+ temp0_1[0]
        result[0] = result[0] f* temp0[0]
        result[0] = result[0] f+ result[0]
        result[0] = result[0] f* zmm13.d
        return result

return zx.o(0)
