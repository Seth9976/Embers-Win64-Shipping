// 函数: sub_141ded7c0
// 地址: 0x141ded7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3[0]

if (not(arg3[0] < 0.999989986f))
    return sub_140780b40(arg1, arg2) __tailcall

if (arg3[0] <= 9.99999975e-06f)
    return 

float zmm0[0x4] = 0x3f800000
int64_t r11_2 = *arg2
zmm0[0] = 1f - arg3[0]
int64_t r8_2 = *arg1
int32_t i = 0
float zmm8[0x4] = arg_18
float zmm9[0x4] = zmm0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)

if (arg4[1].d s<= 0)
    return 

float zmm6[0x4]
float var_18_1[0x4] = zmm6
void* r10_2 = nullptr
float zmm7[0x4]
float var_28_1[0x4] = zmm7
float zmm11[0x4] = data_143f390e0

do
    i += 1
    uint64_t rcx_1 = zx.q(*(r10_2 + *arg4))
    r10_2 += 2
    uint64_t rax = rcx_1 * 6
    float temp0_3[0x4] = __mulps_xmmps_memps(temp0_1, *(r8_2 + (rax << 3) + 0x20))
    float zmm4[0x4] = *(r8_2 + (rax << 3))
    float temp0_4[0x4] = __mulps_xmmps_memps(temp0_1, *(r8_2 + (rax << 3) + 0x10))
    *(r8_2 + (rax << 3) + 0x20) = temp0_3
    float temp0_5[0x4] = _mm_mul_ps(zmm4, temp0_1)
    *(r8_2 + (rax << 3) + 0x10) = temp0_4
    *(r8_2 + (rax << 3)) = temp0_5
    float temp0_6[0x4] = _mm_mul_ps(*(r11_2 + (rax << 3)), temp0_2)
    float temp0_7[0x4] = _mm_sub_ps(zx.o(0), temp0_6)
    float temp0_8[0x4] = _mm_mul_ps(temp0_5, temp0_6)
    float temp0_10[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_8, temp0_8, 0x4e))
    float temp0_15[0x4] = _mm_add_ps(
        _mm_and_ps(
            _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x39), temp0_10), 
                2), 
            temp0_7 ^ temp0_6) ^ temp0_7, 
        temp0_5)
    *(r8_2 + (rax << 3)) = temp0_15
    float temp0_16[0x4] = _mm_mul_ps(*(r11_2 + (rax << 3) + 0x10), temp0_2)
    float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_15)
    *(r8_2 + (rax << 3) + 0x10) = _mm_add_ps(temp0_16, temp0_4)
    float zmm1[0x4] = *(r11_2 + (rax << 3) + 0x20)
    float temp0_20[0x4] = _mm_add_ps(temp0_17, _mm_shuffle_ps(temp0_17, temp0_17, 0x4e))
    float temp0_22[0x4] = _mm_add_ps(_mm_mul_ps(zmm1, temp0_2), temp0_3)
    float temp0_24[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x39), temp0_20)
    *(r8_2 + (rax << 3) + 0x20) = temp0_22
    float zmm5[0x4] = data_143f390d0
    float temp0_25[0x4] = _mm_rsqrt_ps(temp0_24)
    float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm5)
    float temp0_31[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_25, temp0_25), temp0_26)), 
            temp0_25), 
        temp0_25)
    float temp0_34[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_31, temp0_31), temp0_26))
    float temp0_35[0x4] = _mm_cmpeq_ps(zmm11, temp0_24, 2)
    *(r8_2 + (rax << 3)) = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_34, temp0_31), temp0_31), temp0_15)
            ^ data_143f390c0, 
        temp0_35) ^ data_143f390c0
while (i s< arg4[1].d)
