// 函数: sub_141e32730
// 地址: 0x141e32730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int128_t zmm6 = zx.o(0)
float var_48[0x4]
float zmm4
float zmm5
int128_t zmm7

if (rax == 0)
    zmm7 = zx.o(0)
else
    zmm4 = arg1[2].d
    zmm7 = *(arg1 + 0x14)
    zmm5 = arg1[3].d
    int32_t var_3c_1 = 0
    var_48[0] = zmm4
    int64_t var_38_1 = 0
    float temp0_1[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
    temp0_1[0] = zmm7.d
    int32_t var_30_1 = 0
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm5
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    var_48 = temp0_3
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rax + 0xb0))
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rax + 0xa0))
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rax + 0x90))
    float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
        _mm_add_ps(temp0_9, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rax + 0x80))))
    zmm4 = zmm4 * temp0_14[0]
    zmm7.d = zmm7.d f* _mm_shuffle_ps(temp0_14, temp0_14, 0x55)[0]
    zmm7.d = zmm7.d f+ zmm4
    zmm7.d = zmm7.d f+ zmm5 * _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)[0]

void* result = arg1[1]

if (result != 0)
    zmm4 = arg1[2].d
    zmm6 = *(arg1 + 0x14)
    zmm5 = arg1[3].d
    int32_t var_3c_2 = 0
    var_48[0] = zmm4
    int64_t var_38_2 = 0
    float temp0_17[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
    temp0_17[0] = zmm6.d
    int32_t var_30_2 = 0
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
    temp0_18[0] = zmm5
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
    float temp0_21[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), *(result + 0xb0))
    float temp0_23[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), *(result + 0xa0))
    float temp0_25[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), *(result + 0x90))
    float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(temp0_21, temp0_23), 
        _mm_add_ps(temp0_25, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *(result + 0x80))))
    zmm4 = zmm4 * temp0_30[0]
    zmm6.d = zmm6.d f* _mm_shuffle_ps(temp0_30, temp0_30, 0x55)[0]
    zmm6.d = zmm6.d f+ zmm4
    zmm6.d = zmm6.d f+ zmm5 * _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)[0]

float zmm0[0x4] = 0x3f800000
zmm6.d = zmm6.d f+ zmm7.d
zmm0[0] = 1f f/ zmm6.d
*(arg1 + 0x2c) = zmm0[0]
return result
