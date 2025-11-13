// 函数: sub_141746970
// 地址: 0x141746970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *(arg1 + 0x24)
uint128_t zmm6 = *arg2
uint128_t zmm7 = *(arg2 + 4)
uint128_t zmm8 = *(arg2 + 8)
uint128_t zmm4
zmm4.d = zmm7.d f- zmm2.d
zmm4.d = zmm4.d f* *(arg1 + 0x30)
int32_t rax = *(arg1 + 0x34)
uint64_t var_c8 = *(arg1 + 0x2c)
int128_t zmm14 = *(arg1 + 0x28)
uint128_t zmm1
zmm1.d = zmm8.d f- zmm14.d
int128_t zmm15 = *(arg1 + 0x20)
uint128_t result
result.d = zmm6.d f- zmm15.d
zmm1.d = zmm1.d f* *(arg1 + 0x34)
result.d = result.d f* *(arg1 + 0x2c)
zmm4.d = zmm4.d f+ result.d
zmm4.d = zmm4.d f+ zmm1.d
uint128_t zmm3
uint128_t zmm5
uint128_t result_1
uint128_t zmm10
uint128_t zmm11
uint128_t zmm12
uint128_t result_2

if (zmm4.d f>= 0f)
    result_1 = *(arg1 + 0x48)
    zmm10 = *(arg1 + 0x4c)
    zmm11 = *(arg1 + 0x50)
    zmm5.d = zmm7.d f- zmm10.d
    int32_t rax_3 = *(arg1 + 0x5c)
    zmm1.d = zmm8.d f- zmm11.d
    uint64_t var_b8_1 = *(arg1 + 0x54)
    result.d = zmm6.d f- result_1.d
    zmm5.d = zmm5.d f* *(arg1 + 0x58)
    zmm1.d = zmm1.d f* *(arg1 + 0x5c)
    result.d = result.d f* *(arg1 + 0x54)
    zmm5.d = zmm5.d f+ result.d
    zmm5.d = zmm5.d f+ zmm1.d
    
    if (zmm5.d f>= 0f)
        zmm10 = var_c8.d
        zmm11 = var_c8:4.d
        zmm12 = rax
        result.d = zmm10.d f* zmm4.d
        result.d = result.d f+ zmm15.d
        zmm6.d = zmm6.d f- result.d
        result.d = zmm11.d f* zmm4.d
        result.d = result.d f+ zmm2.d
        zmm7.d = zmm7.d f- result.d
        result.d = zmm12.d f* zmm4.d
        result.d = result.d f+ zmm14.d
        zmm2.d = zmm7.d f* zmm7.d
        zmm8.d = zmm8.d f- result.d
        result.d = zmm6.d f* zmm6.d
        zmm2.d = zmm2.d f+ result.d
        zmm1.d = zmm8.d f* zmm8.d
        zmm2.d = zmm2.d f+ zmm1.d
        result_2.d = _mm_sqrt_ss(0, zmm2.d).d f- *(arg1 + 0x64)
        
        if (not(result_2.d f>= 0f))
            result_1 = _mm_min_ss(zmm5.d, zmm4.d)
        
        int32_t rax_6
        
        if (result_2.d f>= 0f || result_1.d f>= (result_2 ^ 0x80000000).d)
            int32_t var_c0_2
            
            if (zmm2.d f!= 1f)
                if (zmm2.d f>= 9.99999994e-09f)
                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                    zmm3.d = zmm2.d f* 0.5f
                    result.d = zmm5.d f* zmm5.d
                    zmm1.d = zmm3.d f* result.d
                    zmm2.d = 0.5f f- zmm1.d
                    result.d = zmm5.d f* zmm2.d
                    zmm5.d = zmm5.d f+ result.d
                    zmm1.d = zmm5.d f* zmm5.d
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4.d = 0.5f f- zmm3.d
                    result.d = zmm5.d f* zmm4.d
                    zmm5.d = zmm5.d f+ result.d
                    zmm1 = zmm5
                    result.d = zmm5.d f* zmm6.d
                    zmm5.d = zmm5.d f* zmm8.d
                    var_c8.d = result.d
                    zmm1.d = zmm1.d f* zmm7.d
                    var_c0_2 = zmm5.d
                else
                    zmm1 = data_143dbb1fc
                    var_c8.d = data_143dbb1f8.d
                    var_c0_2 = data_143dbb200.d
                
                var_c8:4.d = zmm1.d
            else
                var_c8.d = zmm6.d
                var_c8:4.d = zmm7.d
                var_c0_2 = zmm8.d
            
            zmm1 = zx.o(var_c8)
            result = result_2
            rax_6 = var_c0_2
        else if (zmm4.d f>= zmm5.d)
            var_c8.d = (var_b8_1.d ^ 0x80000000).d
            var_c8:4.d = (var_b8_1:4.d ^ 0x80000000).d
            result = result_1 ^ 0x80000000
            zmm1 = zx.o(var_c8)
            rax_6 = (rax_3 ^ 0x80000000).d
        else
            var_b8_1.d = (zmm10 ^ 0x80000000).d
            var_b8_1:4.d = (zmm11 ^ 0x80000000).d
            zmm1 = zx.o(var_b8_1)
            result = result_1 ^ 0x80000000
            rax_6 = (zmm12 ^ 0x80000000).d
        
        *arg3 = zmm1.q
        arg3[1].d = rax_6
    else
        zmm12 = var_b8_1.d
        result_2 = var_b8_1:4.d
        zmm4 = rax_3
        zmm14 = *(arg1 + 0x64)
        result.d = zmm12.d f* zmm5.d
        result.d = result.d f+ result_1.d
        result_1.d = zmm6.d f- result.d
        result.d = result_2.d f* zmm5.d
        result.d = result.d f+ zmm10.d
        zmm10.d = zmm7.d f- result.d
        result.d = zmm4.d f* zmm5.d
        result.d = result.d f+ zmm11.d
        zmm2.d = zmm10.d f* zmm10.d
        zmm11.d = zmm8.d f- result.d
        result.d = result_1.d f* result_1.d
        zmm2.d = zmm2.d f+ result.d
        zmm1.d = zmm11.d f* zmm11.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (_mm_sqrt_ss(0, zmm2.d).d f<= zmm14.d)
            result = zmm5 ^ 0x80000000
            *arg3 = (_mm_unpacklo_ps(zmm12 ^ 0x80000000, (result_2 ^ 0x80000000).q)).q
            arg3[1].d = (zmm4 ^ 0x80000000).d
        else
            if (not(zmm2.d f== 1f))
                if (zmm2.d f>= 9.99999994e-09f)
                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                    zmm3.d = zmm2.d f* 0.5f
                    result.d = zmm5.d f* zmm5.d
                    zmm1.d = zmm3.d f* result.d
                    zmm2.d = 0.5f f- zmm1.d
                    result.d = zmm5.d f* zmm2.d
                    zmm5.d = zmm5.d f+ result.d
                    zmm1.d = zmm5.d f* zmm5.d
                    zmm3.d = zmm3.d f* zmm1.d
                    zmm4.d = 0.5f f- zmm3.d
                    result.d = zmm5.d f* zmm4.d
                    zmm5.d = zmm5.d f+ result.d
                    result.d = zmm5.d f* result_1.d
                    zmm1.d = zmm5.d f* zmm10.d
                    zmm5.d = zmm5.d f* zmm11.d
                    result_1 = result
                    zmm10 = zmm1
                    zmm11 = zmm5
                else
                    result_1 = data_143dbb1f8
                    zmm10 = data_143dbb1fc
                    zmm11 = data_143dbb200
            
            result_1.d = result_1.d f* zmm14.d
            zmm10.d = zmm10.d f* zmm14.d
            result_1.d = result_1.d f+ *(arg1 + 0x48)
            zmm11.d = zmm11.d f* zmm14.d
            zmm10.d = zmm10.d f+ *(arg1 + 0x4c)
            zmm11.d = zmm11.d f+ *(arg1 + 0x50)
            zmm6.d = zmm6.d f- result_1.d
            zmm7.d = zmm7.d f- zmm10.d
            zmm8.d = zmm8.d f- zmm11.d
            *arg3 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
            arg3[1].d = zmm8.d
            int512_t zmm5_1
            result, zmm5_1 = sub_141750780(arg3)
            zmm5_1.o = result
