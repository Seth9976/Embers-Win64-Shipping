// 函数: sub_141986e10
// 地址: 0x141986e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm11[0x4] = arg3

if (data_143f0f1c3 == 0)
    return 

int32_t var_7c_1 = 0x3f800000
float zmm3[0x4] = 0.o
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
temp0_1[0] = arg2[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
int64_t var_88_1
var_88_1.o = temp0_2
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *arg4)
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), arg4[2])
int32_t var_7c_2 = 0x3f800000
arg3 = 0.o
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), arg4[1])
int32_t var_70_1 = 0
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), arg4[3])
int32_t var_6c_1 = 0x3f800000
float temp0_11[0x4] = _mm_add_ps(temp0_4, temp0_8)
float temp0_12[0x4] = _mm_shuffle_ps(arg3, arg3, 0xd2)
temp0_12[0] = zmm11[0]
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_add_ps(temp0_6, temp0_10)
int32_t var_70_2 = 0
int32_t var_6c_2 = 0x3f800000
float temp0_16[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_13, temp0_13, 0), *arg4)
float temp0_17[0x4] = _mm_add_ps(temp0_11, temp0_14)
float temp0_19[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_13, temp0_13, 0x55), arg4[1])
float temp0_21[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_13, temp0_13, 0xaa), arg4[2])
float temp0_23[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_13, temp0_13, 0xff), arg4[3])
float temp0_24[0x4] = _mm_add_ps(temp0_16, temp0_19)
float zmm6[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xff)
zmm6[0] = zmm6[0] / temp0_26[0]
float temp0_28[0x4] = _mm_add_ps(temp0_24, _mm_add_ps(temp0_21, temp0_23))
float zmm7[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xff)
zmm7[0] = zmm7[0] / temp0_30[0]

if (not(zmm7[0] >= 0f))
    zmm7 = zx.o(0)
else if (not(zmm7[0] < 1f))
    zmm7 = 0x3f800000

if (not(zmm6[0] >= 0f))
    zmm6 = zx.o(0)
else if (not(zmm6[0] < 1f))
    zmm6 = 0x3f800000

if (not(zmm6[0] > zmm7[0]))
    zmm6 = 0x3f800000
    zmm7 = zx.o(0)

void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rcx_2[3]

if (rax u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rcx_2[3]

*(arg1 + 0x30) = rax
void**** rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = rcx_2
*(arg1 + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[2].d = zmm7[0]
*(rcx_2 + 0x14) = zmm6[0]
*rcx_2 = &data_142f115c8
