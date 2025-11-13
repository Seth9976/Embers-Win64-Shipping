// 函数: sub_1427eab40
// 地址: 0x1427eab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg2 + 0x24)
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm9 = *(arg2 + 0x28)
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm10 = *(arg2 + 0x20)
zmm10.d = zmm10.d f+ zmm10.d
int128_t zmm5 = *(arg3 + 0xc)
int128_t zmm2 = *(arg3 + 4)
float zmm12[0x4] = *arg3
int128_t zmm4 = *(arg3 + 8)
int128_t zmm8
zmm8.d = zmm5.d f* zmm5.d
int128_t zmm11
zmm11.d = zmm2.d f* zmm9.d
zmm8.d = zmm8.d f- 0.5f
int128_t zmm6
zmm6.d = zmm4.d f* zmm10.d
zmm11.d = zmm11.d f- zmm4.d f* zmm7.d
float zmm3 = zmm12[0] f* zmm10.d + zmm2.d f* zmm7.d + zmm4.d f* zmm9.d
zmm11.d = zmm11.d f* zmm5.d
float zmm1 = zmm12[0] * zmm3
zmm11.d = zmm11.d f+ zmm8.d f* zmm10.d
zmm4.d = zmm4.d f* zmm3
float zmm0 = zmm12[0]
zmm12[0] = zmm12[0] f* zmm7.d
zmm11.d = zmm11.d f+ zmm1
zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm10.d
zmm6.d = zmm6.d f- zmm0 f* zmm9.d
zmm12[0] = zmm12[0] f- zmm2.d
zmm0 = zmm8.d
zmm8.d = zmm8.d f* zmm9.d
zmm11.d = zmm11.d f+ arg3[1].d
zmm6.d = zmm6.d f* zmm5.d
zmm12[0] = zmm12[0] f* zmm5.d
zmm12[0] = zmm12[0] f+ zmm8.d
zmm6.d = zmm6.d f+ zmm0 f* zmm7.d
zmm12[0] = zmm12[0] f+ zmm4.d
zmm6.d = zmm6.d f+ zmm1 * zmm3
zmm12[0] = zmm12[0] f+ *(arg3 + 0x18)
zmm6.d = zmm6.d f+ *(arg3 + 0x14)
float var_128
float* rax_1
float zmm6_1
float zmm11_1
rax_1, zmm6_1, zmm11_1 = sub_1417c7990(arg3, &var_128, arg2 + 0x10)
float var_150 = *rax_1
float var_14c = rax_1[1]
float var_148 = rax_1[2]
float zmm4_1 = *(arg4 + 0xc)
float zmm2_1 = *(arg4 + 4)
float zmm5_1 = *(arg4 + 8)
float zmm10_1 = *(arg2 + 0x3c)
float zmm7_1 = *(arg2 + 0x40)
zmm10_1 = zmm10_1 + zmm10_1
float zmm9_1 = *(arg2 + 0x44)
zmm7_1 = zmm7_1 + zmm7_1
float var_138 = zmm12[0]
zmm9_1 = zmm9_1 + zmm9_1
zmm12 = *arg4
float var_144 = rax_1[3]
float var_13c = zmm6_1
float zmm3_1 = zmm12[0] * zmm10_1 + zmm2_1 * zmm7_1 + zmm5_1 * zmm9_1
zmm12[0]
zmm12[0]
zmm12[0] = zmm12[0] * zmm7_1
zmm12[0] = zmm12[0] - zmm2_1 * zmm10_1
arg4[1].d
zmm12[0] = zmm12[0] * zmm4_1
zmm12[0] = zmm12[0] + (zmm4_1 * zmm4_1 - 0.5f) * zmm9_1
zmm12[0] = zmm12[0] + zmm5_1 * zmm3_1
zmm12[0] = zmm12[0] f+ *(arg4 + 0x18)
*(arg4 + 0x14)
float* rax_2
int32_t zmm6_2
int32_t zmm11_2
rax_2, zmm6_2, zmm11_2 = sub_1417c7990(arg4, &var_128, arg2 + 0x2c)
float var_108 = (*rax_2)[0]
float var_104 = rax_2[1][0]
float var_100 = rax_2[2][0]
float var_fc = rax_2[3][0]
int32_t var_f8 = zmm11_2
int32_t var_f4 = zmm6_2
float var_f0 = zmm12[0]
(*(*arg1 + 8))(arg1, &var_150, &var_108)
float zmm14[0x4] = var_150
int128_t zmm4_2 = var_108
float zmm2_2 = zmm14[0]
int128_t zmm3_2 = var_104
float zmm13[0x4] = var_14c
zmm12 = var_148
int128_t zmm8_2 = var_100
float zmm9_2[0x4] = var_144
zmm13[0] = zmm13[0] f* zmm3_2.d
zmm12[0] = zmm12[0] f* zmm8_2.d
int32_t var_178 = zmm4_2.d
int32_t var_130 = zmm3_2.d
zmm2_2 = zmm2_2 f* zmm4_2.d + zmm13[0] + zmm12[0]
float zmm1_2[0x4] = var_fc
zmm9_2[0] = zmm9_2[0] * zmm1_2[0]
float arg_8 = zmm1_2[0]

