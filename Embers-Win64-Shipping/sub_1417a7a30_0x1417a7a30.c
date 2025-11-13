// 函数: sub_1417a7a30
// 地址: 0x1417a7a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
int64_t rcx = sx.q(arg2[1].d)
int64_t r9 = *(r8 + 0x260)
int64_t r10 = rcx * 3
float zmm1[0x4] = *(r9 + (r10 << 2) + 4)
float zmm2[0x4] = *(*(r8 + 0x2d8) + (rcx << 2))
int64_t rax_1 = *(r8 + 0x1b8)
zmm2[0] = zmm2[0] f* *(r9 + (r10 << 2))
float zmm3[0x4] = *(r9 + (r10 << 2) + 8)
zmm1[0] = zmm1[0] * zmm2[0]
zmm2[0] = zmm2[0] f+ *(rax_1 + (r10 << 2))
zmm3[0] = zmm3[0] * zmm2[0]
zmm1[0] = zmm1[0] f+ *(rax_1 + (r10 << 2) + 4)
zmm3[0] = zmm3[0] f+ *(rax_1 + (r10 << 2) + 8)
*(rax_1 + (r10 << 2)) = zmm2[0]
*(rax_1 + (r10 << 2) + 4) = zmm1[0]
*(rax_1 + (r10 << 2) + 8) = zmm3[0]
int64_t r8_1 = sx.q(arg2[1].d)
void* rdx = *arg2
int64_t rcx_2 = r8_1 * 2
zmm2 = *(*(rdx + 0x68) + (rcx_2 << 3))
int64_t rax_3 = *(rdx + 0x218)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
zmm3 = *(rax_3 + (rcx_2 << 3))
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_2, data_143ef7f10)
float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
float temp0_8[0x4] = _mm_add_ps(temp0_6, temp0_5)
float temp0_10[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(zmm2, zmm2, 0x55))
float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143ef7f00)
float temp0_14[0x4] = __mulps_xmmps_memps(temp0_12, data_143ef7ef0)
float var_68[0x4] = _mm_add_ps(_mm_add_ps(temp0_8, temp0_13), temp0_14)
float var_58
sub_1417349b0(&var_58, &var_68, (r8_1 << 6) + *(rdx + 0x2a8))
void* rcx_4 = *arg2
int64_t rdx_2 = sx.q(arg2[1].d) * 3
int64_t rax_5 = *(rcx_4 + 0x278)
int64_t zmm4_1 = *(rax_5 + (rdx_2 << 2) + 4)
float zmm6 = *(rax_5 + (rdx_2 << 2))
float zmm5 = *(rax_5 + (rdx_2 << 2) + 8)
int64_t rax_6 = *(rcx_4 + 0x1d0)
int32_t var_54
int64_t zmm0_1
zmm0_1.d = zmm4_1.d f* var_54
float zmm2_1 = zmm6 * var_58 f+ zmm0_1.d
int32_t var_44
zmm0_1.d = zmm4_1.d f* var_44
float var_48
float zmm3_1 = zmm6 * var_48 f+ zmm0_1.d
float var_50
*(rax_6 + (rdx_2 << 2)) = zmm2_1 + zmm5 * var_50 f+ *(rax_6 + (rdx_2 << 2))
var_68[2] = 0
int32_t var_34
zmm4_1.d = zmm4_1.d f* var_34
int64_t temp0_17 = _mm_unpacklo_ps(zx.o(0), 0)
float var_38
float var_30
zmm6 = zmm6 * var_38 f+ zmm4_1.d + zmm5 * var_30 f+ *(rax_6 + (rdx_2 << 2) + 8)
float var_40
*(rax_6 + (rdx_2 << 2) + 4) = zmm3_1 + zmm5 * var_40 f+ *(rax_6 + (rdx_2 << 2) + 4)
*(rax_6 + (rdx_2 << 2) + 8) = zmm6
int64_t rdx_3 = sx.q(arg2[1].d) * 3
int64_t rcx_5 = *(*arg2 + 0x260)
float rax_9 = var_68[2]
var_68[2] = 0
*(rcx_5 + (rdx_3 << 2)) = temp0_17
*(rcx_5 + (rdx_3 << 2) + 8) = rax_9
int64_t rax_10 = sx.q(arg2[1].d)
int64_t temp0_18 = _mm_unpacklo_ps(zx.o(0), 0)
int64_t rdx_4 = rax_10 * 3
int64_t rcx_6 = *(*arg2 + 0x278)
float result = var_68[2]
*(rcx_6 + (rdx_4 << 2)) = temp0_18
*(rcx_6 + (rdx_4 << 2) + 8) = result
return result
