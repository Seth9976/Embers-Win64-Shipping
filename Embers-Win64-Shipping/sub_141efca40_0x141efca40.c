// 函数: sub_141efca40
// 地址: 0x141efca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x16]
float zmm7[0x4] = *(rax + 0x1d0)
float zmm0[0x4] = *(rax + 0x1c0)
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float var_b4 = temp0[0]
float var_b0 = temp0_1[0]
float var_b8 = zmm7[0]
float var_98[0x4] = zmm0
sub_141f231f0(arg1, arg2, &var_98, 1, zmm0[0].q, arg4, arg5, arg3, 0)
uint64_t result = (*(*arg1 + 0x430))(arg1)

if ((*(result + 0x264) & 1) == 0)
    arg5.o = *(arg1[0x16] + 0x1d0)
    arg4.o = arg5.o
    var_98[2] = _mm_shuffle_ps(arg5.o, arg5.o, 0xaa)[0]
    float rax_3 = var_98[2]
    arg4.o = _mm_shuffle_ps(arg4.o, arg5.o, 0x55)
    int64_t var_a8 = (_mm_unpacklo_ps(arg5.o, arg4.q)).q
    float var_a0_1 = rax_3
    var_98[0].q = var_b8.q
    var_98[2] = var_b0
    int512_t zmm1
    int512_t zmm2
    int32_t zmm6_1
    int32_t zmm7_1
    int32_t zmm10_1
    int32_t zmm11_1
    float zmm12_1[0x4]
    zmm1, zmm2, zmm6_1, zmm7_1, zmm10_1, zmm11_1, zmm12_1 =
        sub_141ee1580(arg1, &var_b8, &var_98, &var_a8)
    float zmm0_2[0x4] = arg2[1]
    zmm2.o = *arg2
    zmm1.o = arg2[2]
    result = arg1[0x16]
    float zmm9_1[0x4] = var_b8
    int128_t zmm5_1 = var_b0
    float zmm8_1[0x4] = var_b4
    float zmm4_1[0x4] = *(result + 0x1d0)
    bool cond:0_1 = zmm9_1[0] != zmm4_1[0]
    zmm2.d = zmm2.d f* zmm2.d
    zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
    zmm1.d = zmm1.d f* zmm1.d
    zmm2.d = zmm2.d f+ zmm0_2[0]
    var_98 = zmm4_1
    zmm2.d = zmm2.d f+ zmm1.d
    int32_t temp0_5 = _mm_sqrt_ss(0, zmm2.d)
    
    if ((cond:0_1 || zmm8_1[0] != var_98[1] || not(zmm5_1.d f== var_98[2]))
            && not(temp0_5 f<= 9.99999975e-05f))
        float var_78_1[0x4] = zmm12_1
        zmm2.o = zmm9_1
        zmm2.d = zmm2.d f- zmm4_1[0]
        zmm1.o = zmm5_1
        float temp0_6[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        zmm8_1[0] = zmm8_1[0] - temp0_6[0]
        zmm1.d = zmm1.d f- _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)[0]
        zmm2.d = zmm2.d f* zmm2.d
        zmm0_2 = 0x3f800000
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        zmm1.d = zmm1.d f* zmm1.d
        zmm8_1[0] = zmm8_1[0] f+ zmm2.d
        zmm2.o = zmm4_1
        zmm0_2[0] = 1f f/ temp0_5
        zmm8_1[0] = zmm8_1[0] f+ zmm1.d
        zmm2.o = _mm_shuffle_ps(zmm2.o, zmm4_1, 0xaa)
        zmm1.o = zmm8_1
        zmm2.d = zmm2.d f- zmm11_1
        zmm12_1 = _mm_sqrt_ss(0, zmm8_1[0])
        float temp0_10[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        zmm12_1[0] = zmm12_1[0] * zmm0_2[0]
        temp0_10[0] = temp0_10[0] f- zmm10_1
        zmm1.d = zmm1.d f- _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)[0]
        zmm9_1[0] = zmm9_1[0] - zmm4_1[0]
        temp0_10[0] = temp0_10[0] f* zmm1.d
        zmm1.o = zmm4_1
        zmm1.d = zmm1.d f- zmm7_1
        zmm1.d = zmm1.d f* zmm9_1[0]
        float temp0_12[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        temp0_10[0] = temp0_10[0] f+ zmm1.d
        zmm1.o = zmm5_1
        zmm1.d = zmm1.d f- temp0_12[0]
        zmm2.d = zmm2.d f* zmm1.d
        temp0_10[0] = temp0_10[0] f+ zmm2.d
        
        if (not(temp0_10[0] f<= zmm6_1))
            zmm12_1 = zx.o(0)
        
        zmm0_2 = *(result + 0x1c0)
        zmm9_1[0] = zmm9_1[0] - zmm4_1[0]
        var_98 = zmm0_2
        float temp0_13[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float temp0_14[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        zmm8_1[0] = zmm8_1[0] - temp0_13[0]
        zmm5_1.d = zmm5_1.d f- temp0_14[0]
        var_b8 = zmm9_1[0]
        float var_b4_1 = zmm8_1[0]
        int32_t var_b0_1 = zmm5_1.d
        int512_t zmm0_3
        result, zmm0_3 =
            sub_141f231f0(arg1, &var_b8, &var_98, 1, temp0_13[0].q, zmm1, zmm2, arg3, 0)
        zmm0_3.o = zmm12_1

return result
