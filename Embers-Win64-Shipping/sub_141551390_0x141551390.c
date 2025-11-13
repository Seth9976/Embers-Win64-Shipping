// 函数: sub_141551390
// 地址: 0x141551390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t rdi = arg4
void* result = nullptr

if (*(arg4 + 8) != 0xc)
    rdi = 0

if (*(arg3 + 0xa) != 0 && rdi != 0)
    int64_t rcx = sx.q(arg1[1].d)
    void* rax_4 = *arg1
    float zmm6[0x4] = data_14399f668
    int64_t r8 = rcx * 3
    int64_t rdx = *(rax_4 + 0x28)
    int128_t* rcx_2 = (rcx << 4) + *(rax_4 + 0x68)
    int64_t* var_268 = arg1
    float var_108[0x4] = *rcx_2
    float zmm0[0x4] = *(rdx + (r8 << 2) + 8)
    float zmm3[0x4] = *(rdx + (r8 << 2))
    float temp0_1[0x4] = _mm_unpacklo_ps(*(rdx + (r8 << 2) + 4), 0)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    zmm0 = data_14399f670
    float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float temp0_4[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), temp0_4[0].q)
    float var_e8_1[0x4] = temp0_6
    float var_f8_1[0x4] = temp0_3
    float (* rax_5)[0x4] = sub_141746340(&var_268)
    float var_168[0x4] = *sub_141749180(&var_268)
    float var_158_1[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_5, (*rax_5)[2]), _mm_unpacklo_ps((*rax_5)[1], 0)[0].q)
    float var_148_1[0x4] = temp0_6
    float var_d8[0x3][0x4]
    float (* rax_7)[0x4]
    int512_t zmm6_1
    int512_t zmm7_1
    int512_t zmm8_1
    rax_7, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg5, &var_d8, &var_168)
    zmm8_1.o = *rax_7
    zmm7_1.o = rax_7[1]
    zmm6_1.o = rax_7[2]
    var_268 = arg2
    int128_t* rax_9 = sub_141746340(&var_268)
    float var_138[0x4] = *sub_141749180(&var_268)
    float zmm0_1[0x4] = *(rax_9 + 4)
    float temp0_10[0x4] = _mm_unpacklo_ps(*rax_9, *(rax_9 + 8))
    float temp0_11[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
    float zmm2_1[0x4] = data_14399f66c
    float var_128_1[0x4] = _mm_unpacklo_ps(temp0_10, temp0_11[0].q)
    float var_118_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    float var_a8[0x3][0x4]
    float (* rax_11)[0x4]
    int128_t zmm6_2
    int128_t zmm7_2
    int128_t zmm8_2
    rax_11, zmm6_2, zmm7_2, zmm8_2 = sub_140ad7d70(arg6, &var_a8, &var_138)
    float zmm3_2[0x4] = *rax_11
    int128_t zmm2_2 = rax_11[1]
    int128_t zmm1_2 = rax_11[2]
    int64_t* var_1e0_1 = arg2
    int64_t** var_278_1 = &var_268
    int128_t var_1b8_1 = data_142fc5a80
    int128_t var_228_1 = zmm6_2
    int32_t var_280_1 = arg7.d
    int128_t var_238_1 = zmm7_2
    int32_t var_288_1 = arg9.d
    int128_t* var_298_1 = arg6
    var_268.d = 0x3f800000
    int64_t var_1d8_1 = 0
    int32_t var_1d0_1 = 0
    char var_1c8_1 = 1
    int64_t var_1c4_1 = 0
    int32_t var_1bc_1 = 0
    int64_t var_1a8_1 = 0
    int32_t var_1a0_1 = 0
    int32_t var_188_1 = 0x80000001
    int64_t var_180_1 = 0
    int32_t var_178_1 = 2
    int128_t var_248 = zmm8_2
    float var_218_1[0x4] = zmm3_2
    int128_t var_208_1 = zmm2_2
    int128_t var_1f8_1 = zmm1_2
    void* var_198_1 = arg3
    int64_t var_190_1 = arg4
    int32_t var_19c_1 = 0x14
    int64_t* var_1e8_1 = arg1
    int32_t var_170_1 = 0
    int64_t* rax_13
    uint32_t zmm7_3[0x4]
    rax_13, zmm7_3 = sub_1415e7cc0(&var_168, arg3, &var_108, rdi, var_298_1, arg8, var_288_1)
    int32_t zmm3_3 = rax_13[3].d
    
    if (not(zmm3_3 f>= 3.40282347e+38f))
        int64_t var_1c4_2 = *rax_13
        var_1b8_1.q = *(rax_13 + 0xc)
        var_1b8_1:8.d = *(rax_13 + 0x14)
        var_1b8_1:0xc.d = zmm3_3
        int32_t var_1bc_2 = rax_13[1].d
    
    result = sub_141759ad0(arg10, sub_1416f43d0(arg1, var_268.d, zmm7_3, arg8, &var_248), &var_248)

__security_check_cookie(rax_1 ^ &var_2b8)
return result
