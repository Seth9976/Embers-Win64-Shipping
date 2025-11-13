// 函数: sub_141550d50
// 地址: 0x141550d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t rcx = sx.q(arg1[1].d)
float zmm6[0x4] = data_14399f668
int64_t r8 = rcx * 3
void* rax_4 = *arg1
int64_t* var_268 = arg1
int64_t rdx = *(rax_4 + 0x28)
float var_108[0x4] = *((rcx << 4) + *(rax_4 + 0x68))
float zmm0[0x4] = *(rdx + (r8 << 2) + 8)
float zmm3[0x4] = *(rdx + (r8 << 2))
float temp0[0x4] = _mm_unpacklo_ps(*(rdx + (r8 << 2) + 4), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), temp0_3[0].q)
float var_e8[0x4] = temp0_5
float var_f8[0x4] = temp0_2
float (* rax_5)[0x4] = sub_141746340(&var_268)
float var_168[0x4] = *sub_141749180(&var_268)
float var_158[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_5, (*rax_5)[2]), _mm_unpacklo_ps((*rax_5)[1], 0)[0].q)
float var_148[0x4] = temp0_5
float var_d8[0x3][0x4]
float (* rax_7)[0x4]
int512_t zmm6_1
int512_t zmm7
int512_t zmm8
rax_7, zmm6_1, zmm7, zmm8 = sub_140ad7d70(arg5, &var_d8, &var_168)
var_268 = arg2
zmm8.o = *rax_7
zmm7.o = rax_7[1]
zmm6_1.o = rax_7[2]
int128_t* rax_8 = sub_141746340(&var_268)
float var_138[0x4] = *sub_141749180(&var_268)
float zmm0_1[0x4] = *(rax_8 + 4)
float temp0_9[0x4] = _mm_unpacklo_ps(*rax_8, *(rax_8 + 8))
float temp0_10[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
float zmm2_1[0x4] = data_14399f66c
float var_128[0x4] = _mm_unpacklo_ps(temp0_9, temp0_10[0].q)
float var_118[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
    _mm_unpacklo_ps(zmm2_1, 0)[0].q)
float var_a8[0x3][0x4]
float (* rax_10)[0x4]
int128_t zmm6_2
int128_t zmm7_1
int128_t zmm8_1
rax_10, zmm6_2, zmm7_1, zmm8_1 = sub_140ad7d70(arg6, &var_a8, &var_138)
int128_t var_1b8 = data_142fc5a80
float zmm3_2[0x4] = *rax_10
int128_t zmm2_2 = rax_10[1]
int128_t zmm1_2 = rax_10[2]
int64_t** var_278 = &var_268
int128_t var_228 = zmm6_2
int32_t var_280 = arg7.d
int128_t var_238 = zmm7_1
int32_t var_288 = arg9.d
var_268.d = 0x3f800000
int64_t var_1d8 = 0
int32_t var_1d0 = 0
char var_1c8 = 1
int64_t var_1c4 = 0
int32_t var_1bc = 0
int64_t var_1a8 = 0
int32_t var_1a0 = 0
int32_t var_188 = 0x80000001
int64_t var_180 = 0
int32_t var_178 = 2
int128_t var_248 = zmm8_1
float var_218[0x4] = zmm3_2
int128_t var_208 = zmm2_2
int128_t var_1f8 = zmm1_2
float (* var_198)[0x4] = arg3
int64_t var_190 = arg4
int32_t var_19c = 0x12
int64_t* var_1e8 = arg1
int64_t* var_1e0 = arg2
int32_t var_170 = 0
int64_t* rax_11
uint32_t zmm7_2[0x4]
rax_11, zmm7_2 = sub_141553fa0(&var_168, arg3, &var_108, arg4, arg6, arg8, var_288)
int32_t zmm3_3 = rax_11[3].d

if (not(zmm3_3 f>= 3.40282347e+38f))
    int64_t var_1c4_1 = *rax_11
    var_1b8.q = *(rax_11 + 0xc)
    var_1b8:8.d = *(rax_11 + 0x14)
    var_1b8:0xc.d = zmm3_3
    int32_t var_1bc_1 = rax_11[1].d

void* result =
    sub_141759ad0(arg10, sub_1416f43d0(arg1, var_268.d, zmm7_2, arg8, &var_248), &var_248)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
