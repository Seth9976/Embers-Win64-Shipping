// 函数: sub_14154aec0
// 地址: 0x14154aec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* result = arg1
float var_230[0x4]
var_230[0].q = arg1
void* const rsi = arg3
void* const rdi = arg4

if (*(arg3 + 8) != 1)
    rsi = nullptr

if (*(arg4 + 8) != 1)
    rdi = nullptr

if (rsi != 0 && rdi != 0)
    void* result_1 = result
    int128_t* rax_2 = sub_141746340(&result_1)
    int128_t var_208 = *sub_141749180(&result_1)
    float zmm2[0x4] = *(rax_2 + 4)
    float temp0_1[0x4] = _mm_unpacklo_ps(*rax_2, (*(rax_2 + 8)).q)
    int128_t zmm0 = data_14399f670
    int96_t var_1f8_1 = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, 0)[0].q)[0].12
    float var_1e8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    uint64_t var_c8
    float (* rax_4)[0x4]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    rax_4, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_c8, &var_208)
    result_1 = arg2
    zmm8_1.o = *rax_4
    zmm7_1.o = rax_4[1]
    zmm6_1.o = rax_4[2]
    int128_t* rax_5 = sub_141746340(&result_1)
    float var_1d8[0x4] = *sub_141749180(&result_1)
    float zmm0_1[0x4] = *(rax_5 + 4)
    float temp0_7[0x4] = _mm_unpacklo_ps(*rax_5, *(rax_5 + 8))
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
    float zmm2_1[0x4] = data_14399f66c
    float temp0_9[0x4] = _mm_unpacklo_ps(temp0_7, temp0_8[0].q)
    float var_1b8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_98[0x3][0x4]
    float (* rax_7)[0x4]
    int128_t zmm6_2
    int128_t zmm7_2
    int128_t zmm8_2
    rax_7, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(arg6, &var_98, &var_1d8)
    int64_t var_138_1 = 0
    int32_t var_130_1 = 0
    float zmm3_2[0x4] = *rax_7
    int128_t zmm2_2 = rax_7[1]
    int128_t zmm1_2 = rax_7[2]
    char var_128_1 = 1
    int64_t var_124_1 = 0
    int32_t var_11c_1 = 0
    uint128_t var_118_1 = data_142fc5a80
    int64_t var_108_1 = 0
    int32_t var_100_1 = 0
    int32_t var_e8_1 = 0x80000001
    int64_t var_e0_1 = 0
    int32_t var_d8_1 = 1
    int128_t var_1a8 = zmm8_2
    int128_t var_198_1 = zmm7_2
    int128_t var_188_1 = zmm6_2
    int64_t var_148_1 = var_230[0].q
    int32_t rax_9 = *(rdi + 0x18)
    var_c8 = *(rdi + 0x10)
    int32_t var_c0_1 = rax_9
    uint64_t var_bc_1 = *(rdi + 0x1c)
    int32_t var_b4_1 = *(rdi + 0x24)
    var_1d8[0].q = *(rsi + 0x10)
    uint128_t zmm0_2 = zx.o(*(rsi + 0x1c))
    var_1d8[2] = *(rsi + 0x18)
    temp0_9[1] = *(rsi + 0x24)
    var_1d8[3].q = zmm0_2.q
    float (* var_240_1)[0x4] = &var_230
    var_230[0] = 0x3f800000
    float var_178_1[0x4] = zmm3_2
    int128_t var_168_1 = zmm2_2
    int128_t var_158_1 = zmm1_2
    void* var_f8_1 = arg3
    void* var_f0_1 = arg4
    int32_t var_fc_1 = 0xd
    void* var_140_1 = arg2
    var_230[1].q = 0
    sub_1415c6910(&var_208, &var_1d8, arg5, &var_c8, arg6, var_240_1)
    int128_t zmm1_3 = var_1f8_1:8.d
    
    if (not(zmm1_3.d f>= 3.40282347e+38f))
        int64_t var_124_2 = var_208.q
        int32_t var_11c_2 = var_208:8.d
        var_118_1.q = var_208:0xc.q
        var_118_1:0xc.d = zmm1_3.d
        var_118_1:8.d = var_1f8_1:4.d
    
    result = sub_1417599c0(arg8, arg7, &var_1a8)

__security_check_cookie(rax_1 ^ &var_268)
return result
