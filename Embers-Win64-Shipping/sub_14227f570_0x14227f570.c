// 函数: sub_14227f570
// 地址: 0x14227f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
float var_30

if (0f f!= *(arg1 + 0x204))
    var_38 = *(arg1 + 0x208)
    var_30 = *(arg1 + 0x210)
else
    float zmm4[0x4] = data_142d4cc00
    float zmm5[0x4] = *(arg1 + 0x1c0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_2)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_1)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_8[0x4] = _mm_sub_ps(temp0_6, temp0_4)
    float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_8)
    float temp0_10[0x4] = _mm_mul_ps(temp0_7, temp0_9)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd2)
    float zmm2[0x4] = *(arg1 + 0x1d0)
    float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_2)
    float temp0_14[0x4] = _mm_add_ps(temp0_10, zmm4)
    float temp0_17[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_12, temp0_1), temp0_13), temp0_14)
    temp0_17[0] = temp0_17[0] f* *(arg1 + 0x1f8)
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
    temp0_18[0] = temp0_18[0] f* *(arg1 + 0x1f8)
    zmm2[0] = zmm2[0] + temp0_17[0]
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
    temp0_19[0] = temp0_19[0] f* *(arg1 + 0x1f8)
    float temp0_20[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    temp0_20[0] = temp0_20[0] + temp0_18[0]
    temp0_21[0] = temp0_21[0] + temp0_19[0]
    var_38.d = zmm2[0]
    var_38:4.d = temp0_20[0]
    var_30 = temp0_21[0]

int64_t** rbx = *(arg1 + 0xd0)
int64_t rdi = 0
void* result = &rbx[sx.q(*(arg1 + 0xd8))]
uint64_t rsi_1 = sx.q(*(arg1 + 0xd8)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *rbx
        int64_t var_28 = var_38
        float var_20_1 = var_30
        float zmm6[0x4]
        float zmm7[0x4]
        float zmm8[0x4]
        result, zmm6, zmm7, zmm8 = sub_141f49c70(rcx, &var_28, 0, 0, zmm6, zmm7, zmm8, 0)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

return result
