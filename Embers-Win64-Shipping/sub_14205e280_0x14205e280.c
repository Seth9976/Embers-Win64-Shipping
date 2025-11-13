// 函数: sub_14205e280
// 地址: 0x14205e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x5e0) & 2) != 0)
    float zmm4 = *(arg2 + 0xc)
    int64_t zmm5 = arg2[1].d
    int128_t zmm6 = *(arg2 + 0x14)
    int128_t zmm7 = *arg2
    int128_t zmm8 = *(arg2 + 4)
    int64_t zmm1
    zmm1.d = zmm5.d f- zmm8.d
    int128_t zmm9 = *(arg2 + 8)
    float zmm3 = (zmm4 f- zmm7.d) * -0.25f
    zmm1.d = zmm1.d f* -0.25f
    float zmm2 = (zmm6.d f- zmm9.d) * -0.25f
    zmm4 = zmm4 + zmm3
    zmm5.d = zmm5.d f+ zmm1.d
    zmm7.d = zmm7.d f- zmm3
    zmm6.d = zmm6.d f+ zmm2
    zmm9.d = zmm9.d f- zmm2
    float var_5c_1 = zmm4
    zmm8.d = zmm8.d f- zmm1.d
    int32_t var_54_1 = zmm6.d
    int32_t var_60_1 = zmm9.d
    int32_t var_64_1 = zmm8.d
    
    if (*(arg1 + 0x5fc) == 0)
        *(arg1 + 0x5e4) = zmm7.d.o
        *(arg1 + 0x5f4) = zmm5.d.q
        *(arg1 + 0x5fc) = 1.d
    else
        zmm1 = *(arg1 + 0x5e8)
        float temp0_1[0x4] = _mm_min_ss((*(arg1 + 0x5e4))[0], zmm7.d)
        int64_t temp0_2 = _mm_min_ss(zmm1.d, zmm8.d)
        *(arg1 + 0x5e4) = temp0_1[0]
        float zmm0[0x4] = *(arg1 + 0x5ec)
        *(arg1 + 0x5e8) = temp0_2.d
        float temp0_3[0x4] = _mm_min_ss(zmm0[0], zmm9.d)
        int64_t temp0_4 = _mm_max_ss((*(arg1 + 0x5f0)).d, zmm4)
        *(arg1 + 0x5ec) = temp0_3[0]
        zmm0 = *(arg1 + 0x5f4)
        *(arg1 + 0x5f0) = temp0_4.d
        float temp0_5[0x4] = _mm_max_ss(zmm0[0], zmm5.d)
        int64_t temp0_6 = _mm_max_ss((*(arg1 + 0x5f8)).d, zmm6.d)
        *(arg1 + 0x5f4) = temp0_5[0]
        *(arg1 + 0x5f8) = temp0_6.d
else if (*(*(arg1 + 0x540) + 8) != 0)
    return sub_142058770(arg1, arg2, 0, arg3) __tailcall
