// 函数: sub_14229c260
// 地址: 0x14229c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r13 = 0
int128_t zmm12 = arg7
int128_t zmm9
zmm9.d = zmm12.d f* *arg3
int128_t zmm10
zmm10.d = zmm12.d f* arg3[1]
int128_t zmm11
zmm11.d = zmm12.d f* arg3[2]
zmm9.d = zmm9.d f+ *arg2
zmm10.d = zmm10.d f+ arg2[1]
zmm11.d = zmm11.d f+ arg2[2]
int128_t zmm13
zmm13.d = 6.28318548f f/ _mm_cvtepi32_ps(zx.o(arg9)).d

if (arg9 s> 0)
    do
        r13 += 1
        float temp0_1[0x4] = _mm_cvtepi32_ps(zx.o(r13))
        temp0_1[0] = temp0_1[0] f* zmm13.d
        uint128_t zmm0
        float zmm9_1[0x4]
        float zmm10_1[0x4]
        float zmm11_1[0x4]
        int32_t zmm12_1
        uint128_t zmm14_1
        int32_t zmm15_1
        zmm0, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13, zmm14_1, zmm15_1 =
            __libm_sse2_sincosf_(temp0_1)
        float zmm1[0x4] = zmm0
        zmm1[0] = zmm1[0] f* *arg4
        uint128_t zmm2_1
        zmm2_1.d = zmm0.d f* arg4[2]
        uint128_t zmm3_1
        zmm3_1.d = zmm14_1.d f* arg5[1]
        float zmm4_1 = zmm14_1.d * arg5[2]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
        zmm0.d = zmm0.d f* arg4[1]
        int64_t rax_1 = *arg1
        temp0_2[0] = temp0_2[0] f* *arg3
        temp0_2[0] = temp0_2[0] f* arg3[1]
        temp0_2[0] = temp0_2[0] f* arg3[2]
        temp0_2[0] = temp0_2[0] + zmm1[0]
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        temp0_2[0] = temp0_2[0] f+ zmm2_1.d
        zmm2_1.d = zmm14_1.d f* *arg5
        temp0_2[0] = temp0_2[0] f* zmm12_1
        temp0_2[0] = temp0_2[0] f* zmm12_1
        temp0_2[0] = temp0_2[0] f+ *arg2
        temp0_2[0] = temp0_2[0] f* zmm12_1
        temp0_2[0] = temp0_2[0] f+ arg2[1]
        temp0_2[0] = temp0_2[0] f+ arg2[2]
        zmm0.d = temp0_2.d f- zmm2_1.d
        temp0_2[0] = temp0_2[0] f- zmm3_1.d
        int32_t var_118 = zmm0.d
        zmm0.d = temp0_2.d f- zmm4_1
        float var_114_1 = temp0_2[0]
        zmm9_1[0] = zmm9_1[0] f- zmm2_1.d
        int32_t var_110_1 = zmm0.d
        zmm0.d = zmm10_1.d f- zmm3_1.d
        float var_10c = zmm9_1[0]
        zmm11_1[0] = zmm11_1[0] - zmm4_1
        float var_104_1 = zmm11_1[0]
        (*(rax_1 + 0x30))(arg1, &var_10c, &var_118, arg6, arg10, arg11.d, zmm15_1, arg13, var_118, 
            var_110_1, zmm0.d)
        zmm2_1.d = zmm14_1.d f* *arg5
        uint128_t zmm4_2
        zmm4_2.d = zmm14_1.d f* arg5[2]
        zmm3_1.d = zmm14_1.d f* arg5[1]
        zmm0.d = zmm2_1.d f+ temp0_2[0]
        zmm1 = zmm3_1
        zmm1[0] = zmm1[0] + temp0_2[0]
        int32_t var_100 = zmm0.d
        zmm0.d = zmm4_2.d f+ temp0_2[0]
        float var_fc_1 = zmm1[0]
        int32_t var_f8_1 = zmm0.d
        zmm0.d = zmm9_1.d f+ zmm2_1.d
        zmm4_2.d = zmm4_2.d f+ zmm11_1[0]
        int64_t rax_2 = *arg1
        zmm10_1[0] = zmm10_1[0] f+ zmm3_1.d
        int32_t var_f4 = zmm0.d
        float var_f0_1 = zmm10_1[0]
        int32_t var_ec_1 = zmm4_2.d
        (*(rax_2 + 0x30))(arg1, &var_f4, &var_100, arg6, arg10, arg11.d, zmm15_1, arg13)
        int64_t rax_3 = *arg1
        zmm2_1.d = zmm14_1.d f* arg5[2]
        zmm3_1.d = zmm14_1.d f* arg5[1]
        float zmm4_3 = zmm14_1.d * *arg5
        zmm1 = zmm3_1
        zmm1[0] = zmm1[0] + zmm10_1[0]
        zmm0.d = zmm9_1.d f+ zmm4_3
        zmm9_1[0] = zmm9_1[0] - zmm4_3
        zmm10_1[0] = zmm10_1[0] f- zmm3_1.d
        float var_e4_1 = zmm1[0]
        int32_t var_e8 = zmm0.d
        zmm0.d = zmm2_1.d f+ zmm11_1[0]
        float var_dc = zmm9_1[0]
        zmm11_1[0] = zmm11_1[0] f- zmm2_1.d
        float var_d8_1 = zmm10_1[0]
        int32_t var_e0_1 = zmm0.d
        float var_d4_1 = zmm11_1[0]
        result = (*(rax_3 + 0x30))(arg1, &var_dc, &var_e8, arg6, arg10, arg11.d, zmm15_1, arg13)
    while (r13 s< arg9)

return result
