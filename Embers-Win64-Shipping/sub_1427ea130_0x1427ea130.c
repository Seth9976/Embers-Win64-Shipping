// 函数: sub_1427ea130
// 地址: 0x1427ea130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_178
int32_t var_158
void var_f0
int128_t zmm12 = sub_1427eba20(arg1, arg2, arg3, &var_178, &var_158, &var_f0)
int32_t rbx = *(arg1 + 0x14c)
float zmm3[0x4] = zx.o(0)
float var_d8
float zmm4

if ((rbx.b & 4) == 0)
    zmm4 = (zx.o(0)).d
else
    zmm4 = var_d8

float var_dc
float zmm5

if ((rbx.b & 2) == 0)
    zmm5 = (zx.o(0)).d
else
    zmm5 = var_dc

int32_t var_e0
float zmm7[0x4] = var_e0

if ((rbx.b & 1) != 0)
    zmm3 = zmm7

float zmm6 = *(arg1 + 0x180)
zmm7[0] = zmm7[0] - zmm3[0]
char arg_8 = 0
float zmm2 = zmm3[0] * zmm3[0] + zmm5 * zmm5 + zmm4 * zmm4
int64_t rsi
rsi.b = zmm2 > zmm6 * zmm6
float var_128
float var_124
float var_120

if (rsi.b == 0)
    var_128 = zmm3[0]
    var_124 = zmm5
    var_120 = zmm4
else
    zmm2 = 1f / _mm_sqrt_ss((zx.o(0)).d, zmm2)
    var_128 = zmm2 * zmm3[0] * zmm6
    var_124 = zmm2 * zmm5 * zmm6
    var_120 = zmm2 * zmm4 * zmm6

float zmm0 = var_128 + zmm7[0]
float zmm1 = var_124 + var_dc - zmm5
zmm2 = var_120 + var_d8 - zmm4
float var_118 = zmm0
float var_114 = zmm1
float var_110 = zmm2
void var_104
float* result
int128_t zmm10
int128_t zmm11
result, zmm10, zmm11 =
    sub_1427e9fd0(&var_104, rbx u>> 3, &var_f0, cosf(*(arg1 + 0x184) * 0.5f), &arg_8)
var_128.o = *result

