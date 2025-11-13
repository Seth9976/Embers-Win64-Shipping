// 函数: sub_141552bd0
// 地址: 0x141552bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* const rsi = arg3
void* const rdi = arg4
void* result = nullptr

if (*(arg3 + 8) != 0)
    rsi = nullptr

if (*(arg4 + 8) != 2)
    rdi = nullptr

if (rsi != 0 && rdi != 0)
    int64_t var_238 = arg1
    int128_t* rax_5 = sub_141746340(&var_238)
    int128_t var_138 = *sub_141749180(&var_238)
    float zmm2[0x4] = *(rax_5 + 4)
    float temp0_1[0x4] = _mm_unpacklo_ps(*rax_5, (*(rax_5 + 8)).q)
    int128_t zmm0 = data_14399f670
    float var_128_1[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, 0)[0].q)
    float var_118_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float var_d8[0x3][0x4]
    float (* rax_7)[0x4]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    rax_7, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_d8, &var_138)
    var_238 = arg2
    zmm8_1.o = *rax_7
    zmm7_1.o = rax_7[1]
    zmm6_1.o = rax_7[2]
    int128_t* rax_8 = sub_141746340(&var_238)
    float var_108[0x4] = *sub_141749180(&var_238)
    float zmm0_1[0x4] = *(rax_8 + 4)
    float temp0_7[0x4] = _mm_unpacklo_ps(*rax_8, *(rax_8 + 8))
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
    float zmm2_1[0x4] = data_14399f66c
    float var_f8_1[0x4] = _mm_unpacklo_ps(temp0_7, temp0_8[0].q)
    float var_e8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_a8[0x3][0x4]
    float (* rax_10)[0x4]
    int128_t zmm6_2
    int128_t zmm7_2
    int128_t zmm8_2
    rax_10, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(arg6, &var_a8, &var_108)
    int64_t var_1a8_1 = 0
    int32_t var_1a0_1 = 0
    int128_t zmm2_2 = rax_10[1]
    int128_t zmm1_2 = rax_10[2]
    float var_1e8_1[0x4] = *rax_10
    char var_198_1 = 1
    int64_t var_194_1 = 0
    int32_t var_18c_1 = 0
    int128_t var_188_1 = data_142fc5a80
    int64_t var_178_1 = 0
    int32_t var_170_1 = 0
    int32_t var_158_1 = 0x80000001
    int64_t var_150_1 = 0
    int32_t var_148_1 = 1
    int128_t var_218 = zmm8_2
    int128_t var_208_1 = zmm7_2
    int128_t var_1f8_1 = zmm6_2
    int128_t* var_240_1 = &var_218
    int128_t var_1d8_1 = zmm2_2
    int128_t var_1c8_1 = zmm1_2
    void* var_168_1 = arg3
    void* var_160_1 = arg4
    int32_t var_16c_1 = 7
    int64_t var_1b8_1 = arg1
    int64_t var_1b0_1 = arg2
    result = sub_1417599c0(arg8, sub_141701630(rsi, arg5, rdi, arg6, arg7.d), &var_218)

__security_check_cookie(rax_1 ^ &var_268)
return result
