// 函数: sub_141552300
// 地址: 0x141552300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* result = arg1
void* const rsi = arg3
void* const rdi = arg4

if (*(arg3 + 8) != 0)
    rsi = nullptr

if (*(arg4 + 8) != 1)
    rdi = nullptr

if (rsi != 0 && rdi != 0)
    void* result_1 = result
    int128_t* rax_2 = sub_141746340(&result_1)
    int128_t var_f8 = *sub_141749180(&result_1)
    float zmm2[0x4] = *(rax_2 + 4)
    float temp0_1[0x4] = _mm_unpacklo_ps(*rax_2, (*(rax_2 + 8)).q)
    int128_t zmm0 = data_14399f670
    float var_e8_1[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, 0)[0].q)
    float var_d8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float var_c8[0x3][0x4]
    float (* rax_4)[0x4]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    rax_4, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_c8, &var_f8)
    result_1 = arg2
    zmm8_1.o = *rax_4
    zmm7_1.o = rax_4[1]
    zmm6_1.o = rax_4[2]
    int128_t* rax_5 = sub_141746340(&result_1)
    float var_208[0x4] = *sub_141749180(&result_1)
    float zmm0_1[0x4] = *(rax_5 + 4)
    float temp0_7[0x4] = _mm_unpacklo_ps(*rax_5, *(rax_5 + 8))
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
    float zmm2_1[0x4] = data_14399f66c
    float temp0_9[0x4] = _mm_unpacklo_ps(temp0_7, temp0_8[0].q)
    float var_1e8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_98[0x3][0x4]
    float (* rax_7)[0x4]
    int128_t zmm6_2
    int128_t zmm7_2
    int128_t zmm8_2
    rax_7, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(arg6, &var_98, &var_208)
    int64_t var_168_1 = 0
    int32_t var_160_1 = 0
    float zmm3_2[0x4] = *rax_7
    int128_t zmm2_2 = rax_7[1]
    int128_t zmm1_2 = rax_7[2]
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
    void* var_178_1 = arg1
    var_208[0].q = *(rdi + 0x10)
    uint128_t zmm0_2 = zx.o(*(rdi + 0x1c))
    var_208[2] = *(rdi + 0x18)
    int32_t var_230_1 = arg7.d
    temp0_9[1] = *(rdi + 0x24)
    float var_1a8_1[0x4] = zmm3_2
    int128_t var_198_1 = zmm2_2
    int128_t var_188_1 = zmm1_2
    void* var_128_1 = arg3
    void* var_120_1 = arg4
    int32_t var_12c_1 = 3
    void* var_170_1 = arg2
    var_208[3].q = zmm0_2.q
    int64_t* rax_11
    int128_t zmm6_3
    rax_11, zmm6_3 = sub_1416f4ac0(&var_f8, rsi, arg5, &var_208, arg6)
    int128_t zmm1_3 = rax_11[3].d
    
    if (not(zmm1_3.d f>= 3.40282347e+38f))
        int64_t var_154_2 = *rax_11
        var_148_1.q = *(rax_11 + 0xc)
        var_148_1:8.d = *(rax_11 + 0x14)
        var_148_1:0xc.d = zmm1_3.d
        int32_t var_14c_2 = rax_11[1].d
    
    result = sub_1417599c0(arg8, zmm6_3, &var_1d8)

__security_check_cookie(rax_1 ^ &var_258)
return result