if (rsi.b != 0 || arg_8 != 0)
    int128_t var_78_1 = zmm10
    int128_t var_88_1 = zmm11
    int128_t var_98_1 = zmm12
    int128_t* rcx_3
    int512_t zmm10_2
    int512_t zmm11_2
    int128_t zmm0_2
    float zmm1_1
    float zmm2_1
    int128_t zmm3_1
    int128_t zmm4_1
    int128_t zmm5_1
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    int128_t zmm15
    
    if (arg4 == 0)
        zmm6_1 = *(arg1 + 0x14)
        zmm8_1 = *(arg1 + 0x1c)
        zmm10 = *(arg1 + 0x10)
        zmm7_1 = *(arg1 + 0x18)
        zmm5_1.d = (*(arg1 + 0x20) ^ 0x80000000).d f* 2f
        zmm15.d = zmm8_1.d f* zmm8_1.d
        zmm4_1.d = (*(arg1 + 0x24) ^ 0x80000000).d f* 2f
        zmm0_2.d = zmm10.d f* zmm5_1.d
        zmm15.d = zmm15.d f- 0.5f
        zmm3_1.d = (*(arg1 + 0x28) ^ 0x80000000).d f* 2f
        zmm2_1 = zmm6_1.d f* zmm4_1.d f+ zmm0_2.d
        arg_8.d = zmm15.d
        zmm15.d = zmm15.d f* zmm5_1.d
        zmm0_2.d = zmm7_1.d f* zmm4_1.d
        zmm2_1 = zmm2_1 + zmm7_1.d f* zmm3_1.d
        var_178 = (zmm10 ^ 0x80000000).d
        zmm12 = *result ^ 0x80000000
        int32_t var_174_1 = (zmm6_1 ^ 0x80000000).d
        int32_t var_170_1 = (zmm7_1 ^ 0x80000000).d
        zmm1_1 = zmm6_1.d f* zmm3_1.d f- zmm0_2.d
        int32_t var_16c_1 = zmm8_1.d
        var_128 = zmm12.d
        zmm0_2.d = zmm10.d f* zmm2_1
        zmm15.d = zmm15.d f- zmm1_1 f* zmm8_1.d
        zmm1_1 = zmm7_1.d f* zmm5_1.d
        zmm7_1.d = zmm7_1.d f* zmm2_1
        zmm15.d = zmm15.d f+ zmm0_2.d
        zmm0_2.d = zmm10.d f* zmm3_1.d
        zmm10.d = zmm10.d f* zmm4_1.d
        zmm1_1 = zmm1_1 f- zmm0_2.d
        int32_t var_108_1 = zmm15.d
        zmm0_2 = zmm6_1
        zmm6_1.d = zmm6_1.d f* zmm5_1.d
        zmm15.d = arg_8.d.d f* zmm4_1.d
        zmm4_1 = var_108_1
        zmm10.d = zmm10.d f- zmm6_1.d
        zmm0_2.d = zmm0_2.d f* zmm2_1
        zmm6_1 = result[1] ^ 0x80000000
        zmm10.d = zmm10.d f* zmm8_1.d
        zmm15.d = zmm15.d f- zmm1_1 f* zmm8_1.d
        int32_t var_168_1 = zmm4_1.d
        int32_t var_124_1 = zmm6_1.d
        zmm15.d = zmm15.d f+ zmm0_2.d
        zmm0_2.d = arg_8.d.d f* zmm3_1.d
        int32_t var_164_1 = zmm15.d
        zmm5_1.d = zmm0_2.d f- zmm10.d
        zmm5_1.d = zmm5_1.d f+ zmm7_1.d
        int32_t var_160_1 = zmm5_1.d
        zmm8_1 = result[3]
        zmm4_1.d = zmm4_1.d f- zmm0
        zmm5_1.d = zmm5_1.d f- zmm2
        zmm15.d = zmm15.d f- zmm1
        int32_t var_11c_1 = zmm8_1.d
        zmm7_1 = result[2] ^ 0x80000000
        zmm4_1.d = zmm4_1.d f* 2f
        zmm5_1.d = zmm5_1.d f* 2f
        zmm3_1.d = zmm8_1.d f* zmm8_1.d
        zmm0_2.d = zmm12.d f* zmm4_1.d
        zmm3_1.d = zmm3_1.d f- 0.5f
        zmm11.d = zmm6_1.d f* zmm5_1.d
        zmm15.d = zmm15.d f* 2f
        zmm10.d = zmm7_1.d f* zmm4_1.d
        int32_t var_120_1 = zmm7_1.d
        zmm2_1 = zmm6_1.d f* zmm15.d f+ zmm0_2.d
        zmm0_2.d = zmm7_1.d f* zmm15.d
        zmm11.d = zmm11.d f- zmm0_2.d
        zmm2_1 = zmm2_1 + zmm7_1.d f* zmm5_1.d
        zmm0_2.d = zmm3_1.d f* zmm4_1.d
        zmm11.d = zmm11.d f* zmm8_1.d
        zmm1_1 = zmm12.d * zmm2_1
        zmm11.d = zmm11.d f+ zmm0_2.d
        zmm7_1.d = zmm7_1.d f* zmm2_1
        zmm0_2 = zmm12
        zmm12.d = zmm12.d f* zmm15.d
        zmm0_2.d = zmm0_2.d f* zmm5_1.d
        zmm11.d = zmm11.d f+ zmm1_1
        zmm1_1 = zmm6_1.d
        zmm6_1.d = zmm6_1.d f* zmm4_1.d
        zmm10.d = zmm10.d f- zmm0_2.d
        zmm12.d = zmm12.d f- zmm6_1.d
        zmm0_2 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm5_1.d
        zmm10.d = zmm10.d f* zmm8_1.d
        zmm12.d = zmm12.d f* zmm8_1.d
        zmm0_2.d = zmm0_2.d f* zmm15.d
        zmm12.d = zmm12.d f+ zmm3_1.d
        zmm10.d = zmm10.d f+ zmm0_2.d
        zmm12.d = zmm12.d f+ zmm7_1.d
        zmm10.d = zmm10.d f+ zmm1_1 * zmm2_1
        float* rax_1
        float zmm10_3
        float zmm11_3
        rax_1, zmm10_3, zmm11_3 = sub_1417c7990(&var_128, &var_104, &var_178)
        int32_t var_14c
        int128_t zmm6_4 = var_14c
        int128_t zmm9_3 = var_158
        int32_t var_150
        int128_t zmm4_3 = var_150
        var_178.o = *rax_1
        float var_168_2 = zmm11_3
        float var_164_2 = zmm10_3
        zmm11_3 = zmm11_3 + zmm11_3
        zmm10_3 = zmm10_3 + zmm10_3
        int32_t var_160_2 = zmm12.d
        zmm12.d = zmm12.d f+ zmm12.d
        int128_t zmm8_4
        zmm8_4.d = zmm6_4.d f* zmm6_4.d
        int128_t zmm0_5
        zmm0_5.d = zmm9_3.d f* zmm11_3
        zmm8_4.d = zmm8_4.d f- 0.5f
        float var_154
        float zmm5_3 = var_154 * zmm10_3 f+ zmm0_5.d + zmm4_3.d f* zmm12.d
        float zmm1_3 = zmm9_3.d * zmm5_3
        zmm0_5.d = zmm4_3.d f* zmm10_3
        float zmm2_3 = var_154 f* zmm12.d f- zmm0_5.d
        zmm4_3.d = zmm4_3.d f* zmm5_3
        zmm0_5.d = zmm8_4.d f* zmm11_3
        zmm2_3 = zmm2_3 f* zmm6_4.d f+ zmm0_5.d
        zmm0_5 = zmm9_3
        zmm9_3.d = zmm9_3.d f* zmm10_3
        zmm0_5.d = zmm0_5.d f* zmm12.d
        zmm9_3.d = zmm9_3.d f- var_154 * zmm11_3
        zmm0_5 = zmm8_4
        zmm8_4.d = zmm8_4.d f* zmm12.d
        zmm9_3.d = zmm9_3.d f* zmm6_4.d
        zmm0_5.d = zmm0_5.d f* zmm10_3
        int32_t var_148
        zmm6_4.d = var_148.d f+ zmm2_3 + zmm1_3
        zmm9_3.d = zmm9_3.d f+ zmm8_4.d
        zmm9_3.d = zmm9_3.d f+ zmm4_3.d
        int32_t var_140
        zmm9_3.d = zmm9_3.d f+ var_140
        int32_t zmm6_5
        int32_t zmm7_5
        int32_t zmm9_4
        result, zmm6_5, zmm7_5, zmm9_4, zmm10_2, zmm11_2 =
            sub_1417c7990(&var_158, &var_128, &var_178)
        rcx_3 = arg2
        *arg2 = *result
        arg2[1].d = zmm6_5
        *(arg2 + 0x14) = zmm7_5
        *(arg2 + 0x18) = zmm9_4
    else
        zmm6_1 = *(arg1 + 0x30)
        zmm8_1 = *(arg1 + 0x38)
        zmm10 = *(arg1 + 0x2c)
        zmm7_1 = *(arg1 + 0x34)
        zmm4_1 = *(arg1 + 0x40) ^ 0x80000000
        zmm3_1 = *(arg1 + 0x44) ^ 0x80000000
        int32_t var_154_1 = (zmm6_1 ^ 0x80000000).d
        zmm5_1 = *(arg1 + 0x3c) ^ 0x80000000
        var_158 = (zmm10 ^ 0x80000000).d
        int32_t var_14c_1 = zmm8_1.d
        zmm15.d = zmm8_1.d f* zmm8_1.d
        zmm3_1.d = zmm3_1.d f* 2f
        zmm4_1.d = zmm4_1.d f* 2f
        zmm15.d = zmm15.d f- 0.5f
        zmm5_1.d = zmm5_1.d f* 2f
        int128_t zmm14 = zmm15
        zmm0_2.d = zmm10.d f* zmm5_1.d
        int128_t zmm13 = zmm15
        zmm15.d = zmm15.d f* zmm3_1.d
        zmm2_1 = zmm6_1.d f* zmm4_1.d f+ zmm0_2.d
        zmm13.d = zmm13.d f* zmm4_1.d
        zmm14.d = zmm14.d f* zmm5_1.d
        zmm0_2.d = zmm7_1.d f* zmm4_1.d
        zmm2_1 = zmm2_1 + zmm7_1.d f* zmm3_1.d
        int32_t var_150_1 = (zmm7_1 ^ 0x80000000).d
        zmm1_1 = zmm6_1.d f* zmm3_1.d f- zmm0_2.d
        zmm0_2.d = zmm10.d f* zmm2_1
        zmm14.d = zmm14.d f- zmm1_1 f* zmm8_1.d
        zmm1_1 = zmm7_1.d
        zmm7_1.d = zmm7_1.d f* zmm2_1
        zmm14.d = zmm14.d f+ zmm0_2.d
        zmm0_2.d = zmm10.d f* zmm3_1.d
        zmm10.d = zmm10.d f* zmm4_1.d
        zmm4_1 = result[1]
        zmm1_1 = zmm1_1 f* zmm5_1.d f- zmm0_2.d
        int32_t var_148_1 = zmm14.d
        zmm0_2.d = zmm6_1.d f* zmm2_1
        zmm14.d = zmm14.d f+ zmm14.d
        zmm6_1.d = zmm6_1.d f* zmm5_1.d
        zmm10.d = zmm10.d f- zmm6_1.d
        zmm6_1 = result[3]
        zmm13.d = zmm13.d f- zmm1_1 f* zmm8_1.d
        zmm3_1.d = zmm6_1.d f* zmm6_1.d
        zmm10.d = zmm10.d f* zmm8_1.d
        zmm3_1.d = zmm3_1.d f- 0.5f
        zmm13.d = zmm13.d f+ zmm0_2.d
        zmm15.d = zmm15.d f- zmm10.d
        int32_t var_144_1 = zmm13.d
        zmm13.d = zmm13.d f+ zmm13.d
        zmm15.d = zmm15.d f+ zmm7_1.d
        int32_t var_140_1 = zmm15.d
        zmm15.d = zmm15.d f+ zmm15.d
        zmm12 = *result
        zmm5_1 = result[2]
        zmm0_2.d = zmm12.d f* zmm14.d
        zmm2_1 = zmm4_1.d f* zmm13.d f+ zmm0_2.d
        zmm11.d = zmm4_1.d f* zmm15.d
        zmm0_2.d = zmm5_1.d f* zmm13.d
        zmm2_1 = zmm2_1 + zmm5_1.d f* zmm15.d
        zmm10.d = zmm5_1.d f* zmm14.d
        zmm11.d = zmm11.d f- zmm0_2.d
        zmm0_2.d = zmm3_1.d f* zmm14.d
        zmm1_1 = zmm12.d * zmm2_1
        zmm11.d = zmm11.d f* zmm6_1.d
        zmm5_1.d = zmm5_1.d f* zmm2_1
        zmm11.d = zmm11.d f+ zmm0_2.d
        zmm0_2 = zmm12
        zmm12.d = zmm12.d f* zmm13.d
        zmm0_2.d = zmm0_2.d f* zmm15.d
        zmm11.d = zmm11.d f+ zmm1_1
        zmm1_1 = zmm4_1.d
        zmm4_1.d = zmm4_1.d f* zmm14.d
        zmm10.d = zmm10.d f- zmm0_2.d
        zmm12.d = zmm12.d f- zmm4_1.d
        zmm0_2 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm15.d
        zmm11.d = zmm11.d f+ zmm0
        zmm10.d = zmm10.d f* zmm6_1.d
        zmm12.d = zmm12.d f* zmm6_1.d
        zmm0_2.d = zmm0_2.d f* zmm13.d
        zmm12.d = zmm12.d f+ zmm3_1.d
        zmm10.d = zmm10.d f+ zmm0_2.d
        zmm12.d = zmm12.d f+ zmm5_1.d
        zmm10.d = zmm10.d f+ zmm1_1 * zmm2_1
        zmm12.d = zmm12.d f+ zmm2
        zmm10.d = zmm10.d f+ zmm1
        float* rax
        float zmm10_1
        float zmm11_1
        rax, zmm10_1, zmm11_1 = sub_1417c7990(&var_128, &var_104, &var_158)
        int32_t var_16c
        int128_t zmm7_2 = var_16c
        int128_t zmm9_2 = var_178
        int32_t var_170
        int128_t zmm5_2 = var_170
        var_158.o = *rax
        int128_t zmm8_2
        zmm8_2.d = zmm7_2.d f* zmm7_2.d
        float var_148_2 = zmm11_1
        zmm11_1 = zmm11_1 + zmm11_1
        float var_144_2 = zmm10_1
        zmm8_2.d = zmm8_2.d f- 0.5f
        zmm10_1 = zmm10_1 + zmm10_1
        int32_t var_140_2 = zmm12.d
        zmm12.d = zmm12.d f+ zmm12.d
        int128_t zmm0_3
        zmm0_3.d = zmm9_2.d f* zmm11_1
        float var_174
        float zmm6_2 = var_174 * zmm10_1 f+ zmm0_3.d
        zmm0_3.d = zmm5_2.d f* zmm10_1
        zmm6_2 = zmm6_2 + zmm5_2.d f* zmm12.d
        float zmm3_2 = var_174 f* zmm12.d f- zmm0_3.d
        zmm0_3.d = zmm8_2.d f* zmm11_1
        zmm3_2 = zmm3_2 f* zmm7_2.d f+ zmm0_3.d + zmm9_2.d * zmm6_2
        zmm0_3.d = zmm9_2.d f* zmm12.d
        zmm9_2.d = zmm9_2.d f* zmm10_1
        float zmm2_2 = zmm5_2.d * zmm11_1 f- zmm0_3.d
        zmm5_2.d = zmm5_2.d f* zmm6_2
        zmm0_3 = zmm8_2
        zmm8_2.d = zmm8_2.d f* zmm12.d
        zmm0_3.d = zmm0_3.d f* zmm10_1
        zmm9_2.d = zmm9_2.d f- var_174 * zmm11_1
        zmm9_2.d = zmm9_2.d f* zmm7_2.d
        zmm9_2.d = zmm9_2.d f+ zmm8_2.d
        int32_t var_168
        zmm8_2.d = var_168.d f+ zmm3_2
        int32_t var_164
        zmm7_2.d = var_164.d f+ zmm2_2 f* zmm7_2.d f+ zmm0_3.d + var_174 * zmm6_2
        zmm9_2.d = zmm9_2.d f+ zmm5_2.d
        int32_t zmm6_3
        int32_t zmm7_3
        int32_t zmm8_3
        result, zmm6_3, zmm7_3, zmm8_3, zmm10_2, zmm11_2 =
            sub_1417c7990(&var_178, &var_128, &var_158)
        rcx_3 = arg3
        *arg3 = *result
        arg3[1].d = zmm8_3
        *(arg3 + 0x14) = zmm7_3
        *(arg3 + 0x18) = zmm6_3
    sub_1427ed7d0(rcx_3)
    zmm11_2.o = var_88_1
    zmm10_2.o = var_78_1

return result
