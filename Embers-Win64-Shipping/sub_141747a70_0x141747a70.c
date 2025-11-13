// 函数: sub_141747a70
// 地址: 0x141747a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*(arg1 + 0x2c))
uint128_t zmm3 = *(arg1 + 0x24)
float zmm2[0x4] = *(arg1 + 0x20)
uint128_t zmm6 = *arg2
uint128_t zmm7 = *(arg2 + 4)
float zmm4[0x4] = zmm7
float zmm8[0x4] = *(arg2 + 8)
zmm4[0] = zmm4[0] f- zmm3.d
uint128_t zmm9
uint128_t var_48 = zmm9
zmm4[0] = zmm4[0] f* *(arg1 + 0x30)
int32_t rax = *(arg1 + 0x34)
uint64_t var_c8 = zmm0.q
zmm0.d = zmm6.d f- zmm2[0]
uint128_t zmm15 = *(arg1 + 0x28)
zmm8[0] = zmm8[0] f- zmm15.d
int32_t arg_8 = zmm3.d
zmm0.d = zmm0.d f* *(arg1 + 0x2c)
zmm8[0] = zmm8[0] f* *(arg1 + 0x34)
zmm4[0] = zmm4[0] f+ zmm0.d
zmm4[0] = zmm4[0] + zmm8[0]
float result
float zmm1[0x4]
float zmm5[0x4]
uint128_t zmm11
uint128_t zmm12
uint128_t zmm13
uint128_t zmm14