if (not(zmm2_2 + zmm9_2[0] >= 0f))
    zmm4_2 ^= 0x80000000
    zmm3_2 ^= 0x80000000
    zmm1_2 ^= 0x80000000
    var_178 = zmm4_2.d
    var_130 = zmm3_2.d
    arg_8 = zmm1_2[0]
    var_108 = zmm4_2.d
    int32_t var_104_1 = zmm3_2.d
    int32_t var_100_1 = (zmm8_2 ^ 0x80000000).d
    float var_fc_1 = zmm1_2[0]

float var_11c = zmm9_2[0]
var_128 = (zmm14 ^ 0x80000000)[0]
float var_120 = (zmm12 ^ 0x80000000)[0]
float var_124 = (zmm13 ^ 0x80000000)[0]
float var_dc[0x5]
float* rax_4
float zmm6_3[0x4]
float zmm8_3[0x4]
float zmm9_3[0x4]
float zmm11_3[0x4]
rax_4, zmm6_3, zmm8_3, zmm9_3, zmm11_3 = sub_1417c7990(&var_128, &var_dc, &var_108)
float zmm15[0x4] = *rax_4
float zmm10_2[0x4] = rax_4[3]
float zmm2_3[0x4]

if (zmm15[0] == zmm11_3[0])
    var_128.o = data_142d3f660
else
    zmm15[0] = zmm15[0] * zmm15[0]
    zmm2_3 = 0x3f800000
    zmm10_2[0] = zmm10_2[0] * zmm10_2[0]
    zmm10_2[0] = zmm10_2[0] + zmm15[0]
    zmm2_3[0] = 1f / _mm_sqrt_ss(0, zmm10_2[0])[0]
    zmm15[0] = zmm15[0] * zmm2_3[0]
    zmm2_3[0] = zmm2_3[0] * zmm11_3[0]
    var_128 = zmm15[0]
    var_124 = zmm2_3[0]
    var_120 = zmm2_3[0]
    zmm10_2[0] = zmm10_2[0] * zmm2_3[0]
    var_11c = zmm10_2[0]

