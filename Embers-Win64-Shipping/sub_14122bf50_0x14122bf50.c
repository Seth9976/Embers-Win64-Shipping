// 函数: sub_14122bf50
// 地址: 0x14122bf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
float var_1a8[0x4]
memset(&var_1a8, 0, 0x90)
int64_t rbx = 0
int64_t var_1f0 = 0
float zmm7[0x4] = zx.o(0)
int32_t var_1e8 = 0
int32_t i = 0
float var_200 = 0f
float var_204 = 0f
float zmm0_1[0x4]
float zmm1[0x4]
int128_t zmm8
int128_t zmm9

if (*(arg2 + 0x1148) s> 0)
    zmm6 = 0x3f000000
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx_1 = *(rdi_1 + *(arg2 + 0x1140))
        
        if (rcx_1 != 0)
            zmm0_1 = *(arg3 + 0x1c)
            zmm1 = *(arg3 + 0x20)
            zmm0_1[0] = zmm0_1[0] * zmm6[0]
            int32_t* var_210_1 = &var_1f0
            zmm1[0] = zmm1[0] * zmm6[0]
            float (* var_218_1)[0x4] = &var_1a8
            zmm0_1[0] = zmm0_1[0] f+ *(arg3 + 0x10)
            zmm1[0] = zmm1[0] f+ *(arg3 + 0x14)
            float var_1fc = zmm0_1[0]
            zmm0_1 = *(arg3 + 0x24)
            zmm0_1[0] = zmm0_1[0] * zmm6[0]
            float var_1f8_1 = zmm1[0]
            zmm0_1[0] = zmm0_1[0] f+ *(arg3 + 0x18)
            float var_1f4_1 = zmm0_1[0]
            zmm6, zmm7, zmm8, zmm9 =
                sub_1422a6190(rcx_1, &var_1fc, &var_204, &var_200, var_218_1, var_210_1)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg2 + 0x1148))
    
    zmm0_1 = var_204

float result
float var_178[0x4]
float var_148[0x4]

if (*(arg2 + 0x1148) s<= 0 || zmm0_1[0] <= zmm7[0])
    *arg5 = var_1a8
    float var_198[0x4]
    arg5[1] = var_198
    zmm1 = var_178
    float var_188[0x4]
    arg5[2] = var_188
    arg5[3] = zmm1
    float var_168[0x4]
    arg5[4] = var_168
    zmm0_1 = var_148
    float var_158[0x4]
    arg5[5] = var_158
    arg5[6] = zmm0_1
    float var_138[0x4]
    arg5[7] = var_138
    float var_128[0x4]
    arg5[8] = var_128
    *arg4 = 0x3f800000
    int32_t var_1f4_3 = 0x3f800000
    result = 1f
    *arg6 = (_mm_unpacklo_ps(zmm7, zmm7[0].q)).q
    arg6[1].d = 0x3f800000
else
    zmm6 = 0x3f800000
    zmm6[0] = 1f / zmm0_1[0]
    int128_t var_68_1 = zmm8
    int128_t var_78_1 = zmm9
    zmm6[0] = zmm6[0] * var_200
    *arg4 = zmm6[0]
    void var_118
    memset(&var_118, 0, 0x90)
    int64_t rax_3 = 0
    zmm1 = zmm6[0]
    int64_t i_6 = 3
    float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    int64_t i_4 = 3
    int64_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x30)
    float zmm0_2[0x4]
    int64_t i_1
    
    do
        zmm0_2 = *(&var_1a8 + rax_3)
        rax_3 += 0x10
        *(&var_1e8 + rax_3) = _mm_mul_ps(zmm0_2, temp0)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    zmm7 = var_1d8.o
    int64_t rax_4 = 0
    int64_t i_5 = 3
    zmm1 = zmm6[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    int64_t var_1d8_1
    __builtin_memset(&var_1d8_1, 0, 0x30)
    int64_t i_2
    
    do
        zmm0_2 = *(&var_178 + rax_4)
        rax_4 += 0x10
        *(&var_1e8 + rax_4) = _mm_mul_ps(zmm0_2, temp0_2)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    int128_t zmm3 = var_1d8_1.o
    zmm1 = zmm6[0]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    int64_t var_1d8_2
    __builtin_memset(&var_1d8_2, 0, 0x30)
    int64_t i_3
    
    do
        zmm0_2 = *(&var_148 + rbx)
        rbx += 0x10
        *(&var_1e8 + rbx) = _mm_mul_ps(zmm0_2, temp0_4)
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)
    zmm0_2 = var_1d8_2.o
    *arg5 = zmm7
    int64_t var_1c8
    arg5[1] = var_1c8.o
    int64_t var_1b8
    arg5[2] = var_1b8.o
    arg5[3] = zmm3
    int64_t var_1c8_1
    arg5[4] = var_1c8_1.o
    int64_t var_1b8_1
    arg5[5] = var_1b8_1.o
    arg5[6] = zmm0_2
    zmm0_2 = var_1e8
    int64_t var_1c8_2
    arg5[7] = var_1c8_2.o
    zmm1 = var_1f0.d
    int64_t var_1b8_2
    arg5[8] = var_1b8_2.o
    int128_t zmm2
    zmm2.d = var_1f0:4.d.d f* zmm6[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    zmm0_2[0] = zmm0_2[0] * zmm6[0]
    *arg6 = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
    result = zmm0_2[0]
    arg6[1].d = result
    
    if (data_1439b6334 != i_6.d)
        result = sub_1412150e0(arg5)
__security_check_cookie(rax_1 ^ &var_238)
return result
