// 函数: sub_141dc5ac0
// 地址: 0x141dc5ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = *arg4
float zmm8[0x4] = *(arg4 + 4)

if (not(zmm7[0] == zmm8[0]))
    uint128_t zmm9 = *(arg2 + 0xc4)
    uint128_t zmm10 = *(arg2 + 0xc8)
    
    if (zmm9.d f!= zmm10.d)
        float zmm6[0x4]
        float var_18_1[0x4] = zmm6
        uint128_t zmm11
        uint128_t var_68_1 = zmm11
        float zmm0[0x4]
        
        if (*(arg2 + 0xb8) != 0)
            zmm6 = *(arg3 + 0xc)
            zmm10.d = zmm10.d f- zmm9.d
            zmm6[0] = zmm6[0] f- zmm9.d
            _mm_max_ss(zmm8[0], zmm7[0])
            zmm11 = _mm_min_ss(zmm8.d, zmm7[0])
            zmm6[0] = zmm6[0] f/ zmm10.d
            
            if (zmm6[0] >= 0f)
                zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
            else
                zmm6 = zx.o(0)
            
            float zmm8_1
            int32_t zmm9_1
            zmm0, zmm7, zmm8_1, zmm9_1 = sub_141f86ef0(sub_141f8b8d0(arg5), zmm6, zx.o(0))
            
            if (zmm0[0] >= zmm8_1)
                zmm0 = _mm_min_ss(zmm0[0], zmm9_1)
            else
                zmm0 = zx.o(0)
            
            if ((*(arg2 + 0xb1) & 4) == 0)
                if (not(zmm0[0] < zmm8_1))
                    zmm8_1 = _mm_min_ss(zmm0[0], zmm9_1)
                
                zmm7[0] = zmm7[0] f- zmm11.d
                zmm7[0] = zmm7[0] * zmm8_1
                zmm7[0] = zmm7[0] f+ zmm11.d
            else
                if (not(zmm0[0] < zmm8_1))
                    zmm8_1 = _mm_min_ss(zmm0[0], zmm9_1)
                
                zmm6 = logf(zmm11[0])
                zmm7 = expf((logf(zmm7[0]) - zmm6[0]) * zmm8_1 + zmm6[0])
        else
            uint128_t zmm1 = *(arg3 + 0xc)
            
            if ((*(arg2 + 0xb1) & 4) == 0)
                uint128_t zmm2
                zmm2.d = zmm10.d f- zmm9.d
                
                if (__andps_xmmxud_memxud(zmm2, data_142d3f770)[0] > 9.99999994e-09f)
                    zmm1.d = zmm1.d f- zmm9.d
                    zmm0 = zx.o(0)
                    zmm1.d = zmm1.d f/ zmm2.d
                    
                    if (not(zmm1.d f< 0f))
                        zmm0 = _mm_min_ss(zmm1[0], 0x3f800000)
                else
                    if (zmm1.d f< zmm10.d)
                        zmm1 = zx.o(0)
                    else
                        zmm1 = 0x3f800000
                    
                    zmm0 = _mm_min_ss(zmm1[0], 0x3f800000)
                
                zmm8[0] = zmm8[0] - zmm7[0]
                zmm8[0] = zmm8[0] * zmm0[0]
                zmm8[0] = zmm8[0] + zmm7[0]
                zmm7 = zmm8
            else
                if (zmm1.d f>= zmm9.d)
                    zmm11 = _mm_min_ss(zmm10.d, zmm1.d)
                else
                    zmm11 = zmm9
                
                zmm6 = logf(zmm7[0])
                zmm10.d = zmm10.d f- zmm9.d
                zmm11.d = zmm11.d f- zmm9.d
                zmm7 = expf((logf(zmm8[0]) - zmm6[0]) f/ zmm10.d f* zmm11.d + zmm6[0])
    else if (not(zmm9.d f>= *(arg3 + 0xc)))
        zmm7 = zmm8

if (zmm7[0] < 20f)
    return 0x41a00000

return __minss_xmmss_memss(zmm7[0], 0x469c4000)
