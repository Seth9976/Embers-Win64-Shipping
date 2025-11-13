// 函数: sub_1415510b0
// 地址: 0x1415510b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* const rdi = arg4
void* result = nullptr

if (*(arg4 + 8) != 0xc)
    rdi = nullptr

if (*(arg3 + 0xa) != 0 && rdi != 0)
    int64_t var_238 = arg1
    int128_t* rax_4 = sub_141746340(&var_238)
    int128_t var_218 = *sub_141749180(&var_238)
    float zmm2[0x4] = *(rax_4 + 4)
    float temp0_1[0x4] = _mm_unpacklo_ps(*rax_4, (*(rax_4 + 8)).q)
    int128_t zmm0 = data_14399f670
    int96_t var_208_1 = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2, 0)[0].q)[0].12
    float var_1f8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float var_d8[0x3][0x4]
    float (* rax_6)[0x4]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    rax_6, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_d8, &var_218)
    var_238 = arg2
    zmm8_1.o = *rax_6
    zmm7_1.o = rax_6[1]
    zmm6_1.o = rax_6[2]
    int128_t* rax_7 = sub_141746340(&var_238)
    float var_108[0x4] = *sub_141749180(&var_238)
    float zmm0_1[0x4] = *(rax_7 + 4)
    float temp0_7[0x4] = _mm_unpacklo_ps(*rax_7, *(rax_7 + 8))
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
    float zmm2_1[0x4] = data_14399f66c
    float var_f8_1[0x4] = _mm_unpacklo_ps(temp0_7, temp0_8[0].q)
    float var_e8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_a8[0x3][0x4]
    float (* rax_9)[0x4]
    int128_t zmm6_2
    int128_t zmm7_2
    int128_t zmm8_2
    rax_9, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(arg6, &var_a8, &var_108)
    int64_t var_178_1 = 0
    int32_t var_170_1 = 0
    float zmm3_2[0x4] = *rax_9
    int128_t zmm2_2 = rax_9[1]
    int128_t zmm1_2 = rax_9[2]
    char var_168_1 = 1
    int64_t var_164_1 = 0
    int32_t var_15c_1 = 0
    int128_t var_158_1 = data_142fc5a80
    int64_t var_148_1 = 0
    int32_t var_140_1 = 0
    int32_t var_128_1 = 0x80000001
    int64_t var_120_1 = 0
    int32_t var_118_1 = 1
    int128_t var_1e8 = zmm8_2
    int128_t var_1d8_1 = zmm7_2
    int128_t var_1c8_1 = zmm6_2
    float var_1b8_1[0x4] = zmm3_2
    int128_t var_1a8_1 = zmm2_2
    int128_t var_198_1 = zmm1_2
    void* var_138_1 = arg3
    void* var_130_1 = arg4
    int32_t var_13c_1 = 0x14
    int64_t var_188_1 = arg1
    int64_t var_180_1 = arg2
    int128_t zmm6_3 = sub_1415e62e0(&var_218, arg3, arg5, rdi, arg6, arg7.d)
    int128_t zmm1_3 = var_208_1:8.d
    
    if (not(zmm1_3.d f>= 3.40282347e+38f))
        int64_t var_164_2 = var_218.q
        int32_t var_15c_2 = var_218:8.d
        var_158_1.q = var_218:0xc.q
        var_158_1:0xc.d = zmm1_3.d
        var_158_1:8.d = var_208_1:4.d
    
    result = sub_1417599c0(arg8, zmm6_3, &var_1e8)

__security_check_cookie(rax_1 ^ &var_268)
return result
