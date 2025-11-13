// 函数: sub_14177c630
// 地址: 0x14177c630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8
sub_1417a9150(arg1 + 0x10, &var_a8, arg2)
float zmm11[0x4] = *arg2
float zmm9[0x4] = *(arg2 + 4)
float zmm8[0x4] = *(arg2 + 8)
float zmm1[0x4] = var_a8
zmm1[0] = zmm1[0] - zmm11[0]
int32_t var_a4
int128_t zmm10
zmm10.d = var_a4.d f- zmm9[0]
float var_a0
float zmm0 = var_a0 - zmm8[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm10.d = zmm10.d f* zmm10.d
zmm10.d = zmm10.d f+ zmm1[0]
zmm10.d = zmm10.d f+ zmm0 * zmm0
float var_88

if (zmm10.d f== 0f)
    int32_t* rax_5
    int64_t zmm6_1
    rax_5, zmm6_1 = sub_141792450(arg1 + 0x10, &var_88, arg1 + 0x60, &var_a8)
    *arg3 = *rax_5
    arg3[2] = rax_5[2]
    int64_t zmm3_2 = arg3[1]
    int64_t zmm4_2 = *arg3
    float zmm5_2 = arg3[2]
    int64_t zmm0_4
    zmm0_4.d = zmm3_2.d f* zmm3_2.d
    int64_t zmm2_2
    zmm2_2.d = zmm4_2.d f* zmm4_2.d
    zmm2_2.d = zmm2_2.d f+ zmm0_4.d
    zmm2_2.d = zmm2_2.d f+ zmm5_2 * zmm5_2
    int64_t temp0_5 = _mm_sqrt_ss(0, zmm2_2.d)
    
    if (temp0_5.d f<= 9.99999994e-09f)
        int32_t var_80_3 = 0
        *arg3 = _mm_unpacklo_ps(zx.o(0), zmm6_1)
        arg3[2] = 0
        *arg3 = 1f
    else
        zmm2_2.d = 1f f/ temp0_5.d
        zmm0_4.d = zmm2_2.d f* zmm4_2.d
        float zmm1_3 = zmm2_2.d f* zmm3_2.d
        zmm2_2.d = zmm2_2.d f* zmm5_2
        *arg3 = zmm0_4.d
        arg3[1] = zmm1_3
        arg3[2] = zmm2_2.d
else
    zmm0 = *(arg1 + 0x8c)
    float zmm3[0x4] = zmm11
    bool cond:0_1 = zmm11[0] > zmm0
    float zmm4[0x4] = *(arg1 + 0x80)
    zmm3[0] = zmm3[0] - zmm0
    float zmm7[0x4] = *(arg1 + 0x84)
    zmm4[0] = zmm4[0] - zmm11[0]
    float zmm5[0x4] = *(arg1 + 0x88)
    zmm7[0] = zmm7[0] - zmm9[0]
    float zmm2[0x4] = zmm9
    zmm5[0] = zmm5[0] - zmm8[0]
    zmm2[0] = zmm2[0] f- *(arg1 + 0x90)
    zmm1 = zmm8
    var_88 = zmm3[0]
    zmm1[0] = zmm1[0] f- *(arg1 + 0x94)
    float var_98 = zmm4[0]
    float var_94_1 = zmm7[0]
    float var_84_1 = zmm2[0]
    float var_90_1 = zmm5[0]
    float var_80_1 = zmm1[0]
    
    if (cond:0_1 || zmm9[0] f> *(arg1 + 0x90) || zmm8[0] f> *(arg1 + 0x94)
            || zmm11[0] f< *(arg1 + 0x80) || zmm9[0] f< *(arg1 + 0x84)
            || zmm8[0] f< *(arg1 + 0x88))
        if (not(zmm3[0] > 0f))
            if (zmm4[0] <= 0f)
                zmm3 = zx.o(0)
            else
                zmm3 = zmm4 ^ 0x80000000
        
        bool cond:3_1 = zmm2[0] > 0f
        *arg3 = zmm3[0]
        
        if (not(cond:3_1))
            if (zmm7[0] <= 0f)
                zmm2 = zx.o(0)
            else
                zmm2 = zmm7 ^ 0x80000000
        
        bool cond:4_1 = zmm1[0] > 0f
        arg3[1] = zmm2[0]
        
        if (not(cond:4_1))
            if (zmm5[0] <= 0f)
                zmm1 = zx.o(0)
            else
                zmm1 = zmm5 ^ 0x80000000
        
        arg3[2] = zmm1[0]
        
        if (not(sub_141750780(arg3)[0] >= 9.99999975e-05f))
            zmm7 = *arg3
            zmm7[0] - 0f
            zmm9 = 0x3f800000
            
            if (not(zmm7[0] <= 0f))
                *arg3 = 1f
                zmm7 = 0x3f800000
            else if (not(zmm7[0] >= 0f))
                *arg3 = -1f
                zmm7 = 0xbf800000
            
            zmm8 = arg3[1]
            zmm8[0] - 0f
            
            if (not(zmm8[0] <= 0f))
                arg3[1] = 0x3f800000
                zmm8 = 0x3f800000
            else if (not(zmm8[0] >= 0f))
                arg3[1] = 0xbf800000
                zmm8 = 0xbf800000
            
            float zmm1_2[0x4] = arg3[2]
            zmm1_2[0] - 0f
            
            if (zmm1_2[0] <= 0f)
                zmm9 = zmm1_2
                
                if (not(zmm1_2[0] >= 0f))
                    arg3[2] = 0xbf800000
                    zmm9 = 0xbf800000
            else
                arg3[2] = 0x3f800000
            
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm8[0] = zmm8[0] + zmm7[0]
            zmm8[0] = zmm8[0] + zmm9[0]
            
            if (not(zmm8[0] <= 9.99999994e-09f))
                float temp0_4[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                float zmm2_1[0x4] = 0x3f000000
                zmm8[0] = zmm8[0] * 0.5f
                temp0_4[0] = temp0_4[0] * temp0_4[0]
                zmm8[0] = zmm8[0] * temp0_4[0]
                zmm2_1[0] = 0.5f - zmm8[0]
                temp0_4[0] = temp0_4[0] * zmm2_1[0]
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                temp0_4[0] = temp0_4[0] * temp0_4[0]
                zmm8[0] = zmm8[0] * temp0_4[0]
                temp0_4[0] = temp0_4[0] * (0.5f - zmm8[0])
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                zmm7[0] = zmm7[0] * temp0_4[0]
                temp0_4[0] = temp0_4[0] * zmm8[0]
                zmm9[0] = zmm9[0] * temp0_4[0]
                arg3[1] = temp0_4[0]
                *arg3 = zmm7[0]
                arg3[2] = zmm9[0]
    else
        float temp0_1[0x4] = _mm_max_ss(zmm7[0], zmm2[0])
        float temp0_2[0x4] = _mm_max_ss(zmm4[0], zmm3[0])
        float temp0_3[0x4] = _mm_max_ss(zmm5[0], zmm1[0])
        uint64_t rdx_1
        
        if (temp0_2[0] <= temp0_1[0])
            int32_t rdx_2
            rdx_2.b = temp0_1[0] <= temp0_3[0]
            rdx_1 = zx.q(rdx_2 + 1)
        else
            rdx_1 = 2
            
            if (temp0_2[0] > temp0_3[0])
                rdx_1 = 0
        
        if ((&var_98)[rdx_1] >= (&var_88)[rdx_1])
            int64_t* rax_3 = sub_141730f40(&var_98, rdx_1.d)
            var_88 = (*rax_3 ^ 0x80000000).d
            int32_t var_84_2 = (*(rax_3 + 4) ^ 0x80000000).d
            int32_t var_80_2 = (rax_3[1].d ^ 0x80000000).d
            *arg3 = var_88.q
            arg3[2] = var_80_2
        else
            int64_t* rax_1 = sub_141730f40(&var_88, rdx_1.d)
            *arg3 = *rax_1
            arg3[2] = rax_1[1].d
float result
float zmm6_2
float zmm10_1
result, zmm6_2, zmm10_1 = sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_a8)

if (zmm10_1 == zmm6_2)
    return result

return _mm_sqrt_ss(0, zmm10_1) + result
