// 函数: sub_14063cca0
// 地址: 0x14063cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    *arg2 = data_143dbb208
    arg2[1].d = data_143dbb210
    return arg2

void* rax_2 = *(arg3 + 0x130)
float (* rax_3)[0x4]

if (rax_2 == 0)
    rax_3 = &data_143dbb0c0
else
    rax_3 = rax_2 + 0x1c0

float zmm5[0x4] = rax_3[2]
uint128_t zmm2 = arg4[1].d
float temp0[0x4] = __mulps_xmmps_memps(data_143cdbe60, *rax_3)
uint128_t zmm7 = *arg4 | zmm2.q << 0x40
float temp0_1[0x4] = _mm_rcp_ps(zmm5)
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
uint128_t zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), temp0_2)
float temp0_5[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), temp0_5)
float temp0_8[0x4] = _mm_shuffle_ps(temp0, temp0, 0xff)
zmm2 = _mm_sub_ps(zmm2, zmm0)
zmm0 = _mm_mul_ps(temp0_1, temp0_1)
float temp0_11[0x4] = _mm_add_ps(temp0_1, temp0_1)
zmm2 = _mm_add_ps(zmm2, zmm2)
zmm0 = _mm_mul_ps(zmm0, zmm5)
float temp0_14[0x4] = _mm_mul_ps(temp0_8, zmm2)
float temp0_15[0x4] = _mm_sub_ps(temp0_11, zmm0)
float temp0_16[0x4] = _mm_add_ps(temp0_14, zmm7)
zmm0 = _mm_mul_ps(temp0_15, temp0_15)
float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
zmm0 = _mm_mul_ps(zmm0, zmm5)
float temp0_21[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143cdbcf0), data_143cdbe50, 2)
float temp0_22[0x4] = _mm_sub_ps(temp0_18, zmm0)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), temp0_2)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), temp0_5)
zmm5 = _mm_and_ps(temp0_21, temp0_22) ^ temp0_22
float temp0_30[0x4] = _mm_mul_ps(_mm_add_ps(_mm_sub_ps(temp0_26, zmm0), temp0_16), zmm5)
float var_38 = temp0_30[0]
zmm0 = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
float var_30 = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)[0]
int32_t var_34 = zmm0.d
sub_140adf3c0(&var_38, arg2)
return arg2
