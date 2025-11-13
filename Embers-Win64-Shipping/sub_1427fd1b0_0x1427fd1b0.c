// 函数: sub_1427fd1b0
// 地址: 0x1427fd1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_128
float var_108
int32_t var_e8
sub_1427eba20(arg1, arg2, arg3, &var_e8, &var_128, &var_108)
int32_t var_f4
float zmm5[0x4] = var_f4
int32_t var_f8
float zmm6[0x4] = var_f8
int32_t var_f0
float zmm7[0x4] = var_f0
float zmm4[0x4] = *(arg1 + 0x84)
float zmm1 = zmm7[0]
float zmm3[0x4] = 0x3f800000
zmm6[0] = zmm6[0] * zmm6[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm1 = zmm1 * zmm7[0]
zmm5[0] = zmm5[0] + zmm6[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm5[0] = zmm5[0] + zmm1
int64_t rsi
rsi.b = zmm5[0] > zmm4[0]
float var_138
float var_134
float var_130

if (rsi.b == 0)
    var_138 = zmm6[0]
    var_134 = zmm5[0]
    var_130 = zmm7[0]
else
    float zmm2[0x4] = 0x3f800000
    zmm2[0] = 1f / _mm_sqrt_ss(zx.o(0)[0], zmm5[0])[0]
    zmm1 = zmm2[0] * zmm6[0]
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm2[0] = zmm2[0] * zmm7[0]
    zmm1 = zmm1 * zmm4[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    var_138 = zmm1
    var_134 = zmm2[0]
    var_130 = zmm2[0]

float zmm10[0x4] = var_108
int32_t var_fc
float zmm12[0x4] = var_fc
float var_150 = var_130[0]
float var_158 = var_138[0]
float var_154 = var_134
float var_178[0x4]

if (zmm10[0] == 0f)
    var_178 = data_142d3f660
else
    zmm1 = zmm12[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    float temp0_2[0x4] = _mm_sqrt_ss(0, zmm1 * zmm12[0] + zmm10[0])
    zmm1 = zmm10[0]
    zmm3[0] = 1f / temp0_2[0]
    zmm1 = zmm1 * zmm3[0]
    zmm3[0] = zmm3[0] * 0f
    var_178[0] = zmm1
    var_178[1] = zmm3[0]
    var_178[2] = zmm3[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    var_178[3] = zmm12[0]

float zmm11[0x4] = var_178[3]
float zmm13[0x4] = var_178[0]
float zmm14[0x4] = var_178[1]
float zmm15[0x4] = var_178[2]
int32_t var_104
zmm5 = var_104
int32_t var_100
zmm3 = var_100
zmm7 = zmm13 ^ 0x80000000
float zmm8[0x4] = zmm14 ^ 0x80000000
float zmm9[0x4] = zmm15 ^ 0x80000000
zmm1 = zmm9[0]
zmm7[0] = zmm7[0] * zmm12[0]
zmm1 = zmm1 * zmm5[0]
zmm8[0] = zmm8[0] * zmm12[0]
zmm11[0] = zmm11[0] * zmm10[0]
zmm9[0] = zmm9[0] * zmm12[0]
zmm7[0] = zmm7[0] + zmm11[0]
zmm8[0] = zmm8[0] * zmm3[0]
zmm7[0] = zmm7[0] + zmm1
zmm1 = zmm7[0] * zmm3[0]
zmm7[0] = zmm7[0] - zmm8[0]
zmm5[0] = zmm5[0] * zmm11[0]
zmm8[0] = zmm8[0] + zmm5[0]
var_178[0] = zmm7[0]
zmm9[0] = zmm9[0] * zmm3[0]
zmm9[0] = zmm9[0] * zmm10[0]
zmm8[0] = zmm8[0] + zmm1
zmm1 = zmm8[0] * zmm10[0]
zmm8[0] = zmm8[0] * zmm5[0]
zmm8[0] = zmm8[0] - zmm9[0]
zmm3[0] = zmm3[0] * zmm11[0]
zmm9[0] = zmm9[0] + zmm3[0]
var_178[1] = zmm8[0]
float zmm0[0x4] = zmm7
zmm7[0] = zmm7[0] * zmm10[0]
zmm0[0] = zmm0[0] * zmm5[0]
zmm9[0] = zmm9[0] + zmm1
zmm1 = zmm11[0] * zmm12[0] - zmm7[0]
zmm7 = *(arg1 + 0x88)
zmm7[0] = zmm7[0] * 0.5f
zmm9[0] = zmm9[0] - zmm0[0]
zmm1 = zmm1 - zmm8[0]
var_178[2] = zmm9[0]
var_178[3] = zmm1 - zmm9[0]
zmm6 = cosf(zmm7[0])
char arg_8
int32_t* result = sub_1427fb260(&var_108, &var_178, sinf(zmm7[0]), zmm6, &arg_8)
float zmm6_1[0x4] = *result
float zmm7_1[0x4] = result[1]
zmm8 = result[2]
float zmm2_1[0x4] = result[3]

if (rsi.b != 0 || arg_8 != rsi.b)
    float zmm1_1 = zmm7_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm13[0]
    zmm1_1 = zmm1_1 * zmm15[0]
    zmm6_1[0] = zmm6_1[0] * zmm11[0]
    zmm7_1[0] = zmm7_1[0] * zmm11[0]
    zmm8[0] = zmm8[0] * zmm11[0]
    zmm6_1[0] = zmm6_1[0] + zmm2_1[0]
    zmm8[0] = zmm8[0] * zmm14[0]
    zmm6_1[0] = zmm6_1[0] + zmm1_1
    zmm1_1 = zmm8[0] * zmm13[0]
    zmm8[0] = zmm8[0] * zmm15[0]
    zmm6_1[0] = zmm6_1[0] - zmm8[0]
    zmm2_1[0] = zmm2_1[0] * zmm14[0]
    float var_148_1 = zmm6_1[0]
    zmm7_1[0] = zmm7_1[0] + zmm2_1[0]
    float var_168 = zmm6_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm15[0]
    zmm7_1[0] = zmm7_1[0] + zmm1_1
    zmm1_1 = zmm6_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm13[0]
    zmm1_1 = zmm1_1 * zmm14[0]
    zmm7_1[0] = zmm7_1[0] - zmm6_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm15[0]
    zmm2_1[0] = zmm2_1[0] * zmm11[0]
    float var_144_1 = zmm7_1[0]
    zmm8[0] = zmm8[0] + zmm2_1[0]
    float var_164_1 = zmm7_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm13[0]
    zmm2_1[0] = zmm2_1[0] - zmm6_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm14[0]
    zmm8[0] = zmm8[0] + zmm1_1
    zmm2_1[0] = zmm2_1[0] - zmm7_1[0]
    zmm8[0] = zmm8[0] - zmm7_1[0]
    zmm2_1[0] = zmm2_1[0] - zmm8[0]
    float var_140_1 = zmm8[0]
    float var_160_1 = zmm8[0]
    float var_13c_1 = zmm2_1[0]
    float var_15c_1 = zmm2_1[0]
    int128_t* rcx_3
    float zmm0_3[0x4]
    float zmm3_1[0x4]
    float zmm4_1[0x4]
    float zmm5_1[0x4]
    
    if (arg4 == 0)
        zmm7_1 = *(arg1 + 0x10)
        zmm6_1 = *(arg1 + 0x14)
        zmm9 = *(arg1 + 0x1c)
        zmm8 = *(arg1 + 0x18)
        zmm4_1 = *(arg1 + 0x20) ^ 0x80000000
        zmm3_1 = *(arg1 + 0x28) ^ 0x80000000
        zmm5_1 = *(arg1 + 0x24) ^ 0x80000000
        zmm4_1[0] = zmm4_1[0] * 2f
        zmm5_1[0] = zmm5_1[0] * 2f
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm3_1[0] = zmm3_1[0] * 2f
        zmm4_1[0] = zmm4_1[0] * zmm7_1[0]
        zmm9[0] = zmm9[0] - 0.5f
        zmm5_1[0] = zmm5_1[0] * zmm6_1[0]
        zmm1_1 = zmm3_1[0] * zmm8[0]
        zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
        arg_8.d = zmm9[0]
        var_168 = (zmm7_1 ^ 0x80000000)[0]
        zmm5_1[0] = zmm5_1[0] * zmm8[0]
        zmm5_1[0] = zmm5_1[0] + zmm1_1
        zmm9[0] = zmm9[0] * zmm4_1[0]
        zmm9[0] = zmm9[0] * zmm5_1[0]
        zmm1_1 = zmm3_1[0] * zmm6_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm7_1[0]
        zmm1_1 = zmm1_1 - zmm5_1[0]
        float var_164_2 = (zmm6_1 ^ 0x80000000)[0]
        float var_160_2 = (zmm8 ^ 0x80000000)[0]
        zmm5_1[0] = zmm5_1[0] * zmm7_1[0]
        float var_15c_2 = zmm9[0]
        zmm9[0] = zmm9[0] - zmm1_1 * zmm9[0]
        zmm1_1 = zmm4_1[0]
        zmm4_1[0] = zmm4_1[0] * zmm6_1[0]
        zmm1_1 = zmm1_1 * zmm8[0]
        zmm9[0] = zmm9[0] + zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm7_1[0]
        zmm5_1[0] = zmm5_1[0] - zmm4_1[0]
        zmm1_1 = zmm1_1 - zmm3_1[0]
        float var_158_2 = zmm9[0]
        zmm5_1[0] = zmm5_1[0] * zmm9[0]
        zmm5_1[0] = zmm5_1[0] * zmm6_1[0]
        zmm1_1 = zmm1_1 * zmm9[0]
        zmm5_1[0] = zmm5_1[0] * zmm8[0]
        zmm9[0] = zmm9[0] - zmm1_1
        zmm9[0] = zmm9[0] + zmm5_1[0]
        zmm0_3 = arg_8.d
        zmm0_3[0] = zmm0_3[0] * zmm3_1[0]
        float var_154_2 = zmm9[0]
        zmm0_3[0] = zmm0_3[0] - zmm5_1[0]
        zmm12 = var_148_1 ^ 0x80000000
        zmm6_1 = var_144_1 ^ 0x80000000
        var_178[0] = zmm12[0]
        zmm7_1 = var_140_1 ^ 0x80000000
        var_178[1] = zmm6_1[0]
        zmm0_3[0] = zmm0_3[0] + zmm5_1[0]
        float var_150_2 = zmm0_3[0]
        zmm5_1 = var_13c_1
        zmm0_3[0] = zmm0_3[0] - var_130
        zmm9[0] = zmm9[0] - var_138
        zmm9[0] = zmm9[0] - var_134
        var_178[2] = zmm7_1[0]
        var_178[3] = zmm5_1[0]
        zmm0_3[0] = zmm0_3[0] * 2f
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm1_1 = zmm7_1[0]
        zmm9[0] = zmm9[0] * 2f
        zmm1_1 = zmm1_1 * zmm0_3[0]
        zmm5_1[0] = zmm5_1[0] - 0.5f
        zmm12[0] = zmm12[0] * zmm9[0]
        zmm6_1[0] = zmm6_1[0] * zmm0_3[0]
        zmm9[0] = zmm9[0] * 2f
        zmm7_1[0] = zmm7_1[0] * zmm9[0]
        zmm6_1[0] = zmm6_1[0] * zmm9[0]
        zmm6_1[0] = zmm6_1[0] + zmm12[0]
        zmm7_1[0] = zmm7_1[0] * zmm9[0]
        zmm6_1[0] = zmm6_1[0] - zmm7_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm1_1
        zmm5_1[0] = zmm5_1[0] * zmm9[0]
        zmm1_1 = zmm12[0]
        zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
        zmm1_1 = zmm1_1 * zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm6_1[0]
        zmm12[0] = zmm12[0] * zmm9[0]
        zmm12[0] = zmm12[0] * zmm0_3[0]
        zmm6_1[0] = zmm6_1[0] + zmm1_1
        zmm1_1 = zmm6_1[0] * zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] - zmm12[0]
        zmm6_1[0] = zmm6_1[0] * zmm9[0]
        zmm5_1[0] = zmm5_1[0] * zmm0_3[0]
        zmm12[0] = zmm12[0] - zmm6_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm9[0]
        zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
        zmm12[0] = zmm12[0] * zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] + zmm5_1[0]
        zmm12[0] = zmm12[0] + zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] + zmm1_1
        zmm12[0] = zmm12[0] + zmm7_1[0]
        float* rax_1
        float zmm10_2
        float zmm11_2
        rax_1, zmm10_2, zmm11_2 = sub_1417c7990(&var_178, &var_108, &var_168)
        int32_t var_11c
        int128_t zmm6_4 = var_11c
        int128_t zmm9_2 = var_128
        int32_t var_120
        int128_t zmm4_3 = var_120
        var_168.o = *rax_1
        float var_158_3 = zmm11_2
        float var_154_3 = zmm10_2
        zmm11_2 = zmm11_2 + zmm11_2
        zmm10_2 = zmm10_2 + zmm10_2
        float var_150_3 = zmm12[0]
        zmm12[0] = zmm12[0] + zmm12[0]
        int128_t zmm8_3
        zmm8_3.d = zmm6_4.d f* zmm6_4.d
        int128_t zmm0_6
        zmm0_6.d = zmm9_2.d f* zmm11_2
        zmm8_3.d = zmm8_3.d f- 0.5f
        float var_124
        float zmm5_3 = var_124 * zmm10_2 f+ zmm0_6.d + zmm4_3.d * zmm12[0]
        float zmm1_3 = zmm9_2.d * zmm5_3
        zmm0_6.d = zmm4_3.d f* zmm10_2
        zmm4_3.d = zmm4_3.d f* zmm5_3
        float zmm2_3 = var_124 * zmm12[0] f- zmm0_6.d
        zmm0_6.d = zmm8_3.d f* zmm11_2
        zmm2_3 = zmm2_3 f* zmm6_4.d f+ zmm0_6.d
        zmm0_6 = zmm9_2
        zmm9_2.d = zmm9_2.d f* zmm10_2
        zmm0_6.d = zmm0_6.d f* zmm12[0]
        zmm9_2.d = zmm9_2.d f- var_124 * zmm11_2
        zmm0_6 = zmm8_3
        zmm8_3.d = zmm8_3.d f* zmm12[0]
        zmm9_2.d = zmm9_2.d f* zmm6_4.d
        zmm0_6.d = zmm0_6.d f* zmm10_2
        int32_t var_118
        zmm6_4.d = var_118.d f+ zmm2_3 + zmm1_3
        zmm9_2.d = zmm9_2.d f+ zmm8_3.d
        zmm9_2.d = zmm9_2.d f+ zmm4_3.d
        int32_t var_110
        zmm9_2.d = zmm9_2.d f+ var_110
        int32_t zmm6_5
        int32_t zmm7_5
        int32_t zmm9_3
        result, zmm6_5, zmm7_5, zmm9_3 = sub_1417c7990(&var_128, &var_178, &var_168)
        rcx_3 = arg2
        *arg2 = *result
        arg2[1].d = zmm6_5
        *(arg2 + 0x14) = zmm7_5
        *(arg2 + 0x18) = zmm9_3
    else
        zmm6_1 = *(arg1 + 0x30)
        zmm8 = *(arg1 + 0x38)
        zmm10 = *(arg1 + 0x2c)
        zmm7_1 = *(arg1 + 0x34)
        zmm4_1 = *(arg1 + 0x40)
        zmm3_1 = *(arg1 + 0x44) ^ 0x80000000
        zmm5_1 = *(arg1 + 0x3c) ^ 0x80000000
        var_128 = (zmm10 ^ 0x80000000)[0]
        zmm12 = var_148_1
        zmm4_1 ^= 0x80000000
        zmm1_1 = zmm7_1[0]
        float var_124_1 = (zmm6_1 ^ 0x80000000)[0]
        float var_11c_1 = zmm8[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm3_1[0] = zmm3_1[0] * 2f
        zmm8[0] = zmm8[0] - 0.5f
        zmm5_1[0] = zmm5_1[0] * 2f
        zmm4_1[0] = zmm4_1[0] * 2f
        zmm1_1 = zmm1_1 * zmm3_1[0]
        zmm10[0] = zmm10[0] * zmm5_1[0]
        zmm8[0] = zmm8[0] * zmm3_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm4_1[0]
        zmm8[0] = zmm8[0] * zmm5_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm10[0]
        zmm8[0] = zmm8[0] * zmm4_1[0]
        float var_120_1 = (zmm7_1 ^ 0x80000000)[0]
        zmm7_1[0] = zmm7_1[0] * zmm4_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm1_1
        zmm1_1 = zmm6_1[0] * zmm3_1[0] - zmm7_1[0]
        zmm10[0] = zmm10[0] * zmm6_1[0]
        zmm8[0] = zmm8[0] - zmm1_1 * zmm8[0]
        zmm1_1 = zmm7_1[0] * zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm6_1[0]
        zmm8[0] = zmm8[0] + zmm10[0]
        zmm10[0] = zmm10[0] * zmm3_1[0]
        zmm10[0] = zmm10[0] * zmm4_1[0]
        zmm1_1 = zmm1_1 - zmm10[0]
        float var_118_1 = zmm8[0]
        zmm0_3 = zmm6_1
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
        zmm5_1 = var_13c_1
        zmm0_3[0] = zmm0_3[0] * zmm6_1[0]
        zmm10[0] = zmm10[0] - zmm6_1[0]
        zmm1_1 = zmm1_1 * zmm8[0]
        zmm6_1 = var_144_1
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm8[0] = zmm8[0] - zmm1_1
        zmm10[0] = zmm10[0] * zmm8[0]
        zmm5_1[0] = zmm5_1[0] - 0.5f
        zmm8[0] = zmm8[0] - zmm10[0]
        zmm8[0] = zmm8[0] + zmm0_3[0]
        zmm8[0] = zmm8[0] + zmm7_1[0]
        float var_114_1 = zmm8[0]
        zmm8[0] = zmm8[0] + zmm8[0]
        float var_110_1 = zmm8[0]
        zmm8[0] = zmm8[0] + zmm8[0]
        zmm6_1[0] = zmm6_1[0] * zmm8[0]
        zmm7_1 = var_140_1
        zmm12[0] = zmm12[0] * zmm8[0]
        zmm1_1 = zmm7_1[0] * zmm8[0]
        zmm6_1[0] = zmm6_1[0] + zmm12[0]
        zmm6_1[0] = zmm6_1[0] * zmm8[0]
        zmm7_1[0] = zmm7_1[0] * zmm8[0]
        zmm7_1[0] = zmm7_1[0] * zmm8[0]
        zmm6_1[0] = zmm6_1[0] + zmm1_1
        zmm1_1 = zmm12[0]
        zmm6_1[0] = zmm6_1[0] - zmm7_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm8[0]
        zmm1_1 = zmm1_1 * zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] + zmm5_1[0]
        zmm12[0] = zmm12[0] * zmm8[0]
        zmm12[0] = zmm12[0] * zmm8[0]
        zmm6_1[0] = zmm6_1[0] + zmm1_1
        zmm1_1 = zmm6_1[0] * zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] - zmm12[0]
        zmm6_1[0] = zmm6_1[0] * zmm8[0]
        zmm5_1[0] = zmm5_1[0] * zmm8[0]
        zmm6_1[0] = zmm6_1[0] + var_138
        zmm12[0] = zmm12[0] - zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm8[0]
        zmm12[0] = zmm12[0] * zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] + zmm5_1[0]
        zmm12[0] = zmm12[0] + zmm5_1[0]
        zmm7_1[0] = zmm7_1[0] + zmm1_1
        zmm12[0] = zmm12[0] + zmm7_1[0]
        zmm7_1[0] = zmm7_1[0] + var_134
        zmm12[0] = zmm12[0] + var_130
        float* rax
        float zmm10_1
        float zmm11_1
        rax, zmm10_1, zmm11_1 = sub_1417c7990(&var_168, &var_108, &var_128)
        int32_t var_dc
        int128_t zmm7_2 = var_dc
        int128_t zmm9_1 = var_e8
        int32_t var_e0
        int128_t zmm5_2 = var_e0
        var_168.o = *rax
        int128_t zmm8_1
        zmm8_1.d = zmm7_2.d f* zmm7_2.d
        float var_158_1 = zmm11_1
        zmm11_1 = zmm11_1 + zmm11_1
        float var_154_1 = zmm10_1
        zmm8_1.d = zmm8_1.d f- 0.5f
        zmm10_1 = zmm10_1 + zmm10_1
        float var_150_1 = zmm12[0]
        zmm12[0] = zmm12[0] + zmm12[0]
        int128_t zmm0_4
        zmm0_4.d = zmm9_1.d f* zmm11_1
        float var_e4
        float zmm6_2 = var_e4 * zmm10_1 f+ zmm0_4.d
        zmm0_4.d = zmm5_2.d f* zmm10_1
        zmm6_2 = zmm6_2 + zmm5_2.d * zmm12[0]
        float zmm3_2 = var_e4 * zmm12[0] f- zmm0_4.d
        zmm0_4.d = zmm8_1.d f* zmm11_1
        zmm3_2 = zmm3_2 f* zmm7_2.d f+ zmm0_4.d + zmm9_1.d * zmm6_2
        zmm0_4.d = zmm9_1.d f* zmm12[0]
        zmm9_1.d = zmm9_1.d f* zmm10_1
        float zmm2_2 = zmm5_2.d * zmm11_1 f- zmm0_4.d
        zmm5_2.d = zmm5_2.d f* zmm6_2
        zmm0_4 = zmm8_1
        zmm8_1.d = zmm8_1.d f* zmm12[0]
        zmm0_4.d = zmm0_4.d f* zmm10_1
        zmm9_1.d = zmm9_1.d f- var_e4 * zmm11_1
        zmm9_1.d = zmm9_1.d f* zmm7_2.d
        zmm9_1.d = zmm9_1.d f+ zmm8_1.d
        int32_t var_d8
        zmm8_1.d = var_d8.d f+ zmm3_2
        int32_t var_d4
        zmm7_2.d = var_d4.d f+ zmm2_2 f* zmm7_2.d f+ zmm0_4.d + var_e4 * zmm6_2
        zmm9_1.d = zmm9_1.d f+ zmm5_2.d
        int32_t zmm6_3
        int32_t zmm7_3
        int32_t zmm8_2
        result, zmm6_3, zmm7_3, zmm8_2 = sub_1417c7990(&var_e8, &var_178, &var_168)
        rcx_3 = arg3
        *arg3 = *result
        arg3[1].d = zmm8_2
        *(arg3 + 0x14) = zmm7_3
        *(arg3 + 0x18) = zmm6_3
    sub_1427ed7d0(rcx_3)

return result
