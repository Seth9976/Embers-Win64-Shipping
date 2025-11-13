// 函数: sub_141ebfde0
// 地址: 0x141ebfde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi

if (((arg1[1].d u>> 4).b & 1) == 0)
    rdi = arg1[4]
else
    rdi = nullptr

float var_f8[0x4]
memset(&var_f8, 0, 0x88)
int32_t var_f0 = 0x3f800000
int64_t* result = (*(*arg1 + 0x410))(arg1, rdi, &var_f8)

if (result == 0)
    return result

void* rcx_2 = result[0x26]
float zmm0_1[0x4]

if (rcx_2 == 0)
    zmm0_1 = data_142d3f660
else
    zmm0_1 = *(rcx_2 + 0x1c0)

float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
temp0_1[0] = temp0_1[0] * 2f
temp0_2[0] = temp0_2[0] * 2f
int64_t rax_3 = sub_142496c20()
int64_t rdx_1 = *result
int64_t var_1a0_1 = rax_3
zmm0_1[0] = zmm0_1[0] * temp0_1[0]
void** const var_1a8 = &data_14325a218
temp0_2[0] = temp0_2[0] * temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xff)
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0_3[0] = temp0_3[0] * temp0_1[0]
temp0_3[0] = temp0_3[0] * temp0_2[0]
temp0_2[0] = temp0_2[0] + temp0_1[0]
zmm0_1[0] = zmm0_1[0] * temp0_2[0]
temp0_3[0] = temp0_3[0] + zmm0_1[0]
float var_198_1 = arg2[0]
temp0_2[0] = temp0_2[0] - 1f
temp0_3[0] = temp0_3[0] - zmm0_1[0]
float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, (temp0_3 ^ data_142d3f780)[0].q)
zmm0_1[2] = temp0_3[0]
int64_t var_194_1 = temp0_4.q
float var_188_1[0x4] = var_f8
float var_e8[0x4]
float var_178_1[0x4] = var_e8
float var_d8[0x4]
float var_168_1[0x4] = var_d8
float var_c8[0x4]
float var_158_1[0x4] = var_c8
float var_b8[0x4]
float var_148_1[0x4] = var_b8
float var_a8[0x4]
float var_138_1[0x4] = var_a8
float var_98[0x4]
float var_128_1[0x4] = var_98
float var_18c_1 = zmm0_1[2]
float var_88[0x4]
float var_118_1[0x4] = var_88
int64_t var_78
int64_t var_108_1 = var_78
return (*(rdx_1 + 0x588))(result, arg2, &var_1a8, rdi, *(rdi + 0x250))
