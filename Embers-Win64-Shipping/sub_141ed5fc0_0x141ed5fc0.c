// 函数: sub_141ed5fc0
// 地址: 0x141ed5fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x1f1)

if ((result & 0x10) != 0)
    void* rdx_1 = *(arg1 + 0x148)
    
    if (rdx_1 != 0 && *(rdx_1 + 0xf0) == 1)
        float zmm2 = *(arg1 + 0x2cc)
        float temp0_1[0x4] = _mm_max_ss((*(arg1 + 0x2c8))[0], 0)
        result &= 0xef
        float temp0_2 = _mm_max_ss(zmm2, 0)
        *(arg1 + 0x1f1) = result
        
        if (temp0_1[0] != 0f || not(temp0_2 == 0f))
            int64_t* rcx = *(rdx_1 + 0x290)
            float zmm1[0x4] = __andps_xmmxud_memxud(*(rcx + 0x1e0), data_143f3a9d0)
            float temp0_7[0x4] = _mm_min_ps(_mm_min_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0xc9)), 
                _mm_shuffle_ps(zmm1, zmm1, 0xd2))
            
            if (not(temp0_7[0] <= 9.99999975e-05f))
                zmm1 = 0x3f800000
                zmm1[0] = 1f / temp0_7[0]
                zmm1[0] = zmm1[0] * temp0_2
                zmm2 = rcx[0x84].d
                zmm1[0] = zmm1[0] * temp0_1[0]
                float zmm4[0x4] = *(rcx + 0x424)
                zmm2 = zmm2 - zmm1[0]
                zmm4[0] = zmm4[0] - zmm1[0]
                float temp0_8 = _mm_max_ss(zmm2, 0)
                float temp0_9[0x4] = _mm_max_ss(zmm4[0], 0)
                
                if (not(temp0_9[0] == 0f) && not(temp0_8 == 0f))
                    return sub_141ef53a0(rcx, temp0_9[0], temp0_8, 1) __tailcall

return result