zmm11_3 = var_11c
float zmm3_3[0x4] = var_124 ^ zmm6_3
float zmm4_3[0x4] = var_120 ^ zmm6_3
float zmm1_3[0x4] = rax_4[2]
zmm2_3 = var_128 ^ zmm6_3
zmm6_3 = rax_4[1]
zmm10_2[0] = zmm10_2[0] * zmm3_3[0]
zmm1_3[0] = zmm1_3[0] * zmm2_3[0]
zmm6_3[0] = zmm6_3[0] * zmm11_3[0]
zmm6_3[0] = zmm6_3[0] + zmm10_2[0]
float zmm0_3[0x4] = zmm15
zmm15 = rax_4[2]
zmm0_3[0] = zmm0_3[0] * zmm4_3[0]
zmm15[0] = zmm15[0] * zmm11_3[0]
zmm6_3[0] = zmm6_3[0] + zmm1_3[0]
zmm6_3[0] = zmm6_3[0] - zmm0_3[0]
zmm10_2[0] = zmm10_2[0] * zmm4_3[0]
zmm10_2[0] = zmm10_2[0] * zmm11_3[0]
zmm15[0] = zmm15[0] + zmm10_2[0]
float var_12c = zmm6_3[0]
float zmm5_2[0x4] = *rax_4
zmm6_3[0] = zmm6_3[0] * zmm2_3[0]
zmm5_2[0] = zmm5_2[0] * zmm3_3[0]
zmm6_3[0] = zmm6_3[0] * zmm3_3[0]
zmm15[0] = zmm15[0] + zmm5_2[0]
zmm5_2[0] = zmm5_2[0] * zmm2_3[0]
zmm12[0] = zmm12[0] + zmm12[0]
zmm10_2[0] = zmm10_2[0] - zmm5_2[0]
zmm15[0] = zmm15[0] - zmm6_3[0]
zmm0_3 = rax_4[2]
zmm0_3[0] = zmm0_3[0] * zmm4_3[0]
zmm14[0] = zmm14[0] + zmm14[0]
zmm12[0] = zmm12[0] * zmm12[0]
zmm10_2[0] = zmm10_2[0] - zmm6_3[0]
zmm13[0] = zmm13[0] * zmm14[0]
zmm9_3[0] = zmm9_3[0] * zmm14[0]
zmm10_2[0] = zmm10_2[0] - zmm0_3[0]
float arg_20 = zmm13[0]
zmm13[0] = zmm13[0] + zmm13[0]
zmm12[0] = zmm12[0] * zmm14[0]
zmm12[0] = zmm12[0] * zmm13[0]
zmm13[0] = zmm13[0] * zmm13[0]
float arg_18 = zmm12[0]
zmm9_3[0] = zmm9_3[0] * zmm13[0]
zmm9_3[0] = zmm9_3[0] * zmm12[0]
zmm1_3 = arg_20
zmm1_3[0] = zmm1_3[0] - zmm9_3[0]
zmm14[0] = zmm14[0] * zmm14[0]
arg_20 = zmm1_3[0]
zmm1_3 = 0x3f800000
zmm1_3[0] = 1f - zmm14[0]
zmm1_3[0] = zmm1_3[0] - zmm12[0]
zmm2_3 = arg_18
float var_e4 = zmm1_3[0]
zmm2_3[0] = zmm2_3[0] + zmm9_3[0]
float var_e0 = zmm2_3[0]
zmm9_3[0] = zmm9_3[0] + zmm12[0]
float arg_10 = zmm9_3[0]
bool cond:1 = (*(arg2 + 0x150) & 8) == 0
zmm2_3[0] = zmm2_3[0] - zmm9_3[0]
zmm0_3 = var_178
zmm1_3[0] = zmm1_3[0] - zmm13[0]
zmm6_3 = var_130
zmm0_3[0] = zmm0_3[0] + zmm0_3[0]
zmm5_2 = arg_8
zmm8_3[0] = zmm8_3[0] + zmm8_3[0]
arg_18 = zmm2_3[0]
float var_e8 = zmm1_3[0]
zmm6_3[0] = zmm6_3[0] + zmm6_3[0]
zmm6_3[0] = zmm6_3[0] * zmm0_3[0]
zmm8_3[0] = zmm8_3[0] * zmm0_3[0]
zmm5_2[0] = zmm5_2[0] * zmm8_3[0]
zmm8_3[0] = zmm8_3[0] * zmm8_3[0]
zmm3_3 = 0x3f800000
zmm5_2[0] = zmm5_2[0] * zmm6_3[0]
zmm5_2[0] = zmm5_2[0] + zmm6_3[0]
zmm6_3[0] = zmm6_3[0] * zmm6_3[0]
zmm8_3[0] = zmm8_3[0] - zmm5_2[0]
zmm0_3 = 0x7fffffff
arg_8 = zmm5_2[0]
zmm3_3[0] = 1f - zmm6_3[0]
zmm3_3[0] = zmm3_3[0] - zmm8_3[0]
float var_178_1 = zmm3_3[0]
char var_188

if (not(cond:1))
    zmm2_3 = var_11c
    zmm1_3 = var_128
    zmm2_3[0] = zmm2_3[0] + 1f
    int64_t r8_4 = *arg1
    zmm3_3 = *(arg2 + 0x94)
    zmm1_3[0] = zmm1_3[0] / zmm2_3[0]
    zmm2_3 = *(arg2 + 0x98)
    zmm1_3 = _mm_and_ps(zmm1_3, 0x7fffffff)
    zmm0_3 = *(arg2 + 0x174)
    zmm0_3[0] = zmm0_3[0] f+ *(arg2 + 0x16c)
    rax_4.b = zmm1_3[0] > zmm0_3[0]
    var_188 = rax_4.b
    (*(r8_4 + 0x18))(arg1, &var_150, zmm2_3, zmm3_3, var_188)
    zmm3_3 = var_178_1
    zmm5_2 = arg_8
    zmm0_3 = 0x7fffffff
    zmm9_3 = var_144
    zmm12 = var_148
    zmm13 = var_14c
    zmm14 = var_150

