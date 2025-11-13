// 函数: sub_1427fbe20
// 地址: 0x1427fbe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_170
float var_150
void var_100
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
zmm8, zmm9, zmm10, zmm11, zmm12 = sub_1427eba20(arg1, arg2, arg3, &var_170, &var_150, &var_100)
int32_t var_e8
float zmm6[0x4] = var_e8
float zmm4 = *(arg1 + 0x6c)
float var_ec
float zmm1 = var_ec * var_ec + zmm6[0] * zmm6[0]
int64_t rsi
rsi.b = zmm1 > zmm4 * zmm4
float var_130
float var_12c
float var_128

if (rsi.b == 0)
    var_130 = 0f
    var_12c = var_ec
    var_128 = zmm6[0]
else
    float zmm3_1[0x4] = 0x3f800000
    zmm3_1[0] = 1f / _mm_sqrt_ss(0, zmm1)
    zmm1 = zmm3_1[0]
    zmm3_1[0] = zmm3_1[0] * 0f
    zmm3_1[0] = zmm3_1[0] * zmm6[0]
    zmm3_1[0] = zmm3_1[0] * zmm4
    zmm3_1[0] = zmm3_1[0] * zmm4
    var_130 = zmm3_1[0]
    var_12c = zmm1 * var_ec * zmm4
    var_128 = zmm3_1[0]

float zmm2_1[0x4] = var_128
float zmm7[0x4] = *(arg1 + 0x70)
float var_110 = var_130
zmm7[0] = zmm7[0] * 0.5f
float var_178 = zmm2_1[0]
float var_10c = var_12c
float var_108 = zmm2_1[0]
zmm6 = cosf(zmm7[0])
void var_e0
char arg_8
int32_t* result = sub_1427fb260(&var_e0, &var_100, sinf(zmm7[0]), zmm6, &arg_8)
int128_t var_120 = *result

