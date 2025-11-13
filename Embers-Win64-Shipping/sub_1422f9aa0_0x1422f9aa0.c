// 函数: sub_1422f9aa0
// 地址: 0x1422f9aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg2 + 4)
float zmm2[0x4] = *(arg2 + 8)
int32_t var_c = 0x3f800000
float var_18[0x4]
var_18[0] = (*arg2)[0]
int64_t var_28 = 0
float temp0[0x4] = _mm_shuffle_ps(var_18, var_18, 0xe1)
temp0[0] = zmm1[0]
int32_t var_1c = 0x3f800000
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), *(arg1 + 0x3f0))
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), *(arg1 + 0x3d0))
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), *(arg1 + 0x3e0))
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *(arg1 + 0x3c0))
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_8), _mm_add_ps(temp0_6, temp0_10))
var_28.o = temp0_13
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xff)

if (temp0_14[0] == 0f)
    int64_t rax
    rax.b = 0
    return rax

if (temp0_14[0] <= 0f)
    zmm1 = 0xbf800000
else
    zmm1 = 0x3f800000

bool cond:0 = data_1439c7a1c[0] <= 0f
zmm1[0] = zmm1[0] / temp0_14[0]
float zmm4

if (cond:0)
    zmm4 = 1f f- var_28:4.d
else
    zmm4 = var_28:4.d

zmm2 = 0x3f000000
float zmm3[0x4] = zx.o(0)
int32_t rcx = *(arg1 + 0x258)
float zmm0[0x4] = var_28.d
int32_t rax_1 = *(arg1 + 0x260)
zmm0[0] = zmm0[0] * 0.5f
zmm0[0] = zmm0[0] * zmm1[0]
zmm3[0] = float.s(rax_1 - rcx)
int32_t rax_3 = *(arg1 + 0x264)
zmm0[0] = zmm0[0] + 0.5f
zmm4 = zmm4 * 0.5f * zmm1[0]
zmm1 = zx.o(0)
zmm2[0] = 0.5f - zmm4
zmm3[0] = zmm3[0] * zmm0[0]
zmm0 = zx.o(0)
zmm0[0] = float.s(rcx)
int32_t rcx_1 = *(arg1 + 0x25c)
zmm1[0] = float.s(rcx_1)
zmm3[0] = zmm3[0] + zmm0[0]
zmm0 = zx.o(0)
zmm0[0] = float.s(rax_3 - rcx_1)
int32_t rax_4
rax_4.b = 1
zmm2[0] = zmm2[0] * zmm0[0]
zmm2[0] = zmm2[0] + zmm1[0]
*arg3 = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
return rax_4