int32_t rax_5 = *(arg2 + 0x150)
uint8_t result = (rax_5 u>> 5).b & 1
uint8_t rcx_6 = (rax_5 u>> 4).b & 1

if (rcx_6 != 0 && result != 0)
    zmm2_3 = *(arg2 + 0x16c)
    zmm10_2[0] = zmm10_2[0] + 1f
    zmm3_3 = 0xbf800000
    zmm6_3 = *(arg2 + 0x168)
    zmm5_2 = *(arg2 + 0x164)
    zmm1_3 = 0x3f800000
    int64_t r8_5 = *arg1
    zmm3_3[0] = -1f / zmm10_2[0]
    zmm15[0] = zmm15[0] / zmm10_2[0]
    zmm3_3[0] = zmm3_3[0] * var_12c
    zmm15 = _mm_and_ps(zmm15, zmm0_3)
    zmm2_3[0] = zmm2_3[0] + zmm15[0]
    zmm3_3 = _mm_and_ps(zmm3_3, zmm0_3)
    zmm2_3[0] = zmm2_3[0] * zmm15[0]
    zmm1_3[0] = 1f - zmm2_3[0]
    zmm0_3 = 0x3f800000
    zmm2_3[0] = zmm2_3[0] / zmm1_3[0]
    zmm2_3[0] = zmm2_3[0] * zmm3_3[0]
    zmm2_3[0] = zmm2_3[0] + zmm3_3[0]
    zmm2_3[0] = zmm2_3[0] / zmm6_3[0]
    zmm0_3[0] = 1f - zmm2_3[0]
    zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
    zmm2_3[0] = zmm2_3[0] / zmm0_3[0]
    zmm2_3[0] = zmm2_3[0] / zmm5_2[0]
    zmm2_3[0] = zmm2_3[0] * zmm2_3[0]
    zmm2_3[0] = zmm2_3[0] + zmm2_3[0]
    return (*(r8_5 + 0x20))(arg1, &var_150, zmm6_3, zmm5_2, zmm2_3[0] > 1f)

if (result == rcx_6)
    return result

float zmm7_2 = zmm12[0]
int32_t var_164_1 = 0x3f3504f3
zmm0_3 = 0xbf3504f3
zmm0_3[0] = -0.707106769f * 0f
int64_t var_160_1 = 0
int32_t var_124_1 = 0x3f3504f3
int32_t var_11c_1 = 0x3f3504f3
float var_170 = zmm0_3[0]
float var_16c_1 = zmm0_3[0]
zmm0_3 = 0x3f3504f3
zmm0_3[0] = 0.707106769f * 0f
int32_t var_158_1 = 0
int32_t var_168_1 = 0xbf3504f3
int64_t var_118_1 = 0
var_128 = zmm0_3[0]
float var_120_1 = zmm0_3[0]
int32_t var_110_1 = 0
zmm13[0] = zmm13[0] * 0f
zmm7_2 = zmm7_2 * 0f
int512_t zmm2_5
int32_t zmm6_5
int32_t zmm7_4
int32_t zmm8_5
bool cond:2_1
float* rax_6
float zmm0_4
float zmm0_5
uint32_t zmm1_4[0x4]
int128_t zmm3_4
int32_t zmm6_4
int32_t zmm7_3
int32_t zmm8_4
bool cond:3_1

