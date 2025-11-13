// 函数: sub_1412e79d0
// 地址: 0x1412e79d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg2 + 0x1c0)
int128_t* rax = *(arg2 + 0x2d0)
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm3, temp0)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_6)
float zmm1[0x4] = *(arg2 + 0x1e0)
float temp0_10[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_3, temp0_3, 1))
float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float zmm4[0x4] = data_143e8ec40
float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_5)
float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_8)
float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float zmm2[0x4] =
    __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_10), zmm1), data_143e8ec50)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm2, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, zmm2, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0x10), temp0_22, 0x88)
float zmm0[0x4] = *(arg2 + 0x1d0)
zmm4[0].q = zmm0 u>> 0x40
float temp0_25[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, temp0_15, 0x12), zmm2, 0xe8)
float var_48[0x4] = temp0_25
float var_78[0x4] = temp0_21
float var_68[0x4] = temp0_24
float var_58[0x4] = temp0_27
float var_128[0x4] = temp0_21

if (sub_140a80f40() != 0)
    *(arg1 + 0x1030) = 1
    sub_1412e83d0(rax, &var_128)
    return 0

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int128_t* var_d8 = rax.o[0].q
        float var_c8[0x4] = var_128
        float var_b8[0x4] = temp0_24
        float var_a8[0x4] = temp0_27
        float var_98[0x4] = temp0_25
        *(arg1.o[0].q + 0x1030) = 1
        sub_1412e83d0(var_d8, &var_c8)
        return 0

void var_38
int64_t* rax_5 = sub_141266a90(&var_38, nullptr, 0xff)
void* rcx_3 = *rax_5
*(rcx_3 + 0x10) = rax.o
*(rcx_3 + 0x20) = var_128
*(rcx_3 + 0x30) = temp0_24
*(rcx_3 + 0x40) = temp0_27
*(rcx_3 + 0x50) = temp0_25
*(rcx_3 + 0x60) = arg1.o
void* rcx_4 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx = *(rcx_4 + 0x78)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_140778260(rcx_4, rdx_2, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
