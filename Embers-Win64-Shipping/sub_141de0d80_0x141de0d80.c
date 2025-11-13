// 函数: sub_141de0d80
// 地址: 0x141de0d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[0] <= 9.99999975e-06f)
    return 

bool cond:1_1 = arg3[0] < 0.999989986f
uint64_t i_2 = zx.q(arg1[1].d)
float zmm10[0x4] = arg3[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)

if (not(cond:1_1))
    return sub_1400f5ad0(*arg1, *arg2, arg3, i_2.d) __tailcall

if (i_2.d == 0)
    return 

float zmm6[0x4]
float var_18_1[0x4] = zmm6
int64_t rdx_1 = 0
float zmm7[0x4]
float var_28_1[0x4] = zmm7
uint64_t i_1 = i_2
float zmm8[0x4]
float var_38_1[0x4] = zmm8
float zmm9[0x4]
float var_48_1[0x4] = zmm9
float zmm12[0x4] = data_142e6da00
float zmm13[0x4] = data_143f39110
float zmm14[0x4] = data_143f39100
float zmm15[0x4] = data_143f390f0
uint64_t i

do
    zmm6 = data_143f390c0
    float (* rax_1)[0x4] = *arg2
    float temp0_2[0x4] = _mm_sub_ps(zx.o(0), zmm6)
    zmm7 = data_143f390d0
    arg3 = *(rax_1 + rdx_1)
    zmm9 = *(rax_1 + rdx_1 + 0x20)
    float temp0_3[0x4] = _mm_sub_ps(*(rax_1 + rdx_1 + 0x10), zx.o(0))
    i_2 = *arg1
    float temp0_4[0x4] = _mm_sub_ps(zmm9, zx.o(0))
    float zmm5[0x4] = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg3, 2), temp0_2 ^ zmm6)
    float temp0_7[0x4] = _mm_sub_ps(data_143f39070, temp0_1)
    float temp0_8[0x4] = _mm_mul_ps(temp0_3, temp0_1)
    float temp0_9[0x4] = _mm_mul_ps(temp0_1, arg3)
    float temp0_10[0x4] = _mm_mul_ps(zmm5 ^ temp0_2, temp0_7)
    float temp0_11[0x4] = _mm_add_ps(temp0_8, zx.o(0))
    float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
    float temp0_13[0x4] = _mm_mul_ps(temp0_12, temp0_12)
    float temp0_15[0x4] = _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_13, temp0_13, 0x4e))
    float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x39), temp0_15)
    float temp0_18[0x4] = _mm_rsqrt_ps(temp0_17)
    float temp0_19[0x4] = _mm_mul_ps(temp0_17, zmm7)
    float temp0_24[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_18, temp0_18), temp0_19)), 
            temp0_18), 
        temp0_18)
    float temp0_27[0x4] = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_24, temp0_24), temp0_19))
    float temp0_28[0x4] = _mm_cmpeq_ps(data_143f390e0, temp0_17, 2)
    float temp0_30[0x4] = _mm_add_ps(_mm_mul_ps(temp0_27, temp0_24), temp0_24)
    arg3 = *(rdx_1 + i_2)
    zmm7 = _mm_and_ps(_mm_mul_ps(temp0_30, temp0_12) ^ zmm6, temp0_28) ^ zmm6
    float temp0_33[0x4] = _mm_shuffle_ps(arg3, arg3, 0x1b)
    float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_33)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    float temp0_37[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    float temp0_38[0x4] = _mm_mul_ps(temp0_36, arg3)
    float temp0_39[0x4] = _mm_mul_ps(temp0_35, zmm13)
    float temp0_40[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_38)
    float temp0_43[0x4] = _mm_mul_ps(temp0_37, _mm_shuffle_ps(arg3, arg3, 0x4e))
    float temp0_45[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(arg3, arg3, 0xb1))
    float temp0_46[0x4] = _mm_mul_ps(temp0_43, zmm14)
    float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm15)
    *(rdx_1 + i_2) = _mm_add_ps(_mm_add_ps(temp0_41, temp0_46), temp0_47)
    *(rdx_1 + i_2 + 0x10) = __addps_xmmps_memps(temp0_11, *(rdx_1 + i_2 + 0x10))
    *(rdx_1 + i_2 + 0x20) = __mulps_xmmps_memps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_4, temp0_1), zx.o(0)), zmm12), *(rdx_1 + i_2 + 0x20))
    rdx_1 += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
