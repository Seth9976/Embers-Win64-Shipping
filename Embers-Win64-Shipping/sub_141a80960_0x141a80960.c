// 函数: sub_141a80960
// 地址: 0x141a80960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm10[0x4] = *(arg4 + 4)
uint32_t zmm11[0x4] = *arg4
zmm10[0] = zmm10[0] f* zmm10[0]
zmm11[0] = zmm11[0] f* zmm11[0]
uint32_t zmm12[0x4] = *(arg4 + 8)
zmm11[0] = zmm11[0] f+ zmm10[0]
uint32_t zmm0[0x4] = 0x3f800000
zmm12[0] = zmm12[0] f* zmm12[0]
zmm11[0] = zmm11[0] f+ zmm12[0]
zmm0[0] = 1f f- zmm11[0]

if (_mm_and_ps(zmm0, 0x7fffffff)[0] f>= 0.00999999978f)
    *arg1 = data_14399f720
else
    uint32_t zmm1[0x4]
    uint32_t zmm2[0x4]
    
    if (arg5 == 0)
    label_141a80a30:
        zmm1 = *(arg2 + 0x10)
        uint32_t zmm6[0x4] = *arg3
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm6[0] = zmm6[0] f- zmm1[0]
        uint32_t zmm7[0x4] = *(arg3 + 4)
        zmm7[0] = zmm7[0] f- zmm0[0]
        uint32_t zmm8[0x4] = *(arg3 + 8)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        zmm8[0] = zmm8[0] f- zmm1[0]
        zmm6[0] = zmm6[0] f* zmm6[0]
        uint32_t var_b8 = zmm6[0]
        zmm7[0] = zmm7[0] f* zmm7[0]
        uint32_t var_b4_1 = zmm7[0]
        zmm8[0] = zmm8[0] f* zmm8[0]
        zmm7[0] = zmm7[0] f+ zmm6[0]
        uint32_t var_b0_1 = zmm8[0]
        zmm7[0] = zmm7[0] f+ zmm8[0]
        uint32_t zmm5[0x4]
        
        if (not(zmm7[0] f<= 9.99999994e-09f))
            zmm5 = _mm_rsqrt_ss(zmm7[0], zmm7[0])
            zmm2 = 0x3f000000
            zmm7[0] = zmm7[0] f* 0.5f
            zmm5[0] = zmm5[0] f* zmm5[0]
            zmm7[0] = zmm7[0] f* zmm5[0]
            zmm2[0] = 0.5f f- zmm7[0]
            zmm5[0] = zmm5[0] f* zmm2[0]
            zmm5[0] = zmm5[0] f+ zmm5[0]
            zmm5[0] = zmm5[0] f* zmm5[0]
            zmm7[0] = zmm7[0] f* zmm5[0]
            zmm5[0] = zmm5[0] f* (0.5f f- zmm7[0])
            zmm5[0] = zmm5[0] f+ zmm5[0]
            zmm6[0] = zmm6[0] f* zmm5[0]
            zmm7[0] = zmm7[0] f* zmm5[0]
            zmm8[0] = zmm8[0] f* zmm5[0]
            var_b8 = zmm6[0]
            uint32_t var_b4_2 = zmm7[0]
            uint32_t var_b0_2 = zmm8[0]
        
        float zmm9[0x4] = arg7
        
        if (not(zmm9[0] <= 9.99999975e-06f))
            float temp0_5[0x4] = __minss_xmmss_memss(zmm9[0], 0x43340000)
            zmm11[0] = zmm11[0] f* zmm6[0]
            zmm10[0] = zmm10[0] f* zmm7[0]
            temp0_5[0] = temp0_5[0] * 0.0174532924f
            zmm11[0] = zmm11[0] f+ zmm10[0]
            zmm12[0] = zmm12[0] f* zmm8[0]
            zmm0 = 0xbf800000
            zmm11[0] = zmm11[0] f+ zmm12[0]
            
            if (not(zmm11[0] f< -1f))
                zmm0 = __minss_xmmss_memss(zmm11[0], 0x3f800000)
            
            zmm0 = acosf(zmm0[0])
            
            if (not(zmm0[0] f<= temp0_5[0]))
                temp0_5[0] = temp0_5[0] f/ zmm0[0]
                zmm6[0] = zmm6[0] f- zmm11[0]
                zmm7[0] = zmm7[0] f- zmm10[0]
                zmm8[0] = zmm8[0] f- zmm12[0]
                zmm6[0] = zmm6[0] f* temp0_5[0]
                zmm7[0] = zmm7[0] f* temp0_5[0]
                zmm6[0] = zmm6[0] f+ zmm11[0]
                zmm8[0] = zmm8[0] f* temp0_5[0]
                zmm7[0] = zmm7[0] f+ zmm10[0]
                zmm8[0] = zmm8[0] f+ zmm12[0]
                var_b8 = zmm6[0]
                zmm6[0] = zmm6[0] f* zmm6[0]
                uint32_t var_b4_3 = zmm7[0]
                zmm7[0] = zmm7[0] f* zmm7[0]
                zmm8[0] = zmm8[0] f* zmm8[0]
                zmm7[0] = zmm7[0] f+ zmm6[0]
                uint32_t var_b0_3 = zmm8[0]
                zmm7[0] = zmm7[0] f+ zmm8[0]
                
                if (not(zmm7[0] f<= 9.99999994e-09f))
                    zmm5 = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                    zmm2 = 0x3f000000
                    zmm7[0] = zmm7[0] f* 0.5f
                    zmm5[0] = zmm5[0] f* zmm5[0]
                    zmm7[0] = zmm7[0] f* zmm5[0]
                    zmm2[0] = 0.5f f- zmm7[0]
                    zmm5[0] = zmm5[0] f* zmm2[0]
                    zmm5[0] = zmm5[0] f+ zmm5[0]
                    zmm5[0] = zmm5[0] f* zmm5[0]
                    zmm7[0] = zmm7[0] f* zmm5[0]
                    zmm5[0] = zmm5[0] f* (0.5f f- zmm7[0])
                    zmm5[0] = zmm5[0] f+ zmm5[0]
                    zmm6[0] = zmm6[0] f* zmm5[0]
                    zmm7[0] = zmm7[0] f* zmm5[0]
                    zmm8[0] = zmm8[0] f* zmm5[0]
                    var_b8 = zmm6[0]
                    uint32_t var_b4_4 = zmm7[0]
                    uint32_t var_b0_4 = zmm8[0]
        
        if (arg5 != 0)
            zmm2 = *arg6
            uint32_t zmm3[0x4] = *(arg6 + 4)
            float zmm4 = zmm2[0]
            zmm5 = *(arg6 + 8)
            zmm3[0] = zmm3[0] f* zmm7[0]
            zmm5[0] = zmm5[0] f* zmm8[0]
            zmm4 = zmm4 f* zmm6[0] f+ zmm3[0] f+ zmm5[0]
            zmm2[0] = zmm2[0] f* zmm4
            zmm3[0] = zmm3[0] f* zmm4
            zmm6[0] = zmm6[0] f- zmm2[0]
            zmm5[0] = zmm5[0] f* zmm4
            zmm7[0] = zmm7[0] f- zmm3[0]
            zmm8[0] = zmm8[0] f- zmm5[0]
            var_b8 = zmm6[0]
            zmm6[0] = zmm6[0] f* zmm6[0]
            uint32_t var_b4_5 = zmm7[0]
            zmm7[0] = zmm7[0] f* zmm7[0]
            zmm8[0] = zmm8[0] f* zmm8[0]
            zmm6[0] = zmm6[0] f+ zmm7[0]
            uint32_t var_b0_5 = zmm8[0]
            zmm6[0] = zmm6[0] f+ zmm8[0]
            
            if (not(zmm6[0] f<= 9.99999994e-09f))
                zmm5 = _mm_rsqrt_ss(zmm6[0], zmm6[0])
                zmm2 = 0x3f000000
                zmm6[0] = zmm6[0] f* 0.5f
                zmm5[0] = zmm5[0] f* zmm5[0]
                zmm6[0] = zmm6[0] f* zmm5[0]
                zmm2[0] = 0.5f f- zmm6[0]
                zmm5[0] = zmm5[0] f* zmm2[0]
                zmm5[0] = zmm5[0] f+ zmm5[0]
                zmm5[0] = zmm5[0] f* zmm5[0]
                zmm6[0] = zmm6[0] f* zmm5[0]
                zmm5[0] = zmm5[0] f* (0.5f f- zmm6[0])
                zmm5[0] = zmm5[0] f+ zmm5[0]
                zmm5[0] = zmm5[0] f* zmm6[0]
                zmm5[0] = zmm5[0] f* zmm7[0]
                zmm5[0] = zmm5[0] f* zmm8[0]
                var_b8 = zmm5[0]
                uint32_t var_b4_6 = zmm5[0]
                uint32_t var_b0_6 = zmm5[0]
        
        sub_140ad6660(arg1, arg4, &var_b8)
    else
        zmm0 = *(arg6 + 4)
        zmm2 = *arg6
        zmm1 = *(arg6 + 8)
        zmm0[0] = zmm0[0] f* zmm0[0]
        zmm2[0] = zmm2[0] f* zmm2[0]
        zmm1[0] = zmm1[0] f* zmm1[0]
        zmm2[0] = zmm2[0] f+ zmm0[0]
        zmm0 = 0x3f800000
        zmm2[0] = zmm2[0] f+ zmm1[0]
        zmm0[0] = 1f f- zmm2[0]
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= 0.00999999978f))
            goto label_141a80a30
        
        *arg1 = data_14399f720

return arg1