else
    zmm12 = var_c8.d
    result_2 = var_c8:4.d
    zmm5 = rax
    result.d = zmm12.d f* zmm4.d
    result.d = result.d f+ zmm15.d
    result_1.d = zmm6.d f- result.d
    result.d = result_2.d f* zmm4.d
    result.d = result.d f+ zmm2.d
    zmm10.d = zmm7.d f- result.d
    result.d = zmm5.d f* zmm4.d
    result.d = result.d f+ zmm14.d
    zmm14 = *(arg1 + 0x64)
    zmm2.d = zmm10.d f* zmm10.d
    zmm11.d = zmm8.d f- result.d
    result.d = result_1.d f* result_1.d
    zmm2.d = zmm2.d f+ result.d
    zmm1.d = zmm11.d f* zmm11.d
    zmm2.d = zmm2.d f+ zmm1.d
    
    if (_mm_sqrt_ss(0, zmm2.d).d f<= zmm14.d)
        result = zmm4 ^ 0x80000000
        *arg3 = (_mm_unpacklo_ps(zmm12 ^ 0x80000000, (result_2 ^ 0x80000000).q)).q
        arg3[1].d = (zmm5 ^ 0x80000000).d
    else
        if (not(zmm2.d f== 1f))
            if (zmm2.d f>= 9.99999994e-09f)
                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                zmm3.d = zmm2.d f* 0.5f
                result.d = zmm5.d f* zmm5.d
                zmm1.d = zmm3.d f* result.d
                zmm2.d = 0.5f f- zmm1.d
                result.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ result.d
                zmm1.d = zmm5.d f* zmm5.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm4.d = 0.5f f- zmm3.d
                result.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ result.d
                result.d = zmm5.d f* result_1.d
                zmm1.d = zmm5.d f* zmm10.d
                zmm5.d = zmm5.d f* zmm11.d
                result_1 = result
                zmm10 = zmm1
                zmm11 = zmm5
            else
                result_1 = data_143dbb1f8
                zmm10 = data_143dbb1fc
                zmm11 = data_143dbb200
        
        result_1.d = result_1.d f* zmm14.d
        zmm10.d = zmm10.d f* zmm14.d
        zmm11.d = zmm11.d f* zmm14.d
        result_1.d = result_1.d f+ zmm15.d
        zmm10.d = zmm10.d f+ *(arg1 + 0x24)
        zmm11.d = zmm11.d f+ *(arg1 + 0x28)
        zmm6.d = zmm6.d f- result_1.d
        zmm7.d = zmm7.d f- zmm10.d
        zmm8.d = zmm8.d f- zmm11.d
        *arg3 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
        arg3[1].d = zmm8.d
        int512_t zmm4_1
        result, zmm4_1 = sub_141750780(arg3)
        zmm4_1.o = result
return result
