// 函数: sub_141504c20
// 地址: 0x141504c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = data_142d4cc00
int32_t rax = arg2[1].d
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
uint128_t zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
float zmm7[0x4] = *(arg1 + 0x20)
float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_2)
float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_5[0x4] = _mm_mul_ps(temp0, temp0_4)
float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_7[0x4] = _mm_sub_ps(temp0_5, zmm0)
uint128_t zmm10 = *(arg1 + 0x30)
uint128_t zmm12 = *(arg1 + 0x40)
float temp0_8[0x4] = _mm_add_ps(temp0_7, temp0_7)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xc9), temp0_2)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xd2), temp0_4)
float temp0_13[0x4] = _mm_mul_ps(temp0_8, temp0_6)
float temp0_14[0x4] = _mm_sub_ps(temp0_12, zmm0)
zmm0.d = 1f f/ zmm12.d
float temp0_16[0x4] = _mm_add_ps(temp0_14, _mm_add_ps(temp0_13, zmm2))
float zmm1[0x4] = data_142d4cc20
float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_4)
temp0_16[0] = temp0_16[0] f* zmm0.d
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
temp0_19[0] = temp0_19[0] f* zmm0.d
float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
temp0_20[0] = temp0_20[0] f* zmm0.d
float temp0_23[0x4] = _mm_sub_ps(temp0_18, _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_2))
float temp0_24[0x4] = _mm_add_ps(temp0_23, temp0_23)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xc9), temp0_2)
float temp0_28[0x4] = _mm_mul_ps(temp0_25, temp0_4)
float temp0_29[0x4] = _mm_mul_ps(temp0_24, temp0_6)
float temp0_30[0x4] = _mm_sub_ps(temp0_28, zmm0)
zmm0 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
float temp0_32[0x4] = _mm_add_ps(temp0_29, zmm1)
zmm1 = 0x3f800000
zmm1[0] = 1f f/ zmm0.d
zmm0 = zx.o(*arg2)
float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_32)
float zmm3[0x4] = zmm0
zmm2 = zmm0
zmm3[0] = zmm3[0] f- zmm10.d
float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
temp0_33[0] = temp0_33[0] * zmm1[0]
temp0_34[0] = temp0_34[0] * zmm1[0]
temp0_35[0] = temp0_35[0] * zmm1[0]
int32_t r15 = *(arg1 + 0x50)
int32_t rbp = 0
int32_t rsi = *(arg1 + 0x54)
int32_t r12 = 0
zmm1 = rax
temp0_33[0] = temp0_33[0] * zmm3[0]
uint64_t var_98 = zmm0.q
zmm0 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
float temp0_37[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0_37[0] = temp0_37[0] f- zmm0.d
zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
zmm1[0] = zmm1[0] f- zmm10.d
temp0_16[0] = temp0_16[0] * zmm3[0]
zmm3 = zx.o(0)
zmm3[0] = float.s(r15)
temp0_35[0] = temp0_35[0] * zmm1[0]
temp0_20[0] = temp0_20[0] * zmm1[0]
temp0_19[0] = temp0_19[0] * temp0_37[0]
temp0_34[0] = temp0_34[0] * temp0_37[0]
zmm2 = 0xbf000000
temp0_19[0] = temp0_19[0] + temp0_16[0]
temp0_33[0] = temp0_33[0] + temp0_34[0]
float zmm4[0x4] = zx.o(0)
zmm4[0] = float.s(rsi)
temp0_19[0] = temp0_19[0] + temp0_20[0]
temp0_33[0] = temp0_33[0] + temp0_35[0]
float zmm5[0x4] = 0x3f800000
zmm5[0] = 1f f/ zmm12.d
int128_t zmm9
zmm9.d = 1f f/ _mm_shuffle_ps(zmm12, zmm12, 0x55).d
float temp0_40[0x4] = _mm_max_ss(zmm5[0], zmm9.d)
temp0_40[0] = temp0_40[0] f* arg2[3].d
temp0_19[0] = temp0_19[0] - temp0_40[0]
temp0_19[0] = temp0_19[0] + temp0_40[0]
temp0_19[0] = temp0_19[0] * zmm3[0]
temp0_19[0] = temp0_19[0] * zmm3[0]
temp0_19[0] = temp0_19[0] + temp0_19[0]
temp0_19[0] = temp0_19[0] + temp0_19[0]
temp0_19[0] = temp0_19[0] - 0.5f
zmm0.d = -0.5f - temp0_19[0]
int32_t r8 = int.d(temp0_19[0])
temp0_33[0] = temp0_33[0] + temp0_40[0]
temp0_33[0] = temp0_33[0] - temp0_40[0]
temp0_33[0] = temp0_33[0] * zmm4[0]
int32_t rcx_2 = neg.d(int.d(zmm0.d) s>> 1)
temp0_33[0] = temp0_33[0] * zmm4[0]
temp0_33[0] = temp0_33[0] + temp0_33[0]
temp0_33[0] = temp0_33[0] + temp0_33[0]
temp0_33[0] = temp0_33[0] - 0.5f
zmm2[0] = -0.5f - temp0_33[0]
uint64_t result = zx.q(neg.d(int.d(zmm2[0]) s>> 1))
int32_t r8_1 = r8 s>> 1

if (r8_1 s>= 0)
    r12 = r8_1

int32_t rdx_1 = int.d(temp0_33[0]) s>> 1
var_98.d = r12

if (rdx_1 s>= 0)
    rbp = rdx_1

var_98:4.d = rbp

if (rcx_2 s<= r15)
    r15 = rcx_2

if (result.d s<= rsi)
    rsi = result.d

if (r12 s>= r15)
    r15 = r12

int32_t var_90_1 = r15

if (rbp s>= rsi)
    rsi = rbp

int32_t var_8c = rsi

if (r12 != r15 || rbp != rsi)
    int64_t r14_1 = sx.q(*(arg1 + 0x68))
    int32_t rax_3 = (r14_1 + 1).d
    *(arg1 + 0x68) = rax_3
    
    if (rax_3 s> *(arg1 + 0x6c))
        sub_1405a4f90(arg1 + 0x60)
    
    result = *(arg1 + 0x60)
    *(result + r14_1 * 0x10) = var_98.o
    
    if (r14_1.d != 0)
        if (*(arg1 + 0x70) s<= r12)
            r12 = *(arg1 + 0x70)
        
        if (*(arg1 + 0x74) s<= rbp)
            rbp = *(arg1 + 0x74)
        
        if (*(arg1 + 0x78) s>= r15)
            r15 = *(arg1 + 0x78)
        
        if (*(arg1 + 0x7c) s>= rsi)
            rsi = *(arg1 + 0x7c)
    
    *(arg1 + 0x74) = rbp
    *(arg1 + 0x70) = r12
    *(arg1 + 0x7c) = rsi
    *(arg1 + 0x78) = r15

return result
