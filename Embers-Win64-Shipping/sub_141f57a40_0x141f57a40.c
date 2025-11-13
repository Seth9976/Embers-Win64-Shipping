// 函数: sub_141f57a40
// 地址: 0x141f57a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x440)
float (* result)[0x4] = arg2

if (rcx == 0)
    float zmm2[0x4] = arg3[1]
    arg2[3].d = 0
    float var_50_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg2[1].d = var_50_1
    int32_t rax_3 = data_143dbb200
    *(arg2 + 0xc) = data_143dbb1f8.q
    *(arg2 + 0x14) = rax_3
else
    float var_48[0x4]
    void var_28
    sub_140ae2e90(sub_1423633d0(rcx, &var_28), &var_48, arg3)
    float zmm1_1[0x4] = *(arg1 + 0x264)
    int32_t var_30
    float zmm0_1[0x4] = var_30
    int32_t var_38
    float zmm4_1[0x4] = var_38
    zmm0_1[0] = zmm0_1[0] * zmm1_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm1_1[0]
    int32_t var_34
    int64_t zmm3_1
    zmm3_1.d = var_34.d f* zmm1_1[0]
    float var_3c
    float zmm2_1 = var_3c * zmm1_1[0]
    zmm1_1 = var_48
    float var_30_1 = zmm0_1[0]
    float temp0[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x93)
    temp0[0] = zmm2_1
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm4_1, zmm3_1)
    *result = _mm_shuffle_ps(temp0, temp0, 0x39)
    result[1][0].q = temp0_1.q
    (*result)[6] = var_30_1

return result
