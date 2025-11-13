// 函数: sub_1411456d0
// 地址: 0x1411456d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141080be0(arg1, arg2, *(arg2 + 0x188), *(arg3 + 0x10))
float zmm2[0x4] = data_142d3f670
int32_t temp0 = __maxss_xmmss_memss(*(arg3 + 0x48bc), 0x41f00000)
int64_t rax = *(arg2 + 0x188)
int64_t var_28 = 0
float temp0_2[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(arg3 + 0x330))
int32_t var_20 = 0
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(arg3 + 0x320))
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(arg3 + 0x310))
int32_t var_1c = 0x3f800000
float temp0_7[0x4] = _mm_add_ps(temp0_2, temp0_4)
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(arg3 + 0x300))
int32_t var_10 = 0
int32_t var_c = 0x3f800000
int64_t arg_10 = rax
float temp0_10[0x4] = _mm_add_ps(temp0_6, temp0_9)
zmm2 = 0.o
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_10)
temp0_12[0] = temp0_12[0] * temp0_12[0]
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x55)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa)
temp0_13[0] = temp0_13[0] * temp0_13[0]
temp0_13[0] = temp0_13[0] + temp0_12[0]
temp0_14[0] = temp0_14[0] * temp0_14[0]
temp0_13[0] = temp0_13[0] + temp0_14[0]
float temp0_15[0x4] = _mm_sqrt_ss(0, temp0_13[0])
temp0_14[0] = temp0_14[0] / temp0_15[0]
temp0_14[0] = temp0_14[0] f* temp0
temp0_11[0] = temp0_14[0]
float temp0_16[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
float temp0_18[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_16, temp0_16, 0xff), *(arg3 + 0x2b0))
float temp0_20[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_16, temp0_16, 0xaa), *(arg3 + 0x2a0))
float temp0_22[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_16, temp0_16, 0x55), *(arg3 + 0x290))
float temp0_27[0x4] = _mm_add_ps(_mm_add_ps(temp0_18, temp0_20), 
    _mm_add_ps(temp0_22, 
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_16, temp0_16, 0), *(arg3 + 0x280))))
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xff)
temp0_28[0] = temp0_28[0] / temp0_29[0]
float arg_8 = temp0_28[0]
return sub_1405eb490(arg2, &arg_10, arg1 + 0x118, &arg_8, 0)
