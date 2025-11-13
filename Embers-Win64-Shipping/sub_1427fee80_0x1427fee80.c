// 函数: sub_1427fee80
// 地址: 0x1427fee80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_138[0x4]
float var_118
int32_t var_e0
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_1427eba20(arg1, arg2, arg3, &var_e0, &var_118, &var_138)
int32_t var_128
float zmm4[0x4] = var_128
float var_148
float* result = &var_148
int32_t var_124
float zmm5[0x4] = var_124
int32_t var_120
float zmm6[0x4] = var_120
float zmm3[0x4] = *(arg1 + 0x78)
float zmm1 = zmm6[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm1 = zmm1 * zmm6[0]
zmm4[0] = zmm4[0] + zmm5[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] + zmm1
bool rcx = zmm4[0] > zmm3[0]
float var_144
float var_140
float zmm2[0x4]

if (rcx == 0)
    var_148 = zmm4[0]
    var_144 = zmm5[0]
    var_140 = zmm6[0]
else
    zmm2 = 0x3f800000
    zmm2[0] = 1f / _mm_sqrt_ss(zx.o(0)[0], zmm4[0])[0]
    zmm1 = zmm2[0] * zmm4[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm6[0]
    zmm1 = zmm1 * zmm3[0]
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm2[0] = zmm2[0] * zmm3[0]
    var_148 = zmm1
    var_144 = zmm2[0]
    var_140 = zmm2[0]

zmm2 = var_140
float arg_8 = zmm2[0]
float var_158 = var_148[0]
float var_154 = var_144
float var_150 = zmm2[0]

if (rcx != 0)
    float var_38_1 = zmm7[0]
    float var_48_1 = zmm8[0]
    float var_58_1[0x4] = zmm9
    float var_68_1[0x4] = zmm10
    float var_78_1 = zmm11[0]
    float var_88_1[0x4] = zmm12
    float var_168[0x4] = var_138
    int128_t* rcx_3
    int512_t zmm9_2
    int512_t zmm10_2
    float var_f0
    float zmm7_2
    
    if (arg4 == 0)
        zmm6 = *(arg1 + 0x14)
        zmm8 = *(arg1 + 0x1c)
        zmm2 = zmm6
        zmm10 = *(arg1 + 0x10)
        zmm7 = *(arg1 + 0x18)
        zmm1 = zmm7[0]
        zmm5 = *(arg1 + 0x20) ^ 0x80000000
        zmm3 = *(arg1 + 0x28)
        zmm4 = *(arg1 + 0x24) ^ 0x80000000
        zmm5[0] = zmm5[0] * 2f
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm3 ^= 0x80000000
        zmm4[0] = zmm4[0] * 2f
        zmm10[0] = zmm10[0] * zmm5[0]
        zmm8[0] = zmm8[0] - 0.5f
        zmm3[0] = zmm3[0] * 2f
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm1 = zmm1 * zmm3[0]
        zmm2[0] = zmm2[0] + zmm10[0]
        arg_8 = zmm8[0]
        zmm8[0] = zmm8[0] * zmm5[0]
        zmm7[0] = zmm7[0] * zmm4[0]
        zmm2[0] = zmm2[0] + zmm1
        var_168[0] = (zmm10 ^ 0x80000000)[0]
        zmm1 = zmm6[0] * zmm3[0]
        zmm12 = var_138[0] ^ 0x80000000
        var_168[1] = (zmm6 ^ 0x80000000)[0]
        var_168[2] = (zmm7 ^ 0x80000000)[0]
        zmm1 = zmm1 - zmm7[0]
        var_168[3] = zmm8[0]
        var_f0 = zmm12[0]
        zmm10[0] = zmm10[0] * zmm2[0]
        zmm8[0] = zmm8[0] - zmm1 * zmm8[0]
        zmm1 = zmm7[0] * zmm5[0]
        zmm7[0] = zmm7[0] * zmm2[0]
        zmm8[0] = zmm8[0] + zmm10[0]
        zmm10[0] = zmm10[0] * zmm3[0]
        zmm10[0] = zmm10[0] * zmm4[0]
        zmm1 = zmm1 - zmm10[0]
        float var_f8_1 = zmm8[0]
        float zmm15[0x4] = arg_8
        float zmm0[0x4] = zmm6
        zmm6[0] = zmm6[0] * zmm5[0]
        zmm15[0] = zmm15[0] * zmm4[0]
        zmm4 = var_f8_1
        zmm10[0] = zmm10[0] - zmm6[0]
        zmm6 = var_138[1]
        zmm0[0] = zmm0[0] * zmm2[0]
        zmm6 ^= 0x80000000
        zmm1 = zmm1 * zmm8[0]
        zmm10[0] = zmm10[0] * zmm8[0]
        zmm15[0] = zmm15[0] - zmm1
        float var_158_2 = zmm4[0]
        float var_ec_1 = zmm6[0]
        zmm15[0] = zmm15[0] + zmm0[0]
        zmm0 = arg_8
        zmm0[0] = zmm0[0] * zmm3[0]
        float var_154_2 = zmm15[0]
        zmm0[0] = zmm0[0] - zmm10[0]
        zmm0[0] = zmm0[0] + zmm7[0]
        float var_150_2 = zmm0[0]
        zmm9 = var_138[3]
        zmm8 = var_138[2]
        zmm4[0] = zmm4[0] - var_148
        zmm15[0] = zmm15[0] - var_144
        zmm0[0] = zmm0[0] - var_140
        float var_e4_1 = zmm9[0]
        zmm8 ^= 0x80000000
        zmm4[0] = zmm4[0] * 2f
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm1 = zmm8[0]
        zmm0[0] = zmm0[0] * 2f
        zmm12[0] = zmm12[0] * zmm4[0]
        zmm9[0] = zmm9[0] - 0.5f
        zmm1 = zmm1 * zmm0[0]
        zmm6[0] = zmm6[0] * zmm0[0]
        zmm15[0] = zmm15[0] * 2f
        zmm8[0] = zmm8[0] * zmm4[0]
        zmm6[0] = zmm6[0] * zmm15[0]
        float var_e8_1 = zmm8[0]
        zmm6[0] = zmm6[0] + zmm12[0]
        zmm8[0] = zmm8[0] * zmm15[0]
        zmm6[0] = zmm6[0] - zmm8[0]
        zmm6[0] = zmm6[0] + zmm1
        zmm9[0] = zmm9[0] * zmm4[0]
        zmm1 = zmm12[0]
        zmm6[0] = zmm6[0] * zmm9[0]
        zmm1 = zmm1 * zmm6[0]
        zmm6[0] = zmm6[0] + zmm9[0]
        zmm8[0] = zmm8[0] * zmm6[0]
        zmm12[0] = zmm12[0] * zmm15[0]
        zmm12[0] = zmm12[0] * zmm0[0]
        zmm6[0] = zmm6[0] + zmm1
        zmm1 = zmm6[0]
        zmm6[0] = zmm6[0] * zmm4[0]
        zmm8[0] = zmm8[0] - zmm12[0]
        zmm1 = zmm1 * zmm6[0]
        zmm12[0] = zmm12[0] - zmm6[0]
        zmm9[0] = zmm9[0] * zmm0[0]
        zmm8[0] = zmm8[0] * zmm9[0]
        zmm12[0] = zmm12[0] * zmm9[0]
        zmm9[0] = zmm9[0] * zmm15[0]
        zmm12[0] = zmm12[0] + zmm9[0]
        zmm8[0] = zmm8[0] + zmm9[0]
        zmm12[0] = zmm12[0] + zmm8[0]
        zmm8[0] = zmm8[0] + zmm1
        float* rax_1
        float zmm10_3
        float zmm11_3[0x4]
        rax_1, zmm10_3, zmm11_3 = sub_1417c7990(&var_f0, &var_148, &var_168)
        int32_t var_10c
        float zmm6_3[0x4] = var_10c
        float zmm3_2 = var_118
        float zmm9_3[0x4] = zmm6_3
        var_168 = *rax_1
        float var_158_3 = zmm10_3
        zmm10_3 = zmm10_3 + zmm10_3
        float var_154_3 = zmm11_3[0]
        zmm11_3[0] = zmm11_3[0] + zmm11_3[0]
        float var_150_3 = zmm12[0]
        zmm12[0] = zmm12[0] + zmm12[0]
        zmm9_3[0] = zmm9_3[0] * zmm6_3[0]
        zmm9_3[0] = zmm9_3[0] - 0.5f
        float var_114
        zmm11_3[0] = zmm11_3[0] * var_114
        float var_110
        float zmm8_3 = zmm10_3 * zmm3_2 + zmm11_3[0] + zmm12[0] * var_110
        zmm11_3[0] = zmm11_3[0] * var_110
        float zmm5_2 = zmm12[0] * var_114 - zmm11_3[0]
        zmm9_3[0] = zmm9_3[0] * zmm10_3
        zmm5_2 = zmm5_2 * zmm6_3[0] + zmm9_3[0]
        zmm12[0] = zmm12[0] * zmm3_2
        zmm12[0]
        zmm9_3[0] = zmm9_3[0] * zmm11_3[0]
        zmm11_3[0] = zmm11_3[0] * zmm3_2
        zmm6_3[0]
        zmm11_3[0] = zmm11_3[0] - zmm10_3 * var_114
        zmm9_3[0]
        zmm9_3[0] = zmm9_3[0] * zmm12[0]
        zmm11_3[0] = zmm11_3[0] * zmm6_3[0]
        int32_t var_108
        zmm6_3 = var_108
        zmm6_3[0] = zmm6_3[0] + zmm5_2 + zmm8_3 * zmm3_2
        zmm11_3[0] = zmm11_3[0] + zmm9_3[0]
        zmm11_3[0] = zmm11_3[0] + zmm8_3 * var_110
        int32_t var_100
        zmm11_3[0] = zmm11_3[0] f+ var_100
        int32_t zmm6_4
        float zmm11_2
        result, zmm6_4, zmm7_2, zmm9_2, zmm10_2, zmm11_2 =
            sub_1417c7990(&var_118, &var_f0, &var_168)
        rcx_3 = arg2
        *arg2 = *result
        arg2[1].d = zmm6_4
        *(arg2 + 0x14) = zmm7_2
        *(arg2 + 0x18) = zmm11_2
    else
        zmm7 = *(arg1 + 0x34)
        zmm8 = *(arg1 + 0x38)
        zmm1 = zmm7[0]
        zmm10 = *(arg1 + 0x2c)
        zmm6 = *(arg1 + 0x30)
        zmm4 = *(arg1 + 0x40) ^ 0x80000000
        zmm3 = *(arg1 + 0x44) ^ 0x80000000
        float var_110_1 = (zmm7 ^ 0x80000000)[0]
        zmm5 = *(arg1 + 0x3c) ^ 0x80000000
        var_118 = (zmm10 ^ 0x80000000)[0]
        float var_10c_1 = zmm8[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm3[0] = zmm3[0] * 2f
        zmm8[0] = zmm8[0] - 0.5f
        zmm4[0] = zmm4[0] * 2f
        zmm5[0] = zmm5[0] * 2f
        zmm1 = zmm1 * zmm3[0]
        zmm6[0] = zmm6[0] * zmm4[0]
        zmm10[0] = zmm10[0] * zmm5[0]
        zmm8[0] = zmm8[0] * zmm3[0]
        zmm6[0] = zmm6[0] + zmm10[0]
        zmm8[0] = zmm8[0] * zmm4[0]
        zmm8[0] = zmm8[0] * zmm5[0]
        zmm7[0] = zmm7[0] * zmm4[0]
        zmm6[0] = zmm6[0] + zmm1
        float var_114_1 = (zmm6 ^ 0x80000000)[0]
        zmm1 = zmm6[0] * zmm3[0] - zmm7[0]
        zmm10[0] = zmm10[0] * zmm6[0]
        zmm8[0] = zmm8[0] - zmm1 * zmm8[0]
        zmm1 = zmm7[0]
        zmm7[0] = zmm7[0] * zmm6[0]
        zmm1 = zmm1 * zmm5[0]
        zmm8[0] = zmm8[0] + zmm10[0]
        zmm10[0] = zmm10[0] * zmm3[0]
        zmm10[0] = zmm10[0] * zmm4[0]
        zmm4 = var_138[1]
        zmm1 = zmm1 - zmm10[0]
        float var_108_1 = zmm8[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm6[0] = zmm6[0] * zmm5[0]
        zmm1 = zmm1 * zmm8[0]
        zmm10[0] = zmm10[0] - zmm6[0]
        zmm8[0] = zmm8[0] - zmm1
        zmm10[0] = zmm10[0] * zmm8[0]
        zmm8[0] = zmm8[0] + zmm6[0]
        zmm8[0] = zmm8[0] - zmm10[0]
        float var_104_1 = zmm8[0]
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm8[0] = zmm8[0] + zmm7[0]
        zmm7 = var_138[3]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm4[0] = zmm4[0] * zmm8[0]
        float var_100_1 = zmm8[0]
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm7[0] = zmm7[0] - 0.5f
        zmm5 = var_138[2]
        float zmm13[0x4] = var_138[0]
        zmm13[0] = zmm13[0] * zmm8[0]
        zmm1 = zmm5[0] * zmm8[0]
        zmm4[0] = zmm4[0] + zmm13[0]
        zmm4[0] = zmm4[0] * zmm8[0]
        zmm5[0] = zmm5[0] * zmm8[0]
        zmm4[0] = zmm4[0] + zmm1
        zmm5[0] = zmm5[0] * zmm8[0]
        zmm4[0] = zmm4[0] - zmm5[0]
        zmm1 = zmm13[0]
        zmm7[0] = zmm7[0] * zmm8[0]
        zmm1 = zmm1 * zmm4[0]
        zmm4[0] = zmm4[0] * zmm7[0]
        zmm5[0] = zmm5[0] * zmm4[0]
        zmm4[0] = zmm4[0] + zmm7[0]
        zmm13[0] = zmm13[0] * zmm8[0]
        zmm13[0] = zmm13[0] * zmm8[0]
        zmm4[0] = zmm4[0] + zmm1
        zmm1 = zmm4[0]
        zmm4[0] = zmm4[0] * zmm8[0]
        zmm5[0] = zmm5[0] - zmm13[0]
        zmm1 = zmm1 * zmm4[0]
        zmm13[0] = zmm13[0] - zmm4[0]
        zmm7[0] = zmm7[0] * zmm8[0]
        zmm4[0] = zmm4[0] + var_148
        zmm5[0] = zmm5[0] * zmm7[0]
        zmm13[0] = zmm13[0] * zmm7[0]
        zmm7[0] = zmm7[0] * zmm8[0]
        zmm13[0] = zmm13[0] + zmm7[0]
        zmm5[0] = zmm5[0] + zmm7[0]
        zmm13[0] = zmm13[0] + zmm5[0]
        zmm5[0] = zmm5[0] + zmm1
        zmm13[0] = zmm13[0] + arg_8
        zmm5[0] = zmm5[0] + var_144
        float* rax
        float zmm10_1
        float zmm11_1
        rax, zmm10_1, zmm11_1 = sub_1417c7990(&var_168, &var_f0, &var_118)
        int32_t var_d4
        float zmm7_1[0x4] = var_d4
        float zmm8_1[0x4] = zmm7_1
        float zmm9_1[0x4] = var_e0
        int32_t var_d8
        float zmm5_1[0x4] = var_d8
        var_168 = *rax
        zmm8_1[0] = zmm8_1[0] * zmm7_1[0]
        float zmm1_1 = zmm5_1[0]
        float var_158_1 = zmm11_1
        zmm11_1 = zmm11_1 + zmm11_1
        float var_154_1 = zmm10_1
        zmm8_1[0] = zmm8_1[0] - 0.5f
        zmm10_1 = zmm10_1 + zmm10_1
        float var_150_1 = zmm13[0]
        zmm13[0] = zmm13[0] + zmm13[0]
        zmm9_1[0] = zmm9_1[0] * zmm11_1
        float var_dc
        float zmm3_1 = var_dc * zmm13[0]
        float zmm6_1 = var_dc * zmm10_1 + zmm9_1[0]
        zmm1_1 = zmm1_1 * zmm13[0]
        zmm5_1[0] = zmm5_1[0] * zmm10_1
        zmm6_1 = zmm6_1 + zmm1_1
        zmm1_1 = zmm9_1[0]
        zmm3_1 = zmm3_1 - zmm5_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm11_1
        zmm3_1 = zmm3_1 * zmm7_1[0] + zmm8_1[0] + zmm1_1 * zmm6_1
        zmm9_1[0] = zmm9_1[0] * zmm13[0]
        zmm9_1[0] = zmm9_1[0] * zmm10_1
        float zmm2_1 = zmm5_1[0] * zmm11_1 - zmm9_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm6_1
        zmm8_1[0] = zmm8_1[0] * zmm13[0]
        zmm2_1 = zmm2_1 * zmm7_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm10_1
        zmm9_1[0] = zmm9_1[0] - var_dc * zmm11_1
        zmm2_1 = zmm2_1 + zmm8_1[0]
        zmm9_1[0] = zmm9_1[0] * zmm7_1[0]
        int32_t var_cc
        zmm7_1 = var_cc
        zmm9_1[0] = zmm9_1[0] + zmm8_1[0]
        int32_t var_d0
        zmm8_1 = var_d0
        zmm8_1[0] = zmm8_1[0] + zmm3_1
        zmm7_1[0] = zmm7_1[0] + zmm2_1 + var_dc * zmm6_1
        zmm9_1[0] = zmm9_1[0] + zmm5_1[0]
        zmm9_1[0]
        int32_t zmm6_2
        float zmm8_2
        result, zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10_2 = sub_1417c7990(&var_e0, &var_148, &var_168)
        rcx_3 = arg3
        *arg3 = *result
        arg3[1].d = zmm8_2
        *(arg3 + 0x14) = zmm7_2
        *(arg3 + 0x18) = zmm6_2
    sub_1427ed7d0(rcx_3)
    zmm10_2.o = var_68_1
    zmm9_2.o = var_58_1

return result
