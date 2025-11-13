// 函数: sub_1422f0230
// 地址: 0x1422f0230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 4)
float zmm2 = *(arg1 + 8)
int32_t var_c = 0x3f800000
float var_18[0x4]
var_18[0] = (*arg1)[0]
int64_t var_28 = 0
float temp0[0x4] = _mm_shuffle_ps(var_18, var_18, 0xe1)
temp0[0] = zmm1[0]
int32_t var_1c = 0x3f800000
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), arg3[3])
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), arg3[1])
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), arg3[2])
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *arg3)
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_8), _mm_add_ps(temp0_6, temp0_10))
var_28.o = temp0_13
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xff)

if (temp0_14[0] <= 0f)
    int64_t rax
    rax.b = 0
    return rax

int32_t rcx = *arg2
float zmm0[0x4] = zx.o(0)
float zmm3[0x4] = 0x3f000000
zmm1 = zx.o(0)
int32_t rdx = arg2[1]
float zmm4[0x4] = var_28.d
zmm2 = 1f / temp0_14[0]
zmm0[0] = float.s(arg2[2] - rcx)
int32_t rax_4 = arg2[3] - rdx
zmm4[0] = zmm4[0] * zmm2
zmm1[0] = float.s(rcx)
zmm4[0] = zmm4[0] + 1f
zmm4[0] = zmm4[0] * 0.5f
zmm4[0] = zmm4[0] * zmm0[0]
zmm0 = var_28:4.d
zmm0[0] = zmm0[0] * zmm2
zmm4[0] = zmm4[0] + zmm1[0]
zmm1 = zx.o(0)
zmm1[0] = float.s(rdx)
zmm0[0] = zmm0[0] * 0.5f
zmm3[0] = 0.5f - zmm0[0]
zmm0 = zx.o(0)
zmm0[0] = float.s(rax_4)
rax_4.b = 1
zmm3[0] = zmm3[0] * zmm0[0]
zmm3[0] = zmm3[0] + zmm1[0]
*arg4 = (_mm_unpacklo_ps(zmm4, zmm3[0].q)).q
return rax_4
