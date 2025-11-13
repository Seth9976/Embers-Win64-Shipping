// 函数: sub_1427aac10
// 地址: 0x1427aac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
*arg2 = (_mm_unpacklo_ps(zx.o(0), 0x3f800000)).q
int32_t var_90 = 0
arg2[1].d = 0
*arg3 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int32_t var_90_1 = 0x3f800000
float result = 1f
arg3[1].d = 0x3f800000
float result_2 = *(arg1 + 0x10)
float zmm0[0x4]

if (result_2 s>= 0)
    result = 2.80259693e-45f
    
    if (result_2 s< 2)
        result = result_2
    
    float result_1
    
    if (result == 1)
        *arg2 = (_mm_unpacklo_ps(0xbf800000, 0)).q
        int32_t var_90_2 = 0
        zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
        result_1 = 1f
    label_1427aacc4:
        arg2[1].d = 0
        result = result_1
        *arg3 = zmm0.q
        arg3[1].d = result
    else if (result == 2)
        int32_t var_90_3 = 0
        *arg2 = (_mm_unpacklo_ps(0x3f800000, 0)).q
        zmm0 = _mm_unpacklo_ps(zx.o(0), 0x3f800000)
        result_1 = 0f
        goto label_1427aacc4

if (*(arg1 + 0x14) != 0)
    zmm0 = zx.o(*arg2)
    int32_t rax = arg2[1].d
    float zmm6[0x4] = zmm0.d
    float zmm11[0x4] = *(r10 + 0x1c0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
    zmm6[0] = zmm6[0] * temp0_7[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    float zmm13[0x4] = rax
    temp0_8[0] = temp0_8[0] * temp0_7[0]
    zmm13[0] = zmm13[0] * temp0_6[0]
    temp0_8[0] = temp0_8[0] * zmm11[0]
    zmm13[0] = zmm13[0] - temp0_8[0]
    zmm13[0] = zmm13[0] * zmm11[0]
    zmm6[0] = zmm6[0] - zmm13[0]
    zmm6[0] = zmm6[0] * temp0_6[0]
    zmm13[0] = zmm13[0] + zmm13[0]
    temp0_8[0] = temp0_8[0] - zmm6[0]
    float temp0_9[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    zmm6[0] = zmm6[0] + zmm6[0]
    int64_t zmm1
    zmm1.d = zmm13[0].q.d f* temp0_9[0]
    temp0_8[0] = temp0_8[0] + temp0_8[0]
    int32_t zmm2 = zmm6[0] f* temp0_9[0]
    zmm6[0] = zmm6[0] f+ zmm1.d
    zmm1 = zmm13[0].q
    zmm13[0] = zmm13[0] * temp0_6[0]
    zmm1.d = zmm1.d f* temp0_7[0]
    temp0_8[0] = temp0_8[0] * temp0_6[0]
    temp0_8[0] = temp0_8[0] f+ zmm2
    float zmm3 = temp0_8[0]
    temp0_8[0] = temp0_8[0] * zmm11[0]
    zmm3 = zmm3 * temp0_9[0]
    zmm6[0] = zmm6[0] * temp0_7[0]
    zmm1.d = zmm1.d f- temp0_8[0]
    zmm6[0] = zmm6[0] * zmm11[0]
    zmm13[0] = zmm13[0] + zmm3
    temp0_8[0] = temp0_8[0] - zmm6[0]
    zmm1.d = zmm1.d f+ temp0_8[0]
    zmm6[0] = zmm6[0] - zmm13[0]
    temp0_8[0] = temp0_8[0] + zmm6[0]
    zmm6[0] = zmm6[0] + zmm13[0]
    *arg2 = (_mm_unpacklo_ps(temp0_8, zmm1)).q
    arg2[1].d = zmm6[0]
    zmm11 = *(r10 + 0x1c0)
    zmm0 = zx.o(*arg3)
    zmm13 = arg3[1].d
    float temp0_11[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    zmm13[0] = zmm13[0] * temp0_11[0]
    zmm6 = zmm0.d
    float temp0_12[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
    zmm6[0] = zmm6[0] * temp0_12[0]
    float temp0_13[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    temp0_13[0] = temp0_13[0] * temp0_12[0]
    temp0_13[0] = temp0_13[0] * zmm11[0]
    zmm13[0] = zmm13[0] - temp0_13[0]
    zmm13[0] = zmm13[0] * zmm11[0]
    zmm6[0] = zmm6[0] - zmm13[0]
    zmm6[0] = zmm6[0] * temp0_11[0]
    zmm13[0] = zmm13[0] + zmm13[0]
    temp0_13[0] = temp0_13[0] - zmm6[0]
    float temp0_14[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    zmm6[0] = zmm6[0] + zmm6[0]
    zmm1.d = zmm13[0].q.d f* temp0_14[0]
    temp0_13[0] = temp0_13[0] + temp0_13[0]
    zmm2 = zmm6[0]
    zmm6[0] = zmm6[0] f+ zmm1.d
    zmm2 = zmm2 f* temp0_14[0]
    zmm1 = zmm13[0].q
    zmm13[0] = zmm13[0] * temp0_11[0]
    zmm1.d = zmm1.d f* temp0_12[0]
    temp0_13[0] = temp0_13[0] * temp0_11[0]
    temp0_13[0] = temp0_13[0] f+ zmm2
    zmm3 = temp0_13[0] * temp0_14[0]
    zmm6[0] = zmm6[0] * temp0_12[0]
    zmm13[0] = zmm13[0] + zmm3
    zmm6[0] = zmm6[0] * zmm11[0]
    temp0_13[0] = temp0_13[0] - zmm6[0]
    temp0_13[0] = temp0_13[0] * zmm11[0]
    zmm6[0] = zmm6[0] - zmm13[0]
    zmm1.d = zmm1.d f- temp0_13[0]
    temp0_13[0] = temp0_13[0] + zmm6[0]
    zmm6[0] = zmm6[0] + zmm13[0]
    zmm1.d = zmm1.d f+ temp0_13[0]
    result = zmm6[0]
    *arg3 = (_mm_unpacklo_ps(temp0_13, zmm1)).q
    arg3[1].d = result

return result