if (rcx_6 == 0)
    if ((*(arg2 + 0x14c) & 0x10) != 0)
        zmm6_3 = zmm11_1
        zmm14[0] = zmm14[0] * 0f
        zmm13[0] = zmm13[0] - zmm7_2
        zmm9_3[0] = zmm9_3[0] * zmm9_3[0]
        zmm14[0] = zmm14[0] + zmm13[0]
        zmm9_3[0] = zmm9_3[0] - 0.5f
        zmm13[0] = zmm13[0] * zmm9_3[0]
        zmm14[0] = zmm14[0] + zmm7_2
        zmm14[0]
        zmm9_3[0] = zmm9_3[0] * 0f
        zmm14[0] = zmm14[0] - zmm13[0]
        zmm13[0] = zmm13[0] + zmm9_3[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm9_3[0]
        zmm14[0] = zmm14[0] * zmm9_3[0]
        zmm13[0] = zmm13[0] * zmm14[0]
        zmm13[0] = zmm13[0] + zmm14[0]
        zmm9_3[0]
        zmm12[0] = zmm12[0] * zmm14[0]
        zmm14[0] = zmm14[0] + zmm9_3[0]
        zmm6_3[0] = zmm6_3[0] + zmm13[0]
        zmm13[0]
        zmm14[0] = zmm14[0] + zmm12[0]
        zmm14[0] = zmm14[0] + var_138
        float zmm10_5
        rax_6, zmm6_4, zmm7_3, zmm8_4, zmm10_5 = sub_1417c7990(&var_150, &var_dc, &var_128)
        zmm3_4 = *(arg2 + 0xb4)
        var_170 = *rax_6
        uint32_t var_16c_4 = rax_6[1][0]
        float var_168_4 = rax_6[2]
        zmm0_4 = *(arg2 + 0x168) f- *(arg2 + 0x16c)
        zmm1_4 = rax_6[3]
        zmm15[0] = zmm15[0] / (zmm10_5 + 1f)
        uint32_t var_164_4 = zmm1_4[0]
        cond:3_1 = __andps_xmmxud_memxud(zmm15, data_142d3f770)[0] > zmm0_4
    label_1427eb6fb:
        int32_t var_158_2 = zmm8_4
        rax_6.b = cond:3_1
        var_160_1:4.d = zmm7_3
        var_160_1.d = zmm6_4
        char var_188_2 = rax_6.b
        return (*(*arg1 + 0x18))(arg1, &var_170, zmm3_4 ^ data_142d3f780)
    
    zmm8_3[0] = zmm8_3[0] * var_e0
    zmm3_3[0] = zmm3_3[0] * arg_20
    zmm0_3 = var_e4
    zmm6_3 = zmm11_1
    zmm0_3[0] = zmm0_3[0] * zmm5_2[0]
    zmm3_3[0] = zmm3_3[0] + zmm0_3[0]
    zmm13[0] = zmm13[0] - zmm7_2
    zmm3_3[0] = zmm3_3[0] + zmm8_3[0]
    zmm14[0] = zmm14[0] * 0f
    zmm13[0] = zmm13[0] * zmm9_3[0]
    float var_178_2 = zmm3_3[0]
    zmm14[0] = zmm14[0] + zmm13[0]
    zmm9_3[0] = zmm9_3[0] * zmm9_3[0]
    zmm9_3[0] = zmm9_3[0] - 0.5f
    zmm14[0] = zmm14[0] + zmm7_2
    zmm14[0]
    zmm14[0] = zmm14[0] - zmm13[0]
    zmm9_3[0] = zmm9_3[0] * 0f
    zmm9_3[0]
    zmm14[0] = zmm14[0] * zmm9_3[0]
    zmm13[0] = zmm13[0] + zmm9_3[0]
    zmm9_3[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] + zmm9_3[0]
    zmm13[0] = zmm13[0] * zmm14[0]
    zmm12[0] = zmm12[0] * zmm14[0]
    zmm13[0] = zmm13[0] + zmm14[0]
    zmm13[0]
    zmm14[0] = zmm14[0] + zmm12[0]
    zmm6_3[0] = zmm6_3[0] + zmm13[0]
    zmm14[0] = zmm14[0] + var_138
    float* rax_8
    rax_8, zmm2_5, zmm6_5, zmm7_4, zmm8_5 = sub_1417c7990(&var_150, &var_dc, &var_170)
    uint32_t zmm3_5[0x4] = var_178_2
    zmm2_5.o = 0x3f800000
    var_170 = *rax_8
    float var_16c_5 = rax_8[1]
    float var_168_5 = rax_8[2]
    float var_164_5 = rax_8[3]
    zmm0_5 = *(arg2 + 0x15c) f- *(arg2 + 0x160)
    zmm2_5.o = *(arg2 + 0xb4)
    zmm3_5[0] = zmm3_5[0] f/ (1f - zmm3_5[0] f* zmm3_5[0] + 1f)
    cond:2_1 = __andps_xmmxud_memxud(zmm3_5, data_142d3f770)[0] f> zmm0_5
else
    if ((*(arg2 + 0x14c) & 0x20) != 0)
        zmm6_3 = zmm11_1
        zmm14[0] = zmm14[0] * 0f
        zmm13[0] = zmm13[0] - zmm7_2
        zmm9_3[0] = zmm9_3[0] * zmm9_3[0]
        zmm14[0] = zmm14[0] + zmm13[0]
        zmm9_3[0] = zmm9_3[0] - 0.5f
        zmm13[0] = zmm13[0] * zmm9_3[0]
        zmm14[0] = zmm14[0] + zmm7_2
        zmm14[0]
        zmm9_3[0] = zmm9_3[0] * 0f
        zmm14[0] = zmm14[0] - zmm13[0]
        zmm13[0] = zmm13[0] + zmm9_3[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm9_3[0]
        zmm14[0] = zmm14[0] * zmm9_3[0]
        zmm13[0] = zmm13[0] * zmm14[0]
        zmm13[0] = zmm13[0] + zmm14[0]
        zmm9_3[0]
        zmm12[0] = zmm12[0] * zmm14[0]
        zmm14[0] = zmm14[0] + zmm9_3[0]
        zmm6_3[0] = zmm6_3[0] + zmm13[0]
        zmm13[0]
        zmm14[0] = zmm14[0] + zmm12[0]
        zmm14[0] = zmm14[0] + var_138
        float zmm10_3
        rax_6, zmm6_4, zmm7_3, zmm8_4, zmm10_3 = sub_1417c7990(&var_150, &var_dc, &var_170)
        zmm3_4 = *(arg2 + 0xb0)
        var_170 = *rax_6
        uint32_t var_16c_2 = rax_6[1][0]
        float var_168_2 = rax_6[2]
        zmm0_4 = *(arg2 + 0x164) f- *(arg2 + 0x16c)
        uint32_t var_164_2 = rax_6[3][0]
        zmm1_4 = var_12c
        zmm1_4[0] = zmm1_4[0] f/ (zmm10_3 + 1f)
        cond:3_1 = __andps_xmmxud_memxud(zmm1_4, data_142d3f770)[0] f> zmm0_4
        goto label_1427eb6fb
    
    zmm0_3 = var_e8
    zmm5_2[0] = zmm5_2[0] * arg_18
    zmm10_2 = arg_10
    zmm6_3 = zmm11_1
    zmm0_3[0] = zmm0_3[0] * zmm8_3[0]
    zmm10_2[0] = zmm10_2[0] * zmm3_3[0]
    zmm14[0] = zmm14[0] * 0f
    zmm9_3[0] = zmm9_3[0] * zmm9_3[0]
    zmm10_2[0] = zmm10_2[0] + zmm5_2[0]
    zmm14[0] = zmm14[0] + zmm13[0]
    zmm9_3[0] = zmm9_3[0] - 0.5f
    zmm10_2[0] = zmm10_2[0] + zmm0_3[0]
    zmm13[0] = zmm13[0] - zmm7_2
    zmm14[0] = zmm14[0] + zmm7_2
    zmm14[0]
    zmm9_3[0] = zmm9_3[0] * 0f
    zmm14[0] = zmm14[0] - zmm13[0]
    zmm13[0] = zmm13[0] * zmm9_3[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm9_3[0]
    zmm13[0] = zmm13[0] + zmm9_3[0]
    zmm14[0] = zmm14[0] * zmm9_3[0]
    zmm9_3[0]
    zmm13[0] = zmm13[0] * zmm14[0]
    zmm12[0] = zmm12[0] * zmm14[0]
    zmm13[0] = zmm13[0] + zmm14[0]
    zmm14[0] = zmm14[0] + zmm9_3[0]
    zmm13[0]
    zmm6_3[0] = zmm6_3[0] + zmm13[0]
    zmm14[0] = zmm14[0] + zmm12[0]
    zmm14[0] = zmm14[0] + var_138
    float* rax_7
    uint32_t zmm10_4[0x4]
    rax_7, zmm2_5, zmm6_5, zmm7_4, zmm8_5, zmm10_4 = sub_1417c7990(&var_150, &var_dc, &var_128)
    zmm2_5.o = 0x3f800000
    var_170 = *rax_7
    float var_16c_3 = rax_7[1]
    float var_168_3 = rax_7[2]
    float var_164_3 = rax_7[3]
    zmm0_5 = *(arg2 + 0x158) f- *(arg2 + 0x160)
    zmm2_5.o = *(arg2 + 0xb0)
    zmm10_4[0] = zmm10_4[0] f/ (1f - zmm10_4[0] f* zmm10_4[0] + 1f)
    cond:2_1 = __andps_xmmxud_memxud(zmm10_4, data_142d3f770)[0] f> zmm0_5
int64_t r9
r9.b = cond:2_1
var_160_1.d = zmm6_5
var_160_1:4.d = zmm7_4
int32_t var_158_3 = zmm8_5
return (*(*arg1 + 0x28))(arg1, &var_170, zmm2_5, r9, var_188)
