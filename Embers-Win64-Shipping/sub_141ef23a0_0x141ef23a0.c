// 函数: sub_141ef23a0
// 地址: 0x141ef23a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = *(arg2 + 4)
uint128_t zmm2 = *arg2
uint128_t zmm1 = *(arg2 + 8)
zmm2.d = zmm2.d f* zmm2.d
result.d = result.d f* result.d
zmm1.d = zmm1.d f* zmm1.d
zmm2.d = zmm2.d f+ result.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f< 9.99999975e-05f))
    if ((*(*arg1 + 0x5d0))() == 0)
        result = zx.o(*arg2)
        arg1[0x74] = result.q
        arg1[0x75].d = *(arg2 + 8)
        *(arg1 + 0x38a) = (*(arg1 + 0x38a) & 0xfb) | arg3 << 2 | 2
        
        if ((*(*arg1 + 0x550))(arg1) != 0)
            arg1[0x75].d = 0
    else
        (*(*arg1 + 0x3f0))(arg1)
        uint128_t result_1 = result
        int32_t var_60_1
        uint128_t zmm6
        
        if (result_1.d f>= 9.99999975e-05f)
            zmm6 = *(arg2 + 8)
            uint128_t zmm8 = *arg2
            uint128_t zmm9 = *(arg2 + 4)
            zmm2.d = zmm8.d f* zmm8.d
            result.d = zmm9.d f* zmm9.d
            zmm1.d = zmm6.d f* zmm6.d
            zmm2.d = zmm2.d f+ result.d
            result.d = result_1.d f* result_1.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (zmm2.d f<= result.d)
                zmm1 = zx.o(*arg2)
                var_60_1 = *(arg2 + 8)
                zmm6 = var_60_1
            else
                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                arg4.d = zmm2.d f* 0.5f
                result.d = zmm5_1.d f* zmm5_1.d
                zmm1.d = arg4.d f* result.d
                zmm2.d = 0.5f f- zmm1.d
                result.d = zmm5_1.d f* zmm2.d
                zmm5_1.d = zmm5_1.d f+ result.d
                zmm1.d = zmm5_1.d f* zmm5_1.d
                arg4.d = arg4.d f* zmm1.d
                result.d = zmm5_1.d f* (0.5f f- arg4.d)
                zmm5_1.d = zmm5_1.d f+ result.d
                zmm5_1.d = zmm5_1.d f* result_1.d
                zmm8.d = zmm8.d f* zmm5_1.d
                zmm9.d = zmm9.d f* zmm5_1.d
                zmm1.d = zmm8.d
                zmm6.d = zmm6.d f* zmm5_1.d
                _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                zmm1.d = zmm9.d
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                var_60_1 = zmm6.d
        else
            arg4 = data_143dbb1fc
            zmm2.d = data_143dbb1f8.d
            zmm6 = data_143dbb200
            _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            zmm2.d = arg4.d
            var_60_1 = zmm6.d
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        
        int32_t var_50_1 = var_60_1
        uint64_t var_58 = zmm1.q
        (*(*arg1 + 0x5c8))(result, zmm1, zmm6, arg4)

return result
