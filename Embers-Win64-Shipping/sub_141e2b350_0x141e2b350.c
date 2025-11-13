// 函数: sub_141e2b350
// 地址: 0x141e2b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4] = arg2
int64_t var_78
float var_70
float zmm2
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r8 == 0)
    var_78 = 0
    var_70 = 0f
else
    zmm2 = *(r8 + 0x30)
    zmm3 = *(r8 + 0x34)
    zmm8 = *(r8 + 0x3c)
    zmm6 = arg1[0xa].d
    zmm5 = *(arg1 + 0x4c)
    int32_t var_6c_1 = 0
    zmm4 = var_78.o
    zmm4[0] = (*(r8 + 0x2c))[0]
    int64_t var_88_1 = 0
    float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
    temp0_1[0] = zmm2
    int32_t var_80_1 = 0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm3[0]
    zmm3 = *(arg1 + 0x54)
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    zmm2 = zmm3[0]
    var_78.o = temp0_3
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(r8 + 0xb0))
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(r8 + 0xa0))
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(r8 + 0x90))
    float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
        _mm_add_ps(temp0_9, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(r8 + 0x80))))
    zmm6[0] = zmm6[0] * temp0_14[0]
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
    zmm2 = zmm2 * temp0_15[0]
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
    zmm6[0] = zmm6[0] * temp0_16[0]
    zmm3[0] = zmm3[0] * temp0_14[0]
    zmm2 = zmm2 - zmm6[0]
    zmm8[0] = zmm8[0] f* *(r8 + 0x20)
    zmm2 = zmm2 + zmm8[0]
    zmm8[0] = zmm8[0] f* *(r8 + 0x24)
    zmm8[0] = zmm8[0] f* *(r8 + 0x28)
    var_78.d = zmm2
    zmm2 = zmm5[0] * temp0_16[0]
    zmm5[0] = zmm5[0] * temp0_15[0]
    zmm2 = zmm2 - zmm3[0]
    zmm6[0] = zmm6[0] - zmm5[0]
    zmm2 = zmm2 + zmm8[0]
    zmm6[0] = zmm6[0] + zmm8[0]
    var_78:4.d = zmm2
    var_70 = zmm6[0]

void* rdx = arg1[1]
int64_t var_88_2 = var_78
float result

if (rdx == 0)
    var_78 = 0
    result = 0f
else
    arg2 = *(rdx + 0x30)
    zmm2 = *(rdx + 0x34)
    zmm9 = *(rdx + 0x3c)
    int32_t var_6c_2 = 0
    zmm3 = var_78.o
    zmm3[0] = (*(rdx + 0x2c))[0]
    int64_t var_68_1 = 0
    float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_17[0] = arg2[0]
    int32_t var_60_1 = 0
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
    temp0_18[0] = zmm2
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
    var_78.o = temp0_19
    float temp0_21[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), *(rdx + 0xb0))
    float temp0_23[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), *(rdx + 0x90))
    float temp0_25[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), *(rdx + 0xa0))
    float temp0_27[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *(rdx + 0x80))
    float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(temp0_21, temp0_25), _mm_add_ps(temp0_23, temp0_27))
    zmm9[0] = zmm9[0] f* *(rdx + 0x20)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
    temp0_31[0] = temp0_31[0] f* *(arg1 + 0x5c)
    zmm2 = temp0_32[0] f* arg1[0xc].d
    temp0_31[0] = temp0_31[0] f* arg1[0xb].d
    temp0_32[0] = temp0_32[0] f* arg1[0xb].d
    zmm2 = zmm2 - temp0_31[0]
    temp0_30[0] = temp0_30[0] f* *(arg1 + 0x5c)
    temp0_30[0] = temp0_30[0] f* arg1[0xc].d
    zmm2 = zmm2 + zmm9[0]
    zmm9[0] = zmm9[0] f* *(rdx + 0x24)
    temp0_30[0] = temp0_30[0] - temp0_32[0]
    zmm9[0] = zmm9[0] f* *(rdx + 0x28)
    temp0_31[0] = temp0_31[0] - temp0_30[0]
    var_78.d = zmm2
    temp0_30[0] = temp0_30[0] + zmm9[0]
    temp0_31[0] = temp0_31[0] + zmm9[0]
    result = temp0_30[0]
    var_78:4.d = temp0_31[0]

