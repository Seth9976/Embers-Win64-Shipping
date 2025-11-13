// 函数: sub_142239e10
// 地址: 0x142239e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void* var_200 = arg5
void* var_208
void* r10 = &var_208 - arg1
var_208 = arg4
int64_t* result = arg1
int64_t i_1 = 2
int64_t i

do
    *arg1 = *(r10 + arg1)
    arg1 = &arg1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
result[2] = arg2
void var_1e8
sub_141761e00(&var_1e8)
uint32_t var_128[0x4]
int128_t var_c8

if (arg3 == 0)
    int64_t* rax_5 = *(arg4 + 0x10)
    float zmm5[0x4] = data_14399f668
    void* rcx_4 = *rax_5
    int64_t rdx_3 = sx.q(rax_5[1].d)
    int64_t rax_6 = *(rcx_4 + 0x28)
    int64_t r8 = rdx_3 * 3
    int64_t zmm0 = *(rax_6 + (r8 << 2) + 8)
    float zmm2[0x4] = *(rax_6 + (r8 << 2) + 4)
    float zmm3[0x4] = *(rax_6 + (r8 << 2))
    int64_t* rax_7 = *(arg5 + 0x10)
    int128_t var_98 = *((rdx_3 << 4) + *(rcx_4 + 0x68))
    zmm3 = _mm_unpacklo_ps(zmm3, zmm0)
    zmm0 = data_14399f670
    float var_88_1[0x4] = _mm_unpacklo_ps(zmm3, _mm_unpacklo_ps(zmm2, 0)[0].q)
    zmm2 = _mm_unpacklo_ps(data_14399f66c, 0)
    zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm0), zmm2[0].q)
    float var_78_1[0x4] = zmm5
    void* rcx_5 = *rax_7
    int64_t rdx_6 = sx.q(rax_7[1].d)
    int64_t rax_8 = *(rcx_5 + 0x28)
    int64_t r8_1 = rdx_6 * 3
    int128_t zmm4 = *((rdx_6 << 4) + *(rcx_5 + 0x68))
    float var_b8_1[0x4] = _mm_unpacklo_ps(
        _mm_unpacklo_ps(*(rax_8 + (r8_1 << 2)), *(rax_8 + (r8_1 << 2) + 8)), 
        _mm_unpacklo_ps(*(rax_8 + (r8_1 << 2) + 4), 0)[0].q)
    var_c8 = zmm4
    float var_a8_1[0x4] = zmm5
    float var_68[0x3][0x4]
    float (* rax_9)[0x4]
    int128_t zmm6_1
    rax_9, zmm6_1 = sub_140ad7d70(&var_c8, &var_68, &var_98)
    uint32_t var_118_2[0x4] = rax_9[1]
    int128_t var_108_1 = rax_9[2]
    var_128 = *rax_9
    uint32_t zmm2_2[0x4] = data_143f515b0
    uint32_t zmm1_2[0x4] = zmm2_2
    int128_t var_e8_1 = zmm6_1
    zmm2_2 = __andps_xmmxud_memxud(zmm2_2, data_143f515c0)
    zmm1_2[0].q = zmm6_1 u>> 0x40
    int128_t var_f8_1 = _mm_shuffle_ps(zx.o(0), zmm1_2, 0xc4)
    int32_t var_1a4_1 = 0x41200000
    int32_t var_1a0_1 = 0x3f800000
    uint32_t var_d8_1[0x4] = zmm2_2
    int32_t var_1d8_1 = 1
    int32_t var_1d4_1 = 1
    int64_t var_1d0_1 = 1
    int32_t var_1ac_1 = 0
else
    uint32_t (* rax_3)[0x4] = sub_142231940(arg3, &var_c8, 0)
    float zmm1[0x4] = rax_3[1]
    int128_t zmm0_1 = rax_3[2]
    var_128 = *rax_3
    int128_t var_108 = zmm0_1
    uint32_t (* rax_4)[0x4] = sub_142231940(arg3, &var_c8, 1)
    float zmm5_1[0x4] = rax_4[1]
    float var_d8[0x4] = rax_4[2]
    uint32_t var_f8[0x4] = *rax_4
    uint32_t zmm1_1[0x4] = *(arg3 + 0x1a0)
    float zmm4_1[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q), _mm_unpacklo_ps(zmm1_1, 0)[0].q)
    float var_118_1[0x4] = _mm_mul_ps(zmm1, zmm4_1)
    float var_e8[0x4] = _mm_mul_ps(zmm5_1, zmm4_1)
    sub_142254620(arg3, &var_1e8)
sub_14177ead0(&var_1e8)
var_208 = *(arg4 + 0x10)
int64_t var_200_1 = *(arg5 + 0x10)
void* rcx_10 = result[2]
int128_t var_1f8 = var_208.o
result[3] = sub_141764010(rcx_10, &var_1f8, &var_128, &var_1e8)
__security_check_cookie(rax_1 ^ &var_228)
return result
