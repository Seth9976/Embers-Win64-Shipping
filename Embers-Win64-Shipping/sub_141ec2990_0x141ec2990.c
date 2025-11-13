// 函数: sub_141ec2990
// 地址: 0x141ec2990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (arg2[2].d == 0xffffffff)
label_141ec2c40:
    int32_t rax_5 = arg4[1].d
    *arg1 = *arg4
    arg1[1].d = rax_5
else
    int64_t* rcx = arg2[1]
    float zmm0[0x4] = data_142e6da00
    zmm6 = 0x3f800000
    zmm7 = zx.o(0)
    int32_t var_d8 = 4
    float var_d4[0x4] = zmm0
    int64_t var_c4_1 = 0
    int32_t var_bc_1 = 0x3f800000
    int64_t* var_b8_1 = nullptr
    char var_b0_1 = 0
    int16_t var_af_1 = 0
    char var_ad_1 = 0
    (*(*rcx + 0x68))(rcx, &var_d8)
    
    if (var_b8_1 == 0)
        goto label_141ec2c40
    
    int32_t var_a8
    
    if ((*(*var_b8_1 + 0x48))(var_b8_1, zx.q(arg2[2].d), &var_a8) == 0)
        goto label_141ec2c40
    
    float zmm4_1[0x4] = var_a8
    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
    zmm0 = zx.o(0)
    float var_a4
    float var_a0
    float zmm2 = var_a4 * var_a4 + zmm4_1[0] + var_a0 * var_a0
    
    if (zmm2 <= 0f)
        zmm6 = zx.o(0)
    else
        zmm6[0] = 1f / _mm_sqrt_ss(0, zmm2)[0]
        zmm7 = zmm6
        zmm0 = zmm6
        zmm7[0] = zmm7[0] * var_a4
        zmm0[0] = zmm0[0] * var_a0
        zmm6[0] = zmm6[0] * zmm4_1[0]
    
    float var_108 = zmm6[0]
    float var_104_1 = zmm7[0]
    float var_100_1 = zmm0[0]
    float var_118
    int128_t zmm2_1 = sub_141ece1a0(&var_118, &var_d4, &var_108)
    float var_f8
    sub_141ecfe50(&var_f8, arg2[1], *arg2, zmm2_1)
    int32_t var_ec
    float zmm8_1[0x4] = var_ec
    float zmm9_1[0x4] = var_f8
    int32_t var_f4
    float zmm4_2[0x4] = var_f4
    int32_t var_f0
    float zmm5_2[0x4] = var_f0
    float zmm1_1 = zmm5_2[0]
    int32_t var_114
    zmm7 = var_114
    int64_t zmm2_2 = zmm5_2[0].q
    float var_110
    float zmm11_1 = var_110 * 2f
    float zmm12_1 = var_118 * 2f
    zmm7[0] = zmm7[0] * 2f
    zmm9_1[0] = zmm9_1[0] * zmm12_1
    zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
    zmm4_2[0] = zmm4_2[0] * zmm11_1
    zmm8_1[0] = zmm8_1[0] - 0.5f
    zmm2_2.d = zmm2_2.d f* zmm12_1
    zmm4_2[0] = zmm4_2[0] * zmm7[0]
    zmm4_2[0] = zmm4_2[0] + zmm9_1[0]
    zmm5_2[0] = zmm5_2[0] * zmm7[0]
    zmm4_2[0] = zmm4_2[0] - zmm5_2[0]
    zmm8_1[0] = zmm8_1[0] * zmm12_1
    zmm4_2[0] = zmm4_2[0] + zmm1_1 * zmm11_1
    zmm1_1 = zmm9_1[0]
    zmm4_2[0] = zmm4_2[0] * zmm8_1[0]
    zmm1_1 = zmm1_1 * zmm4_2[0]
    zmm4_2[0] = zmm4_2[0] + zmm8_1[0]
    zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
    zmm9_1[0] = zmm9_1[0] * zmm7[0]
    zmm9_1[0] = zmm9_1[0] * zmm11_1
    zmm4_2[0] = zmm4_2[0] + zmm1_1
    zmm1_1 = zmm4_2[0]
    zmm4_2[0] = zmm4_2[0] * zmm12_1
    zmm2_2.d = zmm2_2.d f- zmm9_1[0]
    zmm1_1 = zmm1_1 * zmm4_2[0]
    zmm9_1[0] = zmm9_1[0] - zmm4_2[0]
    zmm8_1[0] = zmm8_1[0] * zmm7[0]
    zmm2_2.d = zmm2_2.d f* zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm11_1
    zmm2_2.d = zmm2_2.d f+ zmm8_1[0]
    zmm9_1[0] = zmm9_1[0] * zmm8_1[0]
    zmm9_1[0] = zmm9_1[0] + zmm8_1[0]
    zmm2_2.d = zmm2_2.d f+ zmm1_1
    zmm9_1[0] = zmm9_1[0] + zmm5_2[0]
    *arg1 = (_mm_unpacklo_ps(zmm4_2, zmm2_2)).q
    arg1[1].d = zmm9_1[0]

__security_check_cookie(rax_1 ^ &var_138)
return arg1
