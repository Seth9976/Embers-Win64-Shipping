// 函数: sub_141e2b0e0
// 地址: 0x141e2b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = arg1[4].d
float zmm5[0x4] = arg2

if (zmm4[0] == -3.40282347e+38f)
    return 

void* rax = arg1[1]
float var_48[0x4]
float zmm2[0x4]
float zmm6[0x4]

if (rax == 0)
    zmm6 = zx.o(0)
else
    arg2 = *(rax + 0x30)
    zmm2 = *(rax + 0x34)
    int32_t var_3c_1 = 0
    var_48[0] = (*(rax + 0x2c))[0]
    int64_t var_38_1 = 0
    float temp0_1[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
    temp0_1[0] = arg2[0]
    int32_t var_30_1 = 0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    var_48 = temp0_3
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rax + 0xb0))
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rax + 0xa0))
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rax + 0x90))
    float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
        _mm_add_ps(temp0_9, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rax + 0x80))))
    temp0_14[0] = temp0_14[0] f* arg1[2].d
    zmm6 = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
    zmm6[0] = zmm6[0] f* *(arg1 + 0x14)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
    temp0_16[0] = temp0_16[0] f* arg1[3].d
    zmm6[0] = zmm6[0] + temp0_14[0]
    zmm6[0] = zmm6[0] + temp0_16[0]

void* rdx_1 = *arg1
float zmm3[0x4]

if (rdx_1 == 0)
    zmm3 = zx.o(0)
else
    arg2 = *(rdx_1 + 0x30)
    zmm2 = *(rdx_1 + 0x34)
    int32_t var_3c_2 = 0
    var_48[0] = (*(rdx_1 + 0x2c))[0]
    int64_t var_38_2 = 0
    float temp0_17[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
    temp0_17[0] = arg2[0]
    int32_t var_30_2 = 0
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
    temp0_18[0] = zmm2[0]
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
    float temp0_21[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), *(rdx_1 + 0xb0))
    float temp0_23[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), *(rdx_1 + 0xa0))
    float temp0_25[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), *(rdx_1 + 0x90))
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0)
    float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(temp0_21, temp0_23), 
        _mm_add_ps(temp0_25, __mulps_xmmps_memps(temp0_26, *(rdx_1 + 0x80))))
    temp0_30[0] = temp0_30[0] f* arg1[2].d
    zmm3 = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
    zmm3[0] = zmm3[0] f* *(arg1 + 0x14)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    temp0_32[0] = temp0_32[0] f* arg1[3].d
    zmm3[0] = zmm3[0] + temp0_30[0]
    zmm3[0] = zmm3[0] + temp0_32[0]

zmm5[0] = zmm5[0] f* arg1[5].d
zmm6[0] = zmm6[0] - zmm3[0]
zmm5[0] = zmm5[0] f* *(arg1 + 0x24)
zmm5[0] = zmm5[0] f- *(arg1 + 0x1c)
zmm4[0] = zmm4[0] - zmm6[0]
zmm5[0] = zmm5[0] f- *(arg1 + 0x1c)
zmm4[0] = zmm4[0] f* *(arg1 + 0x2c)
float temp0_34[0x4] = _mm_max_ss(_mm_min_ss(zmm4[0], zmm5[0])[0], zmm5[0])

if (rdx_1 != 0)
    zmm2 = *(arg1 + 0x14)
    temp0_34[0] = temp0_34[0] f* arg1[2].d
    zmm3 = arg1[3].d
    float zmm0[0x4] = *(rdx_1 + 0x2c)
    zmm0[0] = zmm0[0] - temp0_34[0]
    zmm2[0] = zmm2[0] * temp0_34[0]
    zmm3[0] = zmm3[0] * temp0_34[0]
    *(rdx_1 + 0x2c) = zmm0[0]
    zmm0 = *(rdx_1 + 0x30)
    zmm0[0] = zmm0[0] - zmm2[0]
    *(rdx_1 + 0x30) = zmm0[0]
    zmm0 = *(rdx_1 + 0x34)
    zmm0[0] = zmm0[0] - zmm3[0]
    *(rdx_1 + 0x34) = zmm0[0]
    rax = arg1[1]

if (rax != 0)
    arg2 = *(arg1 + 0x14)
    temp0_34[0] = temp0_34[0] f* arg1[2].d
    zmm2 = arg1[3].d
    arg2[0] = arg2[0] * temp0_34[0]
    temp0_34[0] = temp0_34[0] f+ *(rax + 0x2c)
    arg2[0] = arg2[0] f+ *(rax + 0x30)
    *(rax + 0x2c) = temp0_34[0]
    temp0_34[0] = temp0_34[0] * zmm2[0]
    *(rax + 0x30) = arg2[0]
    temp0_34[0] = temp0_34[0] f+ *(rax + 0x34)
    *(rax + 0x34) = temp0_34[0]

temp0_34[0] = temp0_34[0] f+ *(arg1 + 0x1c)
*(arg1 + 0x1c) = temp0_34[0]
