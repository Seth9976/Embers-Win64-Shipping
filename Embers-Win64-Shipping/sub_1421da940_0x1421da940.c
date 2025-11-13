// 函数: sub_1421da940
// 地址: 0x1421da940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg2 + 0x90))

if (result.d != 0)
    float zmm1[0x4]
    
    if (*(arg2 + 0xb0) != 0)
        float zmm0[0x4] = *(result + arg1 + 0xc)
        zmm0[0] = zmm0[0] f+ *arg4
        *arg4 = zmm0[0]
        zmm1 = *(result + arg1 + 0x10)
        zmm1[0] = zmm1[0] f+ arg4[1]
        arg4[1] = zmm1[0]
        zmm0 = *(result + arg1 + 0x14)
        zmm0[0] = zmm0[0] f+ arg4[2]
        arg4[2] = zmm0[0]
        zmm1 = *(result + arg1 + 0x3c)
        zmm1[0] = zmm1[0] f+ *arg5
        *arg5 = zmm1[0]
        zmm0 = *(result + arg1 + 0x40)
        zmm0[0] = zmm0[0] f+ arg5[1]
        arg5[1] = zmm0[0]
        zmm1 = *(result + arg1 + 0x44)
        zmm1[0] = zmm1[0] f+ arg5[2]
        arg5[2] = zmm1[0]
        return result
    
    float zmm2[0x4] = *(result + arg1 + 0x10)
    float zmm3[0x4] = *(result + arg1 + 0x14)
    int32_t var_1c_1 = 0
    float var_28[0x4]
    var_28[0] = (*(result + arg1 + 0xc))[0]
    int64_t var_18_1 = 0
    float temp0_1[0x4] = _mm_shuffle_ps(var_28, var_28, 0xe1)
    temp0_1[0] = zmm2[0]
    int32_t var_10_1 = 0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm3[0]
    int64_t var_18_2 = 0
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *arg3)
    int32_t var_1c_2 = 0
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), arg3[3])
    int32_t var_10_2 = 0
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), arg3[1])
    float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), arg3[2])
    float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
    temp0_14[0] = temp0_14[0] f+ *arg4
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
    temp0_15[0] = temp0_15[0] f+ arg4[1]
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
    temp0_16[0] = temp0_16[0] f+ arg4[2]
    *arg4 = temp0_14[0]
    arg4[1] = temp0_15[0]
    arg4[2] = temp0_16[0]
    zmm1 = *(result + arg1 + 0x40)
    temp0_3[0] = (*(result + arg1 + 0x3c))[0]
    zmm2 = *(result + arg1 + 0x44)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
    temp0_17[0] = zmm1[0]
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
    temp0_18[0] = zmm2[0]
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
    float temp0_21[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), arg3[3])
    float temp0_23[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), arg3[1])
    float temp0_25[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), arg3[2])
    float temp0_27[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *arg3)
    float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(temp0_21, temp0_25), _mm_add_ps(temp0_23, temp0_27))
    temp0_30[0] = temp0_30[0] f+ *arg5
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
    temp0_31[0] = temp0_31[0] f+ arg5[1]
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    temp0_32[0] = temp0_32[0] f+ arg5[2]
    *arg5 = temp0_30[0]
    arg5[1] = temp0_31[0]
    arg5[2] = temp0_32[0]

return result
