// 函数: sub_14241d510
// 地址: 0x14241d510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_a8[0x4]
float var_98[0x4]
float var_88[0x4]
float var_78[0x4]
int32_t rax_1

if (*(arg1 + 0x30) s<= 0)
    float zmm1[0x4] = arg2[1]
    var_a8 = *arg2
    var_98 = zmm1
    var_88 = arg2[2]
    var_78 = arg2[3]
    rax_1 = sub_140b212b0(&var_a8, 0x40, 0)
else
    float zmm2[0x4] = *arg2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    int128_t* rax = *(arg1 + 0x28)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float zmm7[0x4] = rax[1]
    float zmm6[0x4] = *rax
    float zmm8[0x4] = rax[2]
    float zmm9[0x4] = rax[3]
    float temp0_5[0x4] = _mm_mul_ps(temp0_1, zmm7)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, zmm8)
    float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm9)
    float temp0_11[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_3, zmm6), temp0_5), temp0_6), temp0_7)
    zmm2 = arg2[1]
    float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm7)
    float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm8)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
    float temp0_19[0x4] = _mm_mul_ps(temp0_14, zmm6)
    var_a8 = temp0_11
    float temp0_22[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_19, temp0_15), temp0_16), temp0_18)
    zmm2 = arg2[2]
    float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_25[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm7)
    float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm8)
    float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
    var_98 = temp0_22
    float temp0_33[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_23, zmm6), temp0_26), temp0_27), temp0_29)
    zmm2 = arg2[3]
    float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_36[0x4] = _mm_mul_ps(temp0_34, zmm6)
    float temp0_37[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, zmm7)
    float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm8)
    float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float temp0_41[0x4] = _mm_add_ps(temp0_36, temp0_38)
    float temp0_42[0x4] = _mm_mul_ps(temp0_40, zmm9)
    var_88 = temp0_33
    var_78 = _mm_add_ps(_mm_add_ps(temp0_41, temp0_39), temp0_42)
    rax_1 = sub_140b212b0(&var_a8, 0x40, 0)

int64_t rdi = sx.q(*(arg1 + 0x30))
int32_t rax_2 = (rdi + 1).d
bool cond:1 = rax_2 s<= *(arg1 + 0x34)
*(arg1 + 0x30) = rax_2

if (not(cond:1))
    sub_1405c5060(arg1 + 0x28)

int64_t result = *(arg1 + 0x28)
int64_t rcx_4 = rdi * 0xa
*(result + (rcx_4 << 3)) = var_a8
*(result + (rcx_4 << 3) + 0x10) = var_98
*(result + (rcx_4 << 3) + 0x20) = var_88
*(result + (rcx_4 << 3) + 0x30) = var_78
*(result + (rcx_4 << 3) + 0x40) = rax_1.o
return result
