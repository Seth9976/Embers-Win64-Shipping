// 函数: sub_141551fd0
// 地址: 0x141551fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* var_218 = arg1
int128_t* rax_3 = sub_141746340(&var_218)
int128_t var_128 = *sub_141749180(&var_218)
float zmm2[0x4] = *(rax_3 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*rax_3, (*(rax_3 + 8)).q)
int128_t zmm0 = data_14399f670
float var_118[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float var_108[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
float var_c8[0x3][0x4]
float (* rax_5)[0x4]
int512_t zmm6
int512_t zmm7
int512_t zmm8
rax_5, zmm6, zmm7, zmm8 = sub_140ad7d70(arg3, &var_c8, &var_128)
var_218 = arg2
zmm6.o = *rax_5
zmm7.o = rax_5[1]
zmm8.o = rax_5[2]
int128_t* rax_6 = sub_141746340(&var_218)
float var_f8[0x4] = *sub_141749180(&var_218)
float zmm0_1[0x4] = *(rax_6 + 4)
float temp0_6[0x4] = _mm_unpacklo_ps(*rax_6, *(rax_6 + 8))
float temp0_7[0x4] = _mm_unpacklo_ps(zmm0_1, 0)
float zmm2_1[0x4] = data_14399f66c
float var_e8[0x4] = _mm_unpacklo_ps(temp0_6, temp0_7[0].q)
float var_d8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
    _mm_unpacklo_ps(zmm2_1, 0)[0].q)
float var_98[0x3][0x4]
float (* rax_8)[0x4]
float zmm6_1[0x4]
int128_t zmm7_1
int128_t zmm8_1
rax_8, zmm6_1, zmm7_1, zmm8_1 = sub_140ad7d70(arg4, &var_98, &var_f8)
int64_t var_198 = 0
int32_t var_190 = 0
float zmm1_1[0x4] = *rax_8
int128_t zmm2_2 = rax_8[1]
int128_t zmm3_2 = rax_8[2]
int64_t* rax_9 = nullptr
int64_t var_140 = 0
char var_188 = 1
int64_t var_184 = 0
int32_t var_17c = 0
float var_178[0x4] = data_142fc5a80
int64_t var_168 = 0
int32_t var_160 = 0
int32_t var_148 = 0x80000001
char rdx_2 = *(arg1 + 0xc)
int64_t* r9_1 = nullptr
int32_t var_138 = 1
float var_208[0x4] = zmm6_1

if (rdx_2 u>= 2)
    r9_1 = arg1

int128_t var_1f8 = zmm7_1
int128_t var_1e8 = zmm8_1
float var_1d8[0x4] = zmm1_1
int128_t var_1c8 = zmm2_2
int128_t var_1b8 = zmm3_2
int32_t var_15c = 0x15
char r8_3

if (r9_1 == 0)
    r8_3 = 0
else
    int64_t* rcx_6 = nullptr
    
    if (rdx_2 u>= 1)
        rcx_6 = arg1
    
    if (rcx_6 == 0)
        r8_3 = 0
    else
        if (*(rcx_6 + 0xc) u>= 2)
            rax_9 = rcx_6
        
        if (rax_9 == 0 || *(sx.q(rax_9[1].d) + *(*rax_9 + 0x398)) != 4)
            r8_3 = 0
        else
            r8_3 = 1

int64_t r8
int64_t r9

if (*(*(*arg2 + 0x80) + (sx.q(arg2[1].d) << 3)) == 0)
label_141552269:
    int64_t* var_1a8_1 = arg2
    int64_t* var_1a0_1 = arg1
    var_208 = zmm1_1
    int128_t var_1f8_1 = zmm2_2
    int128_t var_1e8_1 = zmm3_2
    float var_1d8_1[0x4] = zmm6_1
    int128_t var_1c8_1 = zmm7_1
    int128_t var_1b8_1 = zmm8_1
    int64_t var_158_1 = r9
    int64_t var_150_1 = r8
else
    if (r8_3 != 0)
        void* rax_13 = *(*(*r9_1 + 0x320) + (sx.q(r9_1[1].d) << 3))
        
        if (rax_13 == 0 || *(rax_13 + 0x18) == 0)
            void* rax_15 = *(*(*arg1 + 0x80) + (sx.q(arg1[1].d) << 3))
            
            if (rax_15 != 0 && *(rax_15 + 8) != 5)
                goto label_141552269
    
    int64_t* var_1a8 = arg1
    int64_t* var_1a0 = arg2
    int64_t var_158 = r8
    int64_t var_150 = r9
void* result = sub_1417599c0(arg6, sub_1416ff990(arg5, &var_208), &var_208)
__security_check_cookie(rax_1 ^ &var_238)
return result
