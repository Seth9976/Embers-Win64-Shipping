// 函数: sub_142200e80
// 地址: 0x142200e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_b0 = arg4
int32_t var_88
sub_141fe56b0(arg1 + 0x30, &var_88, *(arg2 + 0x12c), arg3, (*(arg2 + 0x18)).d, nullptr)
int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
float zmm0[0x4]
int512_t zmm1_1
zmm0, zmm1_1 = sub_141fe5610(arg1 + 0x78, zmm1, *(arg2 + 0x18), arg4)
zmm1_1.o = *(arg2 + 0x12c)
int128_t zmm0_1
int512_t zmm1_2
int512_t zmm6
zmm0_1, zmm1_2, zmm6 = sub_141fe5610(arg1 + 0xa8, zmm1_1, *(arg2 + 0x18), arg4)
zmm1_2.o = *(arg2 + 0x12c)
zmm6.o = zmm0_1
float zmm0_2
float zmm6_1
zmm0_2, zmm6_1 = sub_141fe5610(arg1 + 0xd8, zmm1_2, *(arg2 + 0x18), arg4)
float zmm7 = tanf(zmm6_1 * 0.00872664619f)[0] * zmm0[0]
int32_t rcx_5 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
float zmm9 = (rcx_5 u>> 9 | 0x3f800000) - 1f
float zmm5[0x4] = (rcx_5 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
zmm5[0] = zmm5[0] - 1f
float zmm4[0x4] = ((rcx_5 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
zmm4[0] = zmm4[0] - 1f
*(arg4 + 4) = ((rcx_5 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
zmm5[0] = zmm5[0] + zmm9
zmm5[0] = zmm5[0] + zmm4[0]
float temp0[0x4] = __maxss_xmmss_memss(zmm5[0], 0x38d1b717)
zmm9 = zmm9 / temp0[0]
zmm5[0] = zmm5[0] / temp0[0]
zmm4[0] = zmm4[0] / temp0[0]
float zmm1_3[0x4] = var_88
zmm0[0] = zmm0[0] * 0.5f
float zmm3[0x4] = zmm1_3
int32_t var_8c = 0
zmm0[0] = zmm0[0] * 0.5f
int64_t var_78 = 0
zmm3[0] = zmm3[0] - zmm0[0]
int32_t var_70 = 0
zmm0[0] = zmm0[0] + zmm1_3[0]
int32_t var_84
zmm1_3 = var_84
zmm4[0] = zmm4[0] + zmm5[0]
zmm0[0] = zmm0[0] * zmm9
zmm9 = zmm9 * zmm1_3[0]
zmm3[0] = zmm3[0] * zmm4[0]
zmm9 = zmm9 f+ data_143dbb1fc
zmm0[0] = zmm0[0] f+ data_143dbb1f8
zmm1_3[0] = zmm1_3[0] + zmm7
zmm1_3[0] = zmm1_3[0] - zmm7
zmm3[0] = zmm3[0] + zmm0[0]
zmm1_3[0] = zmm1_3[0] * zmm5[0]
zmm1_3[0] = zmm1_3[0] * zmm4[0]
float var_98[0x4]
var_98[0] = zmm3[0]
zmm9 = zmm9 + zmm1_3[0]
float temp0_1[0x4] = _mm_shuffle_ps(var_98, var_98, 0xe1)
temp0_1[0] = zmm9 + zmm1_3[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = ((
    (((rcx_5 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9
    | 0x3f800000) - 1f) * zmm0_2 - zmm0_2 * 0.5f
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(arg2 + 0x80))
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(arg2 + 0x90))
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(arg2 + 0x70))
float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_7, temp0_5), 
    _mm_add_ps(temp0_9, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(arg2 + 0x60))))
temp0_14[0] = temp0_14[0] f+ *(arg5 + 0x10)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
temp0_15[0] = temp0_15[0] f+ *(arg5 + 0x14)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
temp0_16[0] = temp0_16[0] f+ *(arg5 + 0x18)
*(arg5 + 0x10) = temp0_14[0]
*(arg5 + 0x14) = temp0_15[0]
float zmm0_3[0x4] = zx.o(0)
zmm0_3[0].q = fconvert.d(temp0_14[0])
*(arg5 + 0x18) = temp0_16[0]
int32_t result = _finite(zmm0_3[0].q)

if (result != 0)
    result = _finite(_mm_cvtps_pd((*(arg5 + 0x14))[0].q)[0].q)
    
    if (result != 0)
        return _finite(_mm_cvtps_pd((*(arg5 + 0x18))[0].q)[0].q)

return result
