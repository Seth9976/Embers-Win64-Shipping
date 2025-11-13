// 函数: sub_141ee6c40
// 地址: 0x141ee6c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
float* result = arg2
*arg2 = *arg3
arg2[1].d = rax
uint128_t zmm2 = arg2[1].d

if (not(zmm2.d f<= 0f))
    uint128_t zmm1
    zmm1.d = arg5.d f* *(arg4 + 8)
    uint128_t zmm0
    zmm0.d = zmm2.d f- zmm1.d
    
    if (not(zmm0.d f<= 9.99999975e-05f))
        uint128_t zmm3
        float zmm4
        
        if (zmm1.d f<= 0f)
            int32_t rax_1 = data_143dbb200
            *arg2 = data_143dbb1f8.q
            arg2[1].d = rax_1
            zmm3 = *arg2
            zmm4 = *(arg2 + 4)
        else
            zmm1.d = zmm1.d f/ zmm2.d
            zmm2.d = zmm2.d f* zmm1.d
            zmm3.d = zmm1.d f* *arg2
            zmm4 = zmm1.d f* *(arg2 + 4)
            *arg2 = zmm3.d
            arg2[1].d = zmm2.d
            *(arg2 + 4) = zmm4
        
        zmm0.d = (*arg3).d f- zmm3.d
        zmm1.d = (*(arg3 + 4)).d f- zmm4
        int32_t var_40_1 = 0
        uint128_t zmm7 = *(arg6 + 4)
        uint128_t zmm6 = *arg6
        int32_t var_44_1 = zmm1.d
        int32_t var_48 = zmm0.d
        zmm1.d = zmm6.d f* zmm6.d
        zmm0.d = zmm7.d f* zmm7.d
        zmm1.d = zmm1.d f+ zmm0.d
        int32_t var_58
        
        if (not(zmm1.d f!= 1f))
            if (0f f!= *(arg6 + 8))
                goto label_141ee6dea
            
            var_58.q = *arg6
            int32_t var_50_1 = *(arg6 + 8)
        else if (zmm1.d f>= 9.99999994e-09f)
            uint128_t zmm5 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
            zmm3.d = zmm1.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- zmm1.d
            zmm0.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm1.d = zmm5.d f* zmm5.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
            zmm5.d = zmm5.d f+ zmm0.d
            zmm6.d = zmm6.d f* zmm5.d
            zmm7.d = zmm7.d f* zmm5.d
        label_141ee6dea:
            int32_t var_54_2 = zmm7.d
            var_58 = zmm6.d
            int32_t var_50_3 = 0
        else
            zmm1 = data_143dbb1fc
            var_58 = data_143dbb1f8.d
            int32_t var_50_2 = data_143dbb200.d
            int32_t var_54_1 = zmm1.d
        
        int64_t var_60_1 = arg7
        float var_38
        sub_141f0cca0(arg1, &var_38, &var_48, 0x3f800000, &var_58)
        float var_34
        float zmm1_1 = var_34 + result[1]
        *result = var_38 + *result
        float var_30
        float zmm0_1 = var_30 + result[2]
        result[1] = zmm1_1
        result[2] = zmm0_1

return result