if (rsi.b != 0 || arg_8 != 0)
    int128_t var_58_1 = zmm8
    int32_t var_68_1 = zmm9.d
    int128_t var_78_1 = zmm10
    int32_t var_88_1 = zmm11.d
    int128_t var_98_1 = zmm12
    int32_t var_f0
    int32_t var_110_1 = var_f0.d
    int128_t* rcx_3
    int512_t zmm8_2
    int512_t zmm10_2
    int128_t zmm0_3
    float zmm1_1
    float zmm2_2
    int128_t zmm3_2
    int128_t zmm4_1
    int128_t zmm5_1
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm15
    
    if (arg4 == 0)
        zmm6_1 = *(arg1 + 0x14)
        zmm8 = *(arg1 + 0x1c)
        zmm10 = *(arg1 + 0x10)
        zmm7_1 = *(arg1 + 0x18)
        zmm5_1.d = (*(arg1 + 0x20) ^ 0x80000000).d f* 2f
        zmm15.d = zmm8.d f* zmm8.d
        zmm4_1.d = (*(arg1 + 0x24) ^ 0x80000000).d f* 2f
        zmm0_3.d = zmm10.d f* zmm5_1.d
        zmm15.d = zmm15.d f- 0.5f
        zmm3_2.d = (*(arg1 + 0x28) ^ 0x80000000).d f* 2f
        zmm2_2 = zmm6_1.d f* zmm4_1.d f+ zmm0_3.d
        arg_8.d = zmm15.d
        zmm15.d = zmm15.d f* zmm5_1.d
        zmm0_3.d = zmm7_1.d f* zmm4_1.d
        zmm2_2 = zmm2_2 + zmm7_1.d f* zmm3_2.d
        var_170 = (zmm10 ^ 0x80000000).d
        zmm12 = *result ^ 0x80000000
        int32_t var_16c_1 = (zmm6_1 ^ 0x80000000).d
        int32_t var_168_1 = (zmm7_1 ^ 0x80000000).d
        zmm1_1 = zmm6_1.d f* zmm3_2.d f- zmm0_3.d
        int32_t var_164_1 = zmm8.d
        var_120.d = zmm12.d
        zmm0_3.d = zmm10.d f* zmm2_2
        zmm15.d = zmm15.d f- zmm1_1 f* zmm8.d
        zmm1_1 = zmm7_1.d f* zmm5_1.d
        zmm7_1.d = zmm7_1.d f* zmm2_2
        zmm15.d = zmm15.d f+ zmm0_3.d
        zmm0_3.d = zmm10.d f* zmm3_2.d
        zmm10.d = zmm10.d f* zmm4_1.d
        zmm1_1 = zmm1_1 f- zmm0_3.d
        int32_t var_178_1 = zmm15.d
        zmm0_3 = zmm6_1
        zmm6_1.d = zmm6_1.d f* zmm5_1.d
        zmm15.d = arg_8.d.d f* zmm4_1.d
        zmm4_1 = var_178_1
        zmm10.d = zmm10.d f- zmm6_1.d
        zmm0_3.d = zmm0_3.d f* zmm2_2
        zmm6_1 = result[1] ^ 0x80000000
        zmm10.d = zmm10.d f* zmm8.d
        zmm15.d = zmm15.d f- zmm1_1 f* zmm8.d
        int32_t var_160_1 = zmm4_1.d
        var_120:4.d = zmm6_1.d
        zmm15.d = zmm15.d f+ zmm0_3.d
        zmm0_3.d = arg_8.d.d f* zmm3_2.d
        int32_t var_15c_1 = zmm15.d
        zmm5_1.d = zmm0_3.d f- zmm10.d
        zmm5_1.d = zmm5_1.d f+ zmm7_1.d
        int32_t var_158_1 = zmm5_1.d
        zmm8 = result[3]
        zmm4_1.d = zmm4_1.d f- var_f0
        zmm5_1.d = zmm5_1.d f- var_128
        zmm15.d = zmm15.d f- var_12c
        var_120:0xc.d = zmm8.d
        zmm7_1 = result[2] ^ 0x80000000
        zmm4_1.d = zmm4_1.d f* 2f
        zmm5_1.d = zmm5_1.d f* 2f
        zmm3_2.d = zmm8.d f* zmm8.d
        zmm0_3.d = zmm12.d f* zmm4_1.d
        zmm3_2.d = zmm3_2.d f- 0.5f
        zmm10.d = zmm6_1.d f* zmm5_1.d
        zmm15.d = zmm15.d f* 2f
        zmm11.d = zmm7_1.d f* zmm4_1.d
        var_120:8.d = zmm7_1.d
        zmm2_2 = zmm6_1.d f* zmm15.d f+ zmm0_3.d
        zmm0_3.d = zmm7_1.d f* zmm15.d
        zmm10.d = zmm10.d f- zmm0_3.d
        zmm2_2 = zmm2_2 + zmm7_1.d f* zmm5_1.d
        zmm0_3.d = zmm3_2.d f* zmm4_1.d
        zmm10.d = zmm10.d f* zmm8.d
        zmm1_1 = zmm12.d * zmm2_2
        zmm10.d = zmm10.d f+ zmm0_3.d
        zmm7_1.d = zmm7_1.d f* zmm2_2
        zmm0_3 = zmm12
        zmm12.d = zmm12.d f* zmm15.d
        zmm0_3.d = zmm0_3.d f* zmm5_1.d
        zmm10.d = zmm10.d f+ zmm1_1
        zmm1_1 = zmm6_1.d
        zmm6_1.d = zmm6_1.d f* zmm4_1.d
        zmm11.d = zmm11.d f- zmm0_3.d
        zmm12.d = zmm12.d f- zmm6_1.d
        zmm0_3 = zmm3_2
        zmm3_2.d = zmm3_2.d f* zmm5_1.d
        zmm11.d = zmm11.d f* zmm8.d
        zmm12.d = zmm12.d f* zmm8.d
        zmm0_3.d = zmm0_3.d f* zmm15.d
        zmm12.d = zmm12.d f+ zmm3_2.d
        zmm11.d = zmm11.d f+ zmm0_3.d
        zmm12.d = zmm12.d f+ zmm7_1.d
        zmm11.d = zmm11.d f+ zmm1_1 * zmm2_2
        float* rax_1
        float zmm10_3
        int128_t zmm11_3
        rax_1, zmm10_3, zmm11_3 = sub_1417c7990(&var_120, &var_e0, &var_170)
        int32_t var_144
        int128_t zmm6_4 = var_144
        float zmm3_4 = var_150
        var_170.o = *rax_1
        float var_160_2 = zmm10_3
        zmm10_3 = zmm10_3 + zmm10_3
        int32_t var_15c_2 = zmm11_3.d
        zmm11_3.d = zmm11_3.d f+ zmm11_3.d
        int32_t var_158_2 = zmm12.d
        zmm12.d = zmm12.d f+ zmm12.d
        int128_t zmm9_3
        zmm9_3.d = zmm6_4.d f* zmm6_4.d
        zmm9_3.d = zmm9_3.d f- 0.5f
        float var_14c
        int128_t zmm0_6
        zmm0_6.d = zmm11_3.d f* var_14c
        float var_148
        float zmm8_3 = zmm10_3 * zmm3_4 f+ zmm0_6.d + zmm12.d * var_148
        zmm0_6.d = zmm11_3.d f* var_148
        float zmm5_3 = zmm12.d * var_14c f- zmm0_6.d
        zmm0_6.d = zmm9_3.d f* zmm10_3
        zmm5_3 = zmm5_3 f* zmm6_4.d f+ zmm0_6.d
        zmm0_6.d = zmm12.d f* zmm3_4
        zmm0_6.d = zmm9_3.d f* zmm11_3.d
        zmm11_3.d = zmm11_3.d f* zmm3_4
        zmm11_3.d = zmm11_3.d f- zmm10_3 * var_14c
        zmm9_3.d = zmm9_3.d f* zmm12.d
        zmm11_3.d = zmm11_3.d f* zmm6_4.d
        int32_t var_140
        zmm6_4.d = var_140.d f+ zmm5_3 + zmm8_3 * zmm3_4
        zmm11_3.d = zmm11_3.d f+ zmm9_3.d
        zmm11_3.d = zmm11_3.d f+ zmm8_3 * var_148
        int32_t var_138
        zmm11_3.d = zmm11_3.d f+ var_138
        int32_t zmm6_5
        int32_t zmm7_5
        int32_t zmm11_2
        result, zmm6_5, zmm7_5, zmm8_2, zmm10_2, zmm11_2 =
            sub_1417c7990(&var_150, &var_120, &var_170)
        rcx_3 = arg2
        *arg2 = *result
        arg2[1].d = zmm6_5
        *(arg2 + 0x14) = zmm7_5
        *(arg2 + 0x18) = zmm11_2
    else
        zmm6_1 = *(arg1 + 0x30)
        zmm8 = *(arg1 + 0x38)
        zmm10 = *(arg1 + 0x2c)
        zmm7_1 = *(arg1 + 0x34)
        zmm4_1 = *(arg1 + 0x40) ^ 0x80000000
        zmm3_2 = *(arg1 + 0x44) ^ 0x80000000
        int32_t var_14c_1 = (zmm6_1 ^ 0x80000000).d
        zmm5_1 = *(arg1 + 0x3c) ^ 0x80000000
        var_150 = (zmm10 ^ 0x80000000).d
        int32_t var_144_1 = zmm8.d
        zmm15.d = zmm8.d f* zmm8.d
        zmm3_2.d = zmm3_2.d f* 2f
        zmm4_1.d = zmm4_1.d f* 2f
        zmm15.d = zmm15.d f- 0.5f
        zmm5_1.d = zmm5_1.d f* 2f
        int128_t zmm14 = zmm15
        zmm0_3.d = zmm10.d f* zmm5_1.d
        int128_t zmm13 = zmm15
        zmm15.d = zmm15.d f* zmm3_2.d
        zmm2_2 = zmm6_1.d f* zmm4_1.d f+ zmm0_3.d
        zmm13.d = zmm13.d f* zmm4_1.d
        zmm14.d = zmm14.d f* zmm5_1.d
        zmm0_3.d = zmm7_1.d f* zmm4_1.d
        zmm2_2 = zmm2_2 + zmm7_1.d f* zmm3_2.d
        int32_t var_148_1 = (zmm7_1 ^ 0x80000000).d
        zmm1_1 = zmm6_1.d f* zmm3_2.d f- zmm0_3.d
        zmm0_3.d = zmm10.d f* zmm2_2
        zmm14.d = zmm14.d f- zmm1_1 f* zmm8.d
        zmm1_1 = zmm7_1.d
        zmm7_1.d = zmm7_1.d f* zmm2_2
        zmm14.d = zmm14.d f+ zmm0_3.d
        zmm0_3.d = zmm10.d f* zmm3_2.d
        zmm10.d = zmm10.d f* zmm4_1.d
        zmm4_1 = result[1]
        zmm1_1 = zmm1_1 f* zmm5_1.d f- zmm0_3.d
        int32_t var_140_1 = zmm14.d
        zmm0_3.d = zmm6_1.d f* zmm2_2
        zmm14.d = zmm14.d f+ zmm14.d
        zmm6_1.d = zmm6_1.d f* zmm5_1.d
        zmm10.d = zmm10.d f- zmm6_1.d
        zmm6_1 = result[3]
        zmm13.d = zmm13.d f- zmm1_1 f* zmm8.d
        zmm3_2.d = zmm6_1.d f* zmm6_1.d
        zmm10.d = zmm10.d f* zmm8.d
        zmm3_2.d = zmm3_2.d f- 0.5f
        zmm13.d = zmm13.d f+ zmm0_3.d
        zmm15.d = zmm15.d f- zmm10.d
        int32_t var_13c_1 = zmm13.d
        zmm13.d = zmm13.d f+ zmm13.d
        zmm15.d = zmm15.d f+ zmm7_1.d
        int32_t var_138_1 = zmm15.d
        zmm15.d = zmm15.d f+ zmm15.d
        zmm12 = *result
        zmm5_1 = result[2]
        zmm0_3.d = zmm12.d f* zmm14.d
        zmm2_2 = zmm4_1.d f* zmm13.d f+ zmm0_3.d
        zmm11.d = zmm4_1.d f* zmm15.d
        zmm0_3.d = zmm5_1.d f* zmm13.d
        zmm2_2 = zmm2_2 + zmm5_1.d f* zmm15.d
        zmm10.d = zmm5_1.d f* zmm14.d
        zmm11.d = zmm11.d f- zmm0_3.d
        zmm0_3.d = zmm3_2.d f* zmm14.d
        zmm1_1 = zmm12.d * zmm2_2
        zmm11.d = zmm11.d f* zmm6_1.d
        zmm5_1.d = zmm5_1.d f* zmm2_2
        zmm11.d = zmm11.d f+ zmm0_3.d
        zmm0_3 = zmm12
        zmm12.d = zmm12.d f* zmm13.d
        zmm0_3.d = zmm0_3.d f* zmm15.d
        zmm11.d = zmm11.d f+ zmm1_1
        zmm1_1 = zmm4_1.d
        zmm4_1.d = zmm4_1.d f* zmm14.d
        zmm10.d = zmm10.d f- zmm0_3.d
        zmm12.d = zmm12.d f- zmm4_1.d
        zmm0_3 = zmm3_2
        zmm3_2.d = zmm3_2.d f* zmm15.d
        zmm11.d = zmm11.d f+ var_f0
        zmm10.d = zmm10.d f* zmm6_1.d
        zmm12.d = zmm12.d f* zmm6_1.d
        zmm0_3.d = zmm0_3.d f* zmm13.d
        zmm12.d = zmm12.d f+ zmm3_2.d
        zmm10.d = zmm10.d f+ zmm0_3.d
        zmm12.d = zmm12.d f+ zmm5_1.d
        zmm10.d = zmm10.d f+ zmm1_1 * zmm2_2
        zmm12.d = zmm12.d f+ var_178
        zmm10.d = zmm10.d f+ var_12c
        float* rax
        float zmm10_1
        float zmm11_1
        rax, zmm10_1, zmm11_1 = sub_1417c7990(&var_120, &var_e0, &var_150)
        int32_t var_164
        int128_t zmm6_2 = var_164
        int128_t zmm9_1 = var_170
        int32_t var_168
        int128_t zmm4_2 = var_168
        var_150.o = *rax
        int128_t zmm8_1
        zmm8_1.d = zmm6_2.d f* zmm6_2.d
        float var_140_2 = zmm11_1
        zmm11_1 = zmm11_1 + zmm11_1
        float var_13c_2 = zmm10_1
        zmm8_1.d = zmm8_1.d f- 0.5f
        zmm10_1 = zmm10_1 + zmm10_1
        int32_t var_138_2 = zmm12.d
        zmm12.d = zmm12.d f+ zmm12.d
        int128_t zmm0_4
        zmm0_4.d = zmm9_1.d f* zmm11_1
        float var_16c
        float zmm5_2 = var_16c * zmm10_1 f+ zmm0_4.d
        zmm0_4.d = zmm4_2.d f* zmm10_1
        zmm5_2 = zmm5_2 + zmm4_2.d f* zmm12.d
        float zmm2_3 = var_16c f* zmm12.d f- zmm0_4.d
        zmm0_4.d = zmm8_1.d f* zmm11_1
        zmm2_3 = zmm2_3 f* zmm6_2.d f+ zmm0_4.d
        zmm0_4 = zmm9_1
        zmm2_3 = zmm2_3 + zmm9_1.d * zmm5_2
        zmm9_1.d = zmm9_1.d f* zmm10_1
        zmm0_4.d = zmm0_4.d f* zmm12.d
        zmm4_2.d = zmm4_2.d f* zmm5_2
        zmm9_1.d = zmm9_1.d f- var_16c * zmm11_1
        zmm0_4.d = zmm8_1.d f* zmm10_1
        zmm8_1.d = zmm8_1.d f* zmm12.d
        zmm9_1.d = zmm9_1.d f* zmm6_2.d
        int32_t var_160
        zmm6_2.d = var_160.d f+ zmm2_3
        zmm9_1.d = zmm9_1.d f+ zmm8_1.d
        zmm9_1.d = zmm9_1.d f+ zmm4_2.d
        int32_t var_158
        zmm9_1.d = zmm9_1.d f+ var_158
        int32_t zmm6_3
        int32_t zmm7_3
        int32_t zmm9_2
        result, zmm6_3, zmm7_3, zmm8_2, zmm9_2, zmm10_2 =
            sub_1417c7990(&var_170, &var_120, &var_150)
        rcx_3 = arg3
        *arg3 = *result
        arg3[1].d = zmm6_3
        *(arg3 + 0x14) = zmm7_3
        *(arg3 + 0x18) = zmm9_2
    sub_1427ed7d0(rcx_3)
    zmm10_2.o = var_78_1
    zmm8_2.o = var_58_1

return result
