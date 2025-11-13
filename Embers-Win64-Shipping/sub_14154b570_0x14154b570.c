// 函数: sub_14154b570
// 地址: 0x14154b570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* const rsi = arg3
void* const rdi = arg4
void* result = nullptr

if (*(arg3 + 8) != 1)
    rsi = nullptr

if (*(arg4 + 8) != 2)
    rdi = nullptr

if (rsi != 0 && rdi != 0)
    int64_t var_228 = arg1
    int128_t* rax_5 = sub_141746340(&var_228)
    int128_t var_208 = *sub_141749180(&var_228)
    float zmm2[0x4] = *(rax_5 + 4)
    float temp0_1[0x4] = _mm_unpacklo_ps(*rax_5, (*(rax_5 + 8)).q)
    int128_t zmm0 = data_14399f670
    float temp0_3[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, 0)[0].q)
    float var_1e8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float var_c8[0x3][0x4]
    float (* rax_7)[0x4]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    rax_7, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_c8, &var_208)
    var_228 = arg2
    zmm8_1.o = *rax_7
    zmm7_1.o = rax_7[1]
    zmm6_1.o = rax_7[2]
    int128_t* rax_8 = sub_141746340(&var_228)
    float var_f8[0x4] = *sub_141749180(&var_228)
    float zmm0_1[0x4] = *(rax_8 + 4)
    float temp0_7[0x4] = _mm_unpacklo_ps(*rax_8, *(rax_8 + 8))
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
    float zmm2_1[0x4] = data_14399f66c
    float var_e8_1[0x4] = _mm_unpacklo_ps(temp0_7, temp0_8[0].q)
    float var_d8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_98[0x3][0x4]
    float (* rax_10)[0x4]
    int128_t zmm6_2
    int128_t zmm7_2
    int128_t zmm8_2
    rax_10, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(arg6, &var_98, &var_f8)
    int64_t var_168_1 = 0
    int32_t var_160_1 = 0
    int128_t zmm2_2 = rax_10[1]
    int128_t zmm1_2 = rax_10[2]
    float var_1a8_1[0x4] = *rax_10
    char var_158_1 = 1
    int64_t var_154_1 = 0
    int32_t var_14c_1 = 0
    uint128_t var_148_1 = data_142fc5a80
    int64_t var_138_1 = 0
    int32_t var_130_1 = 0
    int32_t var_118_1 = 0x80000001
    int64_t var_110_1 = 0
    int32_t var_108_1 = 1
    int128_t var_1d8 = zmm8_2
    int128_t var_1c8_1 = zmm7_2
    int128_t var_1b8_1 = zmm6_2
    uint128_t zmm0_2 = zx.o(*(rsi + 0x10))
    var_208:8.d = *(rsi + 0x18)
    temp0_3[1] = *(rsi + 0x24)
    var_208.q = zmm0_2.q
    int128_t* var_230_1 = &var_1d8
    int128_t var_198_1 = zmm2_2
    int128_t var_188_1 = zmm1_2
    void* var_128_1 = arg3
    void* var_120_1 = arg4
    int32_t var_12c_1 = 0x11
    int64_t var_178_1 = arg1
    int64_t var_170_1 = arg2
    var_208:0xc.q = *(rsi + 0x1c)
    result = sub_1417599c0(arg8, sub_1416fb000(&var_208, arg5, rdi, arg6, arg7.d), &var_1d8)

__security_check_cookie(rax_1 ^ &var_258)
return result