zmm4 = *(arg1 + 0x2c)
arg2 = zx.o(var_78)
zmm6 = arg1[5].d
zmm2 = arg2[0]
zmm9 = arg1[6].d
zmm8 = *(arg1 + 0x34)
float temp0_33[0x4] = _mm_shuffle_ps(arg2, arg2, 0x55)
zmm8 ^= 0x80000000
temp0_33[0] = temp0_33[0] f- var_88_2:4.d
temp0_33[0] = temp0_33[0] * zmm4[0]
zmm2 = (zmm2 f- var_88_2.d) * zmm6[0] + temp0_33[0]
float result_1[0x4] = result
result_1[0] = result_1[0] - var_70
result_1[0] = result_1[0] * zmm9[0]
zmm2 = zmm2 + result_1[0]
zmm10[0] = zmm10[0] f* arg1[8].d
zmm10[0] = zmm10[0] f* *(arg1 + 0x3c)
zmm8[0] = zmm8[0] - zmm2
zmm10[0] = zmm10[0] f- *(arg1 + 0x44)
zmm10[0] = zmm10[0] f- *(arg1 + 0x44)
zmm8[0] = zmm8[0] f* arg1[9].d
float temp0_35[0x4] = _mm_max_ss(_mm_min_ss(zmm8[0], zmm10[0])[0], zmm10[0])

if (r8 != 0)
    zmm5 = temp0_35 ^ 0x80000000
    zmm5[0] = zmm5[0] * zmm6[0]
    zmm5[0] = zmm5[0] * zmm4[0]
    zmm5[0] = zmm5[0] * zmm9[0]
    zmm5[0] = zmm5[0] f+ *(r8 + 0x20)
    zmm5[0] = zmm5[0] f+ *(r8 + 0x24)
    *(r8 + 0x20) = zmm5[0]
    zmm5[0] = zmm5[0] f+ *(r8 + 0x28)
    *(r8 + 0x24) = zmm5[0]
    *(r8 + 0x28) = zmm5[0]
    zmm4 = arg1[0xa].d
    zmm2 = *(arg1 + 0x54)
    zmm3 = *(arg1 + 0x4c)
    zmm5[0] = zmm5[0] * zmm2
    zmm5[0] = zmm5[0] * zmm4[0]
    zmm5[0] = zmm5[0] * zmm3[0]
    zmm5[0] = zmm5[0] - zmm5[0]
    zmm5[0] = zmm5[0] * zmm3[0]
    zmm5[0] = zmm5[0] * zmm4[0]
    zmm5[0] = zmm5[0] * zmm2
    zmm5[0] = zmm5[0] f+ *(r8 + 0x2c)
    zmm5[0] = zmm5[0] - zmm5[0]
    zmm5[0] = zmm5[0] - zmm5[0]
    *(r8 + 0x2c) = zmm5[0]
    zmm5[0] = zmm5[0] f+ *(r8 + 0x34)
    zmm5[0] = zmm5[0] f+ *(r8 + 0x30)
    *(r8 + 0x34) = zmm5[0]
    *(r8 + 0x30) = zmm5[0]
    rdx = arg1[1]

if (rdx != 0)
    temp0_35[0] = temp0_35[0] f* *(arg1 + 0x2c)
    temp0_35[0] = temp0_35[0] f* arg1[5].d
    temp0_35[0] = temp0_35[0] f* arg1[6].d
    temp0_35[0] = temp0_35[0] f+ *(rdx + 0x24)
    temp0_35[0] = temp0_35[0] f+ *(rdx + 0x20)
    *(rdx + 0x24) = temp0_35[0]
    *(rdx + 0x20) = temp0_35[0]
    temp0_35[0] = temp0_35[0] f+ *(rdx + 0x28)
    *(rdx + 0x28) = temp0_35[0]
    zmm4 = *(arg1 + 0x5c)
    zmm2 = arg1[0xc].d
    zmm3 = arg1[0xb].d
    temp0_35[0] = temp0_35[0] * zmm2
    temp0_35[0] = temp0_35[0] * zmm4[0]
    temp0_35[0] = temp0_35[0] * zmm3[0]
    temp0_35[0] = temp0_35[0] - temp0_35[0]
    temp0_35[0] = temp0_35[0] * zmm3[0]
    temp0_35[0] = temp0_35[0] * zmm4[0]
    temp0_35[0] = temp0_35[0] * zmm2
    temp0_35[0] = temp0_35[0] f+ *(rdx + 0x2c)
    temp0_35[0] = temp0_35[0] - temp0_35[0]
    temp0_35[0] = temp0_35[0] - temp0_35[0]
    *(rdx + 0x2c) = temp0_35[0]
    temp0_35[0] = temp0_35[0] f+ *(rdx + 0x34)
    temp0_35[0] = temp0_35[0] f+ *(rdx + 0x30)
    *(rdx + 0x34) = temp0_35[0]
    *(rdx + 0x30) = temp0_35[0]

temp0_35[0] = temp0_35[0] f+ *(arg1 + 0x44)
*(arg1 + 0x44) = temp0_35[0]
return result
