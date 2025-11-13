// 函数: sub_1426cd370
// 地址: 0x1426cd370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0xb8)

if (rdi != 0)
    uint128_t zmm2 = data_143dbb1f8
    float zmm1 = data_143dbb1fc
    int32_t zmm0 = data_143dbb200
    uint64_t rdx = zx.q(*(arg1 + 0x90))
    int32_t var_58 = zmm2.d
    int32_t var_68 = zmm2.d
    
    if (sub_1426b2560(rdi, rdx, &var_58) != 0
            && sub_1426b2560(rdi, zx.q(*(arg1 + 0xb8)), &var_68) != 0)
        uint128_t zmm6
        zmm6.d = var_68.d f- var_58
        uint128_t zmm7
        zmm7.d = zmm1.d f- zmm1
        int128_t zmm8
        zmm8.d = zmm0.d f- zmm0
        uint128_t zmm0_1
        zmm0_1.d = zmm6.d f* zmm6.d
        zmm2.d = zmm7.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
        
        if (zmm2.d f== 1f)
            goto label_1426cd507
        
        int32_t var_60_2
        
        if (zmm2.d f>= 9.99999994e-09f)
            float zmm3 = zmm2.d
            float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
            zmm3 = zmm3 * 0.5f
            zmm0_1.d = temp0_1.d f* temp0_1[0]
            zmm2.d = 0.5f - zmm3 f* zmm0_1.d
            zmm0_1.d = temp0_1.d f* zmm2.d
            temp0_1[0] = temp0_1[0] f+ zmm0_1.d
            zmm0_1.d = temp0_1.d f* (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
            temp0_1[0] = temp0_1[0] f+ zmm0_1.d
            zmm6.d = zmm6.d f* temp0_1[0]
            zmm7.d = zmm7.d f* temp0_1[0]
            zmm8.d = zmm8.d f* temp0_1[0]
        label_1426cd507:
            var_60_2 = zmm8.d
            int32_t var_64_3 = zmm7.d
            var_68 = zmm6.d
        else
            zmm1 = data_143dbb1fc
            var_68 = data_143dbb1f8.d
            var_60_2 = data_143dbb200.d
            float var_64_2 = zmm1
        
        *arg3 = var_68.q
        arg3[1].d = var_60_2
        int32_t result
        result.b = 1
        return result

return 0
