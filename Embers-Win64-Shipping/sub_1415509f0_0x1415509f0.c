// 函数: sub_1415509f0
// 地址: 0x1415509f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t var_288 = arg1
int128_t* rax_2 = sub_141746340(&var_288)
int128_t var_138 = *sub_141749180(&var_288)
float zmm2[0x4] = *(rax_2 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*rax_2, (*(rax_2 + 8)).q)
int128_t zmm0 = data_14399f670
float var_128[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float var_118[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
float var_d8[0x3][0x4]
float (* rax_4)[0x4]
int512_t zmm6
int512_t zmm7
int512_t zmm8
rax_4, zmm6, zmm7, zmm8 = sub_140ad7d70(arg5, &var_d8, &var_138)
var_288 = arg2
zmm6.o = *rax_4
zmm7.o = rax_4[1]
zmm8.o = rax_4[2]
int128_t* rax_5 = sub_141746340(&var_288)
float var_108[0x4] = *sub_141749180(&var_288)
float zmm0_1[0x4] = *(rax_5 + 4)
float temp0_6[0x4] = _mm_unpacklo_ps(*rax_5, *(rax_5 + 8))
float temp0_7[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
float zmm2_1[0x4] = data_14399f66c
float var_f8[0x4] = _mm_unpacklo_ps(temp0_6, temp0_7[0].q)
float var_e8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
    _mm_unpacklo_ps(zmm2_1, 0)[0].q)
float var_a8[0x3][0x4]
float (* rax_7)[0x4]
int128_t zmm6_1
int128_t zmm7_1
int128_t zmm8_1
rax_7, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg6, &var_a8, &var_108)
int128_t zmm0_2 = data_142fc5a80
int64_t var_208 = 0
int32_t var_200 = 0
float zmm1_1[0x4] = *rax_7
int128_t zmm2_2 = rax_7[1]
int128_t zmm3_2 = rax_7[2]
char var_1f8 = 1
int64_t var_1f4 = 0
int32_t var_1ec = 0
int64_t var_1d8 = 0
int32_t var_1d0 = 0
int32_t var_1b8 = 0x80000001
int128_t var_278 = zmm6_1
int128_t var_268 = zmm7_1
int128_t var_258 = zmm8_1
int64_t var_218 = arg1
float var_248[0x4] = zmm1_1
int128_t var_238 = zmm2_2
int128_t var_228 = zmm3_2
int64_t var_1c8 = arg3
int64_t* var_1c0 = arg4
int32_t var_1cc = 0x12
int64_t var_210 = arg2
int64_t var_1b0 = 0
uint128_t* result

if (data_1439b8d50 == 0)
    int32_t var_1a8_1 = 1
    result = sub_1417599c0(arg8, sub_1416feda0(arg3, arg5, arg4, arg6, arg7.d, &var_278), &var_278)
else
    int128_t* rcx_7 = &var_278
    int64_t var_150_1 = 0
    int32_t var_148_1 = 0
    int128_t* r8_2 = arg6
    int128_t var_198
    __builtin_memset(&var_198, 0, 0x18)
    int32_t var_1a8 = 3
    int64_t var_1a0_1 = -1
    int32_t var_144_1 = 4
    int32_t zmm6_2
    
    if ((*(arg3 + 8) & 0x3f) != 8)
        zmm6_2 = sub_1416ff370(rcx_7, arg5, r8_2)
    else
        zmm6_2 = sub_141700fa0(rcx_7, arg5, r8_2)
    
    int32_t zmm6_3
    result, zmm6_3 = sub_1416feda0(arg3, arg5, arg4, arg6, zmm6_2, &var_278)
    
    if (not(zmm0_2:0xc.d f>= zmm6_3))
        int64_t rdi_1 = sx.q(arg8[0x185].d)
        void* rbx_2 = &arg8[0xe4]
        int32_t rax_9 = (rdi_1 + 1).d
        *(rbx_2 + 0xa10) = rax_9
        
        if (rax_9 s> *(rbx_2 + 0xa14))
            sub_141750150(rbx_2, rdi_1.d)
        
        void* rax_10 = *(rbx_2 + 0xa00)
        
        if (rax_10 != 0)
            rbx_2 = rax_10
        
        result = sub_1417042c0(rdi_1 * 0x140 + rbx_2, &var_278)
    
    if (var_150_1 != 0)
        result = sub_140a74f90(var_150_1)

__security_check_cookie(rax_1 ^ &var_2b8)
return result
