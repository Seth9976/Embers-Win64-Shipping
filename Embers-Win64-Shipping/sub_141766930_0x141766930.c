// 函数: sub_141766930
// 地址: 0x141766930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = (*arg1)[0x2a]
uint128_t zmm1 = zx.o(*(arg6 + 0x5c))
int128_t zmm9 = arg1[0xa][0]
uint128_t zmm10 = (*arg1)[0x29]
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int128_t zmm5
zmm5.d = zmm9.d f* zmm8.d
float rax = *(arg6 + 0x64)
uint64_t var_118 = zmm1.q
float zmm4 = var_118.d
int128_t zmm13
zmm13.d = zmm7.d f* zmm4
uint128_t zmm11
zmm11.d = zmm10.d f* rax
var_118 = 0
zmm11.d = zmm11.d f- zmm7.d f* zmm8.d
zmm13.d = zmm13.d f- zmm9.d * rax
zmm11.d = zmm11.d f+ zmm11.d
zmm5.d = zmm5.d f- zmm10.d * zmm4
float zmm0 = (*arg1)[0x2b]
zmm13.d = zmm13.d f+ zmm13.d
zmm1.d = zmm11.d f* zmm0
zmm5.d = zmm5.d f+ zmm5.d
zmm1.d = zmm1.d f+ zmm4
int128_t zmm2
zmm2.d = zmm13.d f* zmm0
float zmm3 = zmm5.d * zmm0
zmm2.d = zmm2.d f+ zmm8.d
zmm0 = zmm13.d f* zmm7.d
int128_t zmm6
zmm6.d = zmm5.d f* zmm10.d
int32_t var_110_1 = 0
zmm13.d = zmm13.d f* zmm9.d
zmm6.d = zmm6.d f- zmm0
zmm5.d = zmm5.d f* zmm9.d
zmm0 = zmm11.d f* zmm7.d
zmm6.d = zmm6.d f+ zmm1.d
zmm11.d = zmm11.d f* zmm10.d
zmm6.d = zmm6.d f+ arg1[8][0]
zmm13.d = zmm13.d f- zmm11.d
zmm7.d = (*arg1)[0x23].d f- zmm6.d
zmm13.d = zmm13.d f+ zmm3 + rax
zmm13.d = zmm13.d f+ (*arg1)[0x22]
zmm6.d = arg1[9][0].d f- (zmm0 f- zmm5.d f+ zmm2.d + (*arg1)[0x21])
zmm8.d = (*arg1)[0x25].d f- zmm13.d
float var_c8[0x4][0x4]
float (* rax_1)[0x4]
int32_t zmm1_1[0x8]
int32_t zmm2_1[0x8]
int128_t zmm6_1
float zmm7_1[0x4]
int128_t zmm8_1
float zmm9_1
int32_t zmm10_1
int128_t zmm14_1
rax_1, zmm1_1, zmm2_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm14_1 =
    sub_140ad9d00(&var_c8, &arg1[0xa])
zmm1_1[0].o = rax_1[1]
float var_108[0x4] = *rax_1
int128_t var_f8 = zmm1_1[0].o
zmm1_1[0].o = rax_1[3]
float var_e8[0x4] = rax_1[2]
int64_t rax_3 = sx.q(arg4) * 2
int128_t var_d8 = zmm1_1[0].o
zmm2_1[0].o = var_108[rax_3 * 2]
float zmm3_1[0x4] = var_108[1 + rax_3 * 2]
int32_t zmm4_1 = zmm2_1[0]
int128_t zmm5_1 = var_108[2 + rax_3 * 2]
zmm3_1[0] = zmm3_1[0] f* zmm6_1.d
zmm1_1[0].o = zmm5_1
zmm1_1[0] = zmm1_1[0] f* zmm8_1.d
zmm4_1 = zmm4_1 f* zmm7_1[0] f+ zmm3_1[0] f+ zmm1_1[0]
zmm2_1[0] = zmm2_1[0] f* zmm4_1
zmm3_1[0] = zmm3_1[0] f* zmm4_1
zmm7_1[0] = zmm7_1[0] f- zmm2_1[0]
zmm5_1.d = zmm5_1.d f* zmm4_1
zmm6_1.d = zmm6_1.d f- zmm3_1[0]
zmm8_1.d = zmm8_1.d f- zmm5_1.d
zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
zmm2_1[0].o = zmm6_1
zmm2_1[0] = zmm2_1[0] f* zmm6_1.d
zmm1_1[0].o = zmm8_1
zmm1_1[0] = zmm1_1[0] f* zmm8_1.d
zmm2_1[0] = zmm2_1[0] f+ zmm7_1[0]
zmm2_1[0] = zmm2_1[0] f+ zmm1_1[0]
float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2_1[0])

if (not(temp0_1[0] <= 9.99999975e-05f))
    float zmm0_1[0x4] = 0x3f800000
    zmm9_1 = temp0_1[0]
    zmm0_1[0] = 1f / temp0_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm0_1[0]
    zmm6_1.d = zmm6_1.d f* zmm0_1[0]
    zmm8_1.d = zmm8_1.d f* zmm0_1[0]
    var_118.d = zmm7_1[0]
    var_118:4.d = zmm6_1.d
    int32_t var_110_2 = zmm8_1.d

if (not(zmm9_1 <= (*arg1)[0x63]))
    zmm2_1[0].o = *(arg5 + 0x30)
    
    if (not(zmm2_1[0] f> zmm10_1))
        zmm2_1[0].o = *(arg6 + 0x74)
    
    zmm3_1 = *(arg5 + 0x34)
    
    if (not(zmm3_1[0] f> zmm10_1))
        zmm3_1 = *(arg6 + 0x78)
    
    zmm1_1[0].o = zmm14_1
    float (* rcx)[0x4]
    rcx.b = *(arg6 + 0xb0) == 0
    sub_140038d90(arg1, zmm1_1, zmm2_1, zmm3_1, rcx.b, &var_118, zmm9_1, &(*arg1)[0x27])

*arg2 = 0
arg2[1] = 1
return arg2
