// 函数: sub_141f0d4f0
// 地址: 0x141f0d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xe8) & 0x10) != 0)
    uint128_t zmm2 = *(arg1 + 0xd0)
    float zmm4 = *(arg1 + 0xd4)
    uint128_t zmm5 = *(arg1 + 0xd8)
    uint128_t zmm6 = *arg3
    uint128_t zmm7 = *(arg3 + 4)
    uint128_t zmm0
    zmm0.d = zmm7.d f* zmm4
    int128_t zmm8 = *(arg3 + 8)
    float zmm3 = zmm6.d f* zmm2.d f+ zmm0.d + zmm8.d f* zmm5.d
    zmm2.d = zmm2.d f* zmm3
    zmm6.d = zmm6.d f- zmm2.d
    zmm5.d = zmm5.d f* zmm3
    zmm7.d = zmm7.d f- zmm4 * zmm3
    zmm8.d = zmm8.d f- zmm5.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm2.d = zmm7.d f* zmm7.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
    
    if (zmm2.d f== 1f)
        goto label_141f0d634
    
    int32_t var_48_1
    int32_t var_40_1
    
    if (zmm2.d f>= 9.99999994e-09f)
        zmm3 = zmm2.d
        zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3)
        zmm3 = zmm3 * 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm2.d = 0.5f - zmm3 f* zmm0.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm0.d = zmm5.d f* (0.5f - zmm3 * zmm5.d f* zmm5.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm7.d = zmm7.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
    label_141f0d634:
        var_40_1 = zmm8.d
        int32_t var_44_2 = zmm7.d
        var_48_1 = zmm6.d
    else
        var_48_1 = data_143dbb1f8.d
        var_40_1 = data_143dbb200.d
        float var_44_1 = data_143dbb1fc
    
    *arg3 = var_48_1.q
    *(arg3 + 8) = var_40_1

int32_t rax_2 = *(arg3 + 8)
*arg2 = *arg3
arg2[1].d = rax_2
return arg2
