// 函数: sub_141764650
// 地址: 0x141764650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
int64_t rcx = sx.q(arg2[1].d)
int64_t r9 = *(r8 + 0x230)
int64_t r10 = rcx * 3
float zmm1[0x4] = *(r9 + (r10 << 2) + 4)
float zmm3[0x4] = *(*(r8 + 0x2d8) + (rcx << 2))
int64_t rax_1 = *(r8 + 0x1b8)
zmm3[0] = zmm3[0] f* *(r9 + (r10 << 2))
float zmm4[0x4] = *(r9 + (r10 << 2) + 8)
zmm4[0] = zmm4[0] * zmm3[0]
zmm1[0] = zmm1[0] * zmm3[0]
zmm3[0] = zmm3[0] * arg3[0]
zmm4[0] = zmm4[0] * arg3[0]
zmm3[0] = zmm3[0] f+ *(rax_1 + (r10 << 2))
zmm1[0] = zmm1[0] * arg3[0]
zmm4[0] = zmm4[0] f+ *(rax_1 + (r10 << 2) + 8)
zmm1[0] = zmm1[0] f+ *(rax_1 + (r10 << 2) + 4)
*(rax_1 + (r10 << 2)) = zmm3[0]
*(rax_1 + (r10 << 2) + 8) = zmm4[0]
*(rax_1 + (r10 << 2) + 4) = zmm1[0]
int64_t r8_1 = sx.q(arg2[1].d)
void* rdx = *arg2
int64_t rcx_2 = r8_1 * 2
arg3 = *(*(rdx + 0x68) + (rcx_2 << 3))
int64_t rax_3 = *(rdx + 0x218)
float temp0[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
zmm3 = *(rax_3 + (rcx_2 << 3))
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xff), zmm3)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_2, data_143ef7c70)
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_5)
float temp0_10[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(arg3, arg3, 0x55))
float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(arg3, arg3, 0xaa))
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143ef7c60)
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_12, data_143ef7c50)
float var_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_8, temp0_13), temp0_14)
float var_68
float zmm7_1 = sub_1417349b0(&var_68, &var_78, (r8_1 << 6) + *(rdx + 0x2a8))
void* rcx_4 = *arg2
int64_t rdx_2 = sx.q(arg2[1].d) * 3
int64_t rax_5 = *(rcx_4 + 0x248)
float zmm2 = *(rax_5 + (rdx_2 << 2) + 4)
float zmm5 = *(rax_5 + (rdx_2 << 2))
float zmm4_1 = *(rax_5 + (rdx_2 << 2) + 8)
float var_48
float zmm3_1 = zmm5 * var_48
float var_58
float var_54
float var_50
float zmm6 = (zmm5 * var_58 + zmm2 * var_54 + zmm4_1 * var_50) * zmm7_1
int64_t rax_6 = *(rcx_4 + 0x1d0)
float var_44
float result = zmm2 * var_44
float var_64
zmm5 = zmm5 * var_68 + zmm2 * var_64
*(rax_6 + (rdx_2 << 2) + 4) = zmm6 f+ *(rax_6 + (rdx_2 << 2) + 4)
float var_60
zmm5 = (zmm5 + zmm4_1 * var_60) * zmm7_1 f+ *(rax_6 + (rdx_2 << 2))
float var_40
*(rax_6 + (rdx_2 << 2) + 8) =
    (zmm3_1 + result + zmm4_1 * var_40) * zmm7_1 f+ *(rax_6 + (rdx_2 << 2) + 8)
*(rax_6 + (rdx_2 << 2)) = zmm5
return result