if (zmm4[0] >= 9.99999994e-09f)
    zmm0 = zx.o(*(arg1 + 0x54))
    zmm5 = zmm7
    zmm11 = *(arg1 + 0x48)
    zmm13 = *(arg1 + 0x4c)
    zmm14 = *(arg1 + 0x50)
    zmm5[0] = zmm5[0] f- zmm13.d
    int32_t rax_1 = *(arg1 + 0x5c)
    zmm8[0] = zmm8[0] f- zmm14.d
    uint64_t var_b8_1 = zmm0.q
    zmm0.d = zmm6.d f- zmm11.d
    zmm5[0] = zmm5[0] f* *(arg1 + 0x58)
    zmm8[0] = zmm8[0] f* *(arg1 + 0x5c)
    zmm0.d = zmm0.d f* *(arg1 + 0x54)
    zmm5[0] = zmm5[0] f+ zmm0.d
    zmm5[0] = zmm5[0] + zmm8[0]
    
    if (zmm5[0] >= 9.99999994e-09f)
        zmm12 = var_c8.d
        zmm13 = var_c8:4.d
        zmm14 = rax
        zmm0.d = zmm12.d f* zmm4[0]
        zmm0.d = zmm0.d f+ zmm2[0]
        zmm4[0] = zmm4[0] f/ *(arg1 + 0x60)
        zmm6.d = zmm6.d f- zmm0.d
        zmm0.d = zmm13.d f* zmm4[0]
        zmm0.d = zmm0.d f+ zmm3.d
        zmm7.d = zmm7.d f- zmm0.d
        zmm0.d = zmm14.d f* zmm4[0]
        zmm0.d = zmm0.d f+ zmm15.d
        zmm11.d = zmm7.d f* zmm7.d
        zmm8[0] = zmm8[0] f- zmm0.d
        zmm0.d = zmm6.d f* zmm6.d
        zmm11.d = zmm11.d f+ zmm0.d
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm11.d = zmm11.d f+ zmm8[0]
        zmm0.d = 1f - zmm4[0]
        zmm4[0] = zmm4[0] f* *(arg1 + 0x68)
        zmm15 = _mm_sqrt_ss(zx.o(0).d, zmm11.d)
        zmm0.d = zmm0.d f* *(arg1 + 0x64)
        zmm0.d = zmm0.d f+ zmm4[0]
        zmm15.d = zmm15.d f- zmm0.d
        
        if (not(zmm15.d f>= 0f))
            zmm9 = _mm_min_ss(zmm5.d, zmm4[0])
        
        if (zmm15.d f>= 0f || zmm9.d f>= (zmm15 ^ 0x80000000).d)
            float result_3
            
            if (zmm11.d f!= 1f)
                if (zmm11.d f>= 9.99999994e-09f)
                    zmm4 = 0x3f000000
                    float temp0_12[0x4] = _mm_rsqrt_ss(zmm11[0], zmm11.d)
                    zmm2 = 0x3f000000
                    zmm3.d = zmm11.d f* 0.5f
                    zmm0.d = temp0_12.d f* temp0_12[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2[0] = 0.5f - zmm1[0]
                    zmm0.d = temp0_12.d f* zmm2[0]
                    temp0_12[0] = temp0_12[0] f+ zmm0.d
                    temp0_12[0] = temp0_12[0] * temp0_12[0]
                    zmm3.d = zmm3.d f* temp0_12[0]
                    zmm4[0] = 0.5f f- zmm3.d
                    zmm0.d = temp0_12.d f* zmm4[0]
                    temp0_12[0] = temp0_12[0] f+ zmm0.d
                    zmm1 = temp0_12
                    zmm0.d = temp0_12.d f* zmm6.d
                    temp0_12[0] = temp0_12[0] * zmm8[0]
                    var_c8.d = zmm0.d
                    zmm1[0] = zmm1[0] f* zmm7.d
                    result_3 = temp0_12[0]
                else
                    zmm1 = data_143dbb1fc
                    var_c8.d = data_143dbb1f8.d
                    result_3 = data_143dbb200.d
                
                var_c8:4.d = zmm1[0]
            else
                var_c8.d = zmm6.d
                var_c8:4.d = zmm7.d
                result_3 = zmm8[0]
            
            zmm1 = zx.o(var_c8)
            result = result_3
        else if (zmm4[0] >= zmm5[0])
            var_c8.d = (var_b8_1.d ^ 0x80000000).d
            var_c8:4.d = (var_b8_1:4.d ^ 0x80000000)[0]
            zmm1 = zx.o(var_c8)
            result = (rax_1 ^ 0x80000000)[0]
        else
            var_b8_1.d = (zmm12 ^ 0x80000000).d
            var_b8_1:4.d = (zmm13 ^ 0x80000000).d
            zmm1 = zx.o(var_b8_1)
            result = (zmm14 ^ 0x80000000).d
        
        *arg3 = zmm1.q
    else
        zmm9 = var_b8_1.d
        zmm4 = rax_1
        zmm15 = *(arg1 + 0x68)
        zmm0.d = zmm9.d f* zmm5[0]
        zmm0.d = zmm0.d f+ zmm11.d
        zmm11 = var_b8_1:4.d
        zmm12.d = zmm6.d f- zmm0.d
        zmm0.d = zmm11.d f* zmm5[0]
        zmm0.d = zmm0.d f+ zmm13.d
        zmm13.d = zmm7.d f- zmm0.d
        zmm0.d = zmm4.d f* zmm5[0]
        zmm0.d = zmm0.d f+ zmm14.d
        zmm2 = zmm13
        zmm2[0] = zmm2[0] f* zmm13.d
        zmm14.d = zmm8.d f- zmm0.d
        zmm0.d = zmm12.d f* zmm12.d
        zmm2[0] = zmm2[0] f+ zmm0.d
        zmm1 = zmm14
        zmm1[0] = zmm1[0] f* zmm14.d
        zmm2[0] = zmm2[0] + zmm1[0]
        
        if (_mm_sqrt_ss(0, zmm2[0]).d f<= zmm15.d)
            float temp0_9[0x4] = _mm_unpacklo_ps(zmm9 ^ 0x80000000, (zmm11 ^ 0x80000000).q)
            result = (zmm4 ^ 0x80000000)[0]
            *arg3 = temp0_9.q
        else
            zmm11 = data_143dbb200
            zmm4 = 0x3f000000
            
            if (zmm2[0] == 1f)
                zmm3 = data_143dbb1f8
                zmm2 = data_143dbb1fc
            else if (zmm2[0] >= 9.99999994e-09f)
                zmm4 = 0x3f000000
                zmm0 = zmm2
                float temp0_6[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0.d)
                zmm2 = 0x3f000000
                zmm3.d = zmm0.d f* 0.5f
                zmm0.d = temp0_6.d f* temp0_6[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = temp0_6.d f* zmm2[0]
                temp0_6[0] = temp0_6[0] f+ zmm0.d
                temp0_6[0] = temp0_6[0] * temp0_6[0]
                zmm3.d = zmm3.d f* temp0_6[0]
                zmm4[0] = 0.5f f- zmm3.d
                zmm0.d = temp0_6.d f* zmm4[0]
                zmm4 = 0x3f000000
                temp0_6[0] = temp0_6[0] f+ zmm0.d
                zmm0.d = temp0_6.d f* zmm12.d
                temp0_6[0] = temp0_6[0] f* zmm13.d
                temp0_6[0] = temp0_6[0] f* zmm14.d
                zmm12 = zmm0
                zmm13 = temp0_6
                zmm14 = temp0_6
                zmm3 = data_143dbb1f8
                zmm2 = data_143dbb1fc
            else
                zmm3 = data_143dbb1f8
                zmm14 = zmm11
                zmm2 = data_143dbb1fc
                zmm12 = zmm3
                zmm13 = zmm2
            
            zmm1 = zmm15
            zmm1[0] = zmm1[0] f* zmm12.d
            zmm0.d = zmm15.d f* zmm13.d
            zmm1[0] = zmm1[0] f+ *(arg1 + 0x48)
            zmm15.d = zmm15.d f* zmm14.d
            zmm0.d = zmm0.d f+ *(arg1 + 0x4c)
            zmm15.d = zmm15.d f+ *(arg1 + 0x50)
            zmm6.d = zmm6.d f- zmm1[0]
            zmm7.d = zmm7.d f- zmm0.d
            zmm8[0] = zmm8[0] f- zmm15.d
            zmm0.d = zmm6.d f* zmm6.d
            zmm9.d = zmm7.d f* zmm7.d
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm9.d = zmm9.d f+ zmm0.d
            zmm9.d = zmm9.d f+ zmm8[0]
            float result_2
            
            if (not(zmm9.d f!= 1f))
                var_c8.d = zmm6.d
                var_c8:4.d = zmm7.d
                result_2 = zmm8[0]
            else if (zmm9.d f>= 9.99999994e-09f)
                float temp0_7[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9.d)
                zmm3.d = zmm9.d f* zmm4[0]
                zmm0.d = temp0_7.d f* temp0_7[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm4[0] = zmm4[0] - zmm1[0]
                zmm0.d = temp0_7.d f* zmm4[0]
                temp0_7[0] = temp0_7[0] f+ zmm0.d
                temp0_7[0] = temp0_7[0] * temp0_7[0]
                zmm3.d = zmm3.d f* temp0_7[0]
                zmm4[0] = zmm4[0] f- zmm3.d
                zmm0.d = temp0_7.d f* zmm4[0]
                temp0_7[0] = temp0_7[0] f+ zmm0.d
                zmm0.d = temp0_7.d f* zmm6.d
                temp0_7[0] = temp0_7[0] f* zmm7.d
                temp0_7[0] = temp0_7[0] * zmm8[0]
                var_c8.d = zmm0.d
                var_c8:4.d = temp0_7[0]
                result_2 = temp0_7[0]
            else
                var_c8.d = zmm3.d
                var_c8:4.d = zmm2[0]
                result_2 = zmm11.d
            
            result = result_2
            _mm_sqrt_ss(0, zmm9.d)
            *arg3 = var_c8
else
    zmm13 = var_c8.d
    zmm14 = var_c8:4.d
    zmm5 = rax
    zmm0.d = zmm13.d f* zmm4[0]
    zmm0.d = zmm0.d f+ zmm2[0]
    zmm9.d = zmm6.d f- zmm0.d
    zmm0.d = zmm14.d f* zmm4[0]
    zmm0.d = zmm0.d f+ zmm3.d
    zmm11.d = zmm7.d f- zmm0.d
    zmm0.d = zmm5.d f* zmm4[0]
    zmm0.d = zmm0.d f+ zmm15.d
    zmm2 = zmm11
    zmm2[0] = zmm2[0] f* zmm11.d
    zmm12.d = zmm8.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm9.d
    zmm2[0] = zmm2[0] f+ zmm0.d
    zmm1 = zmm12
    zmm1[0] = zmm1[0] f* zmm12.d
    zmm2[0] = zmm2[0] + zmm1[0]
    zmm1 = *(arg1 + 0x64)
    float arg_10 = zmm1[0]
    
    if (_mm_sqrt_ss(0, zmm2[0]).d f<= zmm1[0])
        float temp0_4[0x4] = _mm_unpacklo_ps(zmm13 ^ 0x80000000, (zmm14 ^ 0x80000000).q)
        result = (zmm5 ^ 0x80000000)[0]
        *arg3 = temp0_4.q
    else
        zmm13 = data_143dbb200
        zmm14 = data_143dbb1fc
        zmm15 = data_143dbb1f8
        zmm4 = 0x3f000000
        
        if (not(zmm2[0] == 1f))
            if (zmm2[0] >= 9.99999994e-09f)
                zmm4 = 0x3f000000
                zmm0 = zmm2
                float temp0_1[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0.d)
                zmm2 = 0x3f000000
                zmm3.d = zmm0.d f* 0.5f
                zmm0.d = temp0_1.d f* temp0_1[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2[0] = 0.5f - zmm1[0]
                zmm0.d = temp0_1.d f* zmm2[0]
                temp0_1[0] = temp0_1[0] f+ zmm0.d
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                zmm3.d = zmm3.d f* temp0_1[0]
                zmm1 = arg_10
                zmm4[0] = 0.5f f- zmm3.d
                zmm3 = arg_8
                zmm0.d = temp0_1.d f* zmm4[0]
                zmm4 = 0x3f000000
                temp0_1[0] = temp0_1[0] f+ zmm0.d
                zmm9.d = zmm9.d f* temp0_1[0]
                zmm11.d = zmm11.d f* temp0_1[0]
                zmm12.d = zmm12.d f* temp0_1[0]
            else
                zmm9 = zmm15
                zmm11 = zmm14
                zmm12 = zmm13
        
        zmm9.d = zmm9.d f* zmm1[0]
        zmm11.d = zmm11.d f* zmm1[0]
        zmm9.d = zmm9.d f+ *(arg1 + 0x20)
        zmm12.d = zmm12.d f* zmm1[0]
        zmm11.d = zmm11.d f+ zmm3.d
        zmm12.d = zmm12.d f+ *(arg1 + 0x28)
        zmm6.d = zmm6.d f- zmm9.d
        zmm7.d = zmm7.d f- zmm11.d
        zmm8[0] = zmm8[0] f- zmm12.d
        zmm0.d = zmm6.d f* zmm6.d
        zmm9.d = zmm7.d f* zmm7.d
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm9.d = zmm9.d f+ zmm0.d
        zmm9.d = zmm9.d f+ zmm8[0]
        
        if (zmm9.d f== 1f)
            goto label_141747d3f
        
        float result_1
        
        if (zmm9.d f>= 9.99999994e-09f)
            float temp0_2[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9.d)
            zmm3.d = zmm9.d f* zmm4[0]
            zmm0.d = temp0_2.d f* temp0_2[0]
            zmm1 = zmm3
            zmm1[0] = zmm1[0] f* zmm0.d
            zmm4[0] = zmm4[0] - zmm1[0]
            zmm0.d = temp0_2.d f* zmm4[0]
            temp0_2[0] = temp0_2[0] f+ zmm0.d
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm3.d = zmm3.d f* temp0_2[0]
            zmm4[0] = zmm4[0] f- zmm3.d
            zmm0.d = temp0_2.d f* zmm4[0]
            temp0_2[0] = temp0_2[0] f+ zmm0.d
            zmm6.d = zmm6.d f* temp0_2[0]
            zmm7.d = zmm7.d f* temp0_2[0]
            zmm8[0] = zmm8[0] * temp0_2[0]
        label_141747d3f:
            result_1 = zmm8[0]
            var_c8:4.d = zmm7.d
            var_c8.d = zmm6.d
        else
            var_c8.d = zmm15.d
            var_c8:4.d = zmm14.d
            result_1 = zmm13.d
        
        result = result_1
        _mm_sqrt_ss(0, zmm9.d)
        *arg3 = var_c8
arg3[1].d = result
return result
