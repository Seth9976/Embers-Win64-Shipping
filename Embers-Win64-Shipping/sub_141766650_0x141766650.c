// 函数: sub_141766650
// 地址: 0x141766650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = (*arg1)[0x2a]
uint128_t zmm0 = zx.o(*(arg6 + 0x5c))
uint64_t var_128 = zmm0.q
uint128_t zmm4 = var_128.d
uint128_t zmm8 = arg1[0xa][0]
int128_t zmm11 = (*arg1)[0x29]
uint128_t zmm14
zmm14.d = zmm4.d f* zmm6.d
uint128_t zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float rax = *(arg6 + 0x64)
zmm0.d = zmm7.d f* zmm6.d
int128_t zmm12
zmm12.d = zmm11.d f* rax
uint128_t zmm5
zmm5.d = zmm7.d f* zmm8.d
zmm12.d = zmm12.d f- zmm0.d
zmm0.d = zmm8.d f* rax
zmm14.d = zmm14.d f- zmm0.d
zmm0.d = zmm4.d f* zmm11.d
zmm12.d = zmm12.d f+ zmm12.d
zmm5.d = zmm5.d f- zmm0.d
zmm0 = (*arg1)[0x2b]
zmm14.d = zmm14.d f+ zmm14.d
float zmm1 = zmm12.d f* zmm0.d
int128_t zmm9
zmm9.d = zmm12.d f* zmm6.d
zmm5.d = zmm5.d f+ zmm5.d
zmm12.d = zmm12.d f* zmm11.d
uint128_t zmm2
zmm2.d = zmm14.d f* zmm0.d
uint128_t zmm10 = zmm5
float zmm3 = zmm5.d f* zmm0.d
zmm0.d = zmm14.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm7.d
arg1[8][0]
(*arg1)[0x21]
zmm5.d = zmm5.d f* zmm8.d
zmm14.d = zmm14.d f* zmm8.d
(*arg1)[0x22]
zmm9.d = zmm9.d f- zmm5.d
zmm10.d = zmm10.d f* zmm11.d
zmm14.d = zmm14.d f- zmm12.d
zmm10.d = zmm10.d f- zmm0.d
zmm9.d = zmm9.d f+ zmm2.d
zmm14.d = zmm14.d f+ zmm3 + rax
zmm10.d = zmm10.d f+ zmm1 f+ zmm4.d
float var_d8[0x4][0x4]
float (* rax_1)[0x4]
int32_t zmm1_1[0x8]
int32_t zmm2_1[0x8]
float zmm6_1
float zmm7_1
float zmm8_1
float zmm9_1
float zmm10_1
float zmm14_1
int128_t zmm15_1
rax_1, zmm1_1, zmm2_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm14_1, zmm15_1 =
    sub_140ad9d00(&var_d8, &arg1[0xa])
zmm1_1[0].o = rax_1[1]
float var_118[0x4] = *rax_1
int128_t var_108 = zmm1_1[0].o
zmm1_1[0].o = rax_1[3]
float var_f8[0x4] = rax_1[2]
int128_t var_e8 = zmm1_1[0].o
float zmm4_1[0x4] = arg1[9][0]
int64_t rax_3 = sx.q(arg4) * 2
zmm4_1[0] = zmm4_1[0] - (zmm6_1 + zmm9_1)
float zmm0_1[0x4] = var_118[1 + rax_3 * 2]
zmm1_1[0].o = var_118[rax_3 * 2]
zmm2_1[0].o = var_118[2 + rax_3 * 2]
var_128:4.d = zmm0_1[0]
zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
zmm0_1 = (*arg1)[0x23]
zmm0_1[0] = zmm0_1[0] - (zmm7_1 + zmm10_1)
var_128.d = zmm1_1[0]
int32_t var_120_1 = zmm2_1[0]
zmm0_1[0] = zmm0_1[0] f* zmm1_1[0]
zmm4_1[0] = zmm4_1[0] + zmm0_1[0]
zmm0_1 = (*arg1)[0x25]
zmm0_1[0] = zmm0_1[0] - (zmm14_1 + zmm8_1)
zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
zmm4_1[0] = zmm4_1[0] + zmm0_1[0]

if (not(__andps_xmmxud_memxud(zmm4_1, data_142d3f770)[0] <= (*arg1)[0x63]))
    zmm2_1[0].o = *(arg5 + 0x30)
    
    if (not(zmm2_1[0] f> 0f))
        zmm2_1[0].o = *(arg6 + 0x74)
    
    float zmm3_1[0x4] = *(arg5 + 0x34)
    
    if (not(zmm3_1[0] > 0f))
        zmm3_1 = *(arg6 + 0x78)
    
    zmm1_1[0].o = zmm15_1
    float (* rcx)[0x4]
    rcx.b = *(arg6 + 0xb0) == 0
    sub_140038d90(arg1, zmm1_1, zmm2_1, zmm3_1, rcx.b, &var_128, zmm4_1[0], &(*arg1)[0x27])

*arg2 = 0
arg2[1] = 1
return arg2
