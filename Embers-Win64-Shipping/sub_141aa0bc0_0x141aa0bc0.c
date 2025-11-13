// 函数: sub_141aa0bc0
// 地址: 0x141aa0bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t rcx = *(arg1 + 0xd0)
int32_t rbx

if (rcx s>= 0)
    rbx = *(arg1 + 0xd4)
else
    int32_t rcx_1 = rcx * 2
    
    if ((rcx_1 & 0xfffffffe) == 0xfffffffe)
        rbx = -1
    else
        rbx = *(*(arg2[3] + 0x80) + (sx.q(rcx_1) s>> 1 << 2))

int64_t r15 = sx.q(rbx)

if (*(r15 + arg2[4]) == 0)
    sub_141a98300(&arg2[1], rbx)

int64_t rax_6 = arg2[1]
int64_t rcx_5 = r15 * 6
float var_b8[0x4] = *(rax_6 + (rcx_5 << 3))
int128_t zmm1 = *(rax_6 + (rcx_5 << 3) + 0x10)
float zmm0[0x4] = *(rax_6 + (rcx_5 << 3) + 0x20)
int32_t var_f8
sub_141a89330(arg1 + 0xe0, &var_f8, arg1 + 0x140, &arg2[1], *arg2 + 0x10)
uint128_t zmm1_1 = zx.o(*(arg1 + 0x188))
int32_t rax_9 = *(arg1 + 0x190)
float zmm0_1[0x4] = zmm1_1
float var_e8[0x4]
float temp0[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xaa)
float var_144 = temp0[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
temp0[0] = temp0[0] - temp0_2[0]
float var_148 = var_e8[0]
var_e8[0] = var_e8[0] f- zmm1_1.d
float var_140 = temp0_1[0]
zmm1_1 = *(arg1 + 0x178)
zmm0_1 = zmm1_1
temp0_1[0] = temp0_1[0] f- rax_9
temp0[0] = temp0[0] * temp0[0]
var_e8[0] = var_e8[0] * var_e8[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0[0] = temp0[0] + var_e8[0]
zmm0_1[0] = zmm0_1[0] f* zmm1_1.d
temp0[0] = temp0[0] + temp0_1[0]

if (not(temp0[0] <= zmm0_1[0]))
    if (not((*(arg1 + 0x174))[0] f> *(arg1 + 0x1a0)))
        *(arg1 + 0x1a0) = 0
    
    *(arg1 + 0x194) = *(arg1 + 0x188)
    *(arg1 + 0x19c) = rax_9
    *(arg1 + 0x188) = var_148.q
    *(arg1 + 0x190) = var_140
else if (not(zmm1_1.d f!= 0f))
    *(arg1 + 0x188) = var_148.q
    *(arg1 + 0x190) = var_140

zmm1_1 = *(arg1 + 0x174)
int128_t* r8_1
float zmm6_1[0x4]
float rax_11

if (zmm1_1.d f<= 0f)
    zmm0_1 = zx.o(*(arg1 + 0x188))
    rax_11 = *(arg1 + 0x190)
label_141aa0e1e:
    r8_1 = arg1 + 0x17c
    *r8_1 = zmm0_1.q
    *(r8_1 + 8) = rax_11
else
    zmm0_1 = *(arg1 + 0x1a0)
    zmm0_1[0] = zmm0_1[0] f/ zmm1_1.d
    
    if (not(zmm0_1[0] >= 1f))
        zmm6_1 = *(arg1 + 0x194)
        int32_t zmm7_1 = *(arg1 + 0x198)
        int32_t zmm8_1 = *(arg1 + 0x19c)
        zmm0_1 = sub_141a95780(zmm0_1, zx.d(*(arg1 + 0x15d)))
        float zmm3[0x4] = *(arg1 + 0x188)
        float zmm2[0x4] = zmm0_1
        zmm0_1 = *(arg1 + 0x190)
        zmm3[0] = zmm3[0] - zmm6_1[0]
        zmm1_1 = *(arg1 + 0x18c)
        zmm0_1[0] = zmm0_1[0] f- zmm8_1
        zmm1_1.d = zmm1_1.d f- zmm7_1
        zmm3[0] = zmm3[0] * zmm2[0]
        zmm0_1[0] = zmm0_1[0] * zmm2[0]
        zmm1_1.d = zmm1_1.d f* zmm2[0]
        zmm3[0] = zmm3[0] + zmm6_1[0]
        zmm0_1[0] = zmm0_1[0] f+ zmm8_1
        zmm1_1.d = zmm1_1.d f+ zmm7_1
        rax_11 = zmm0_1[0]
        zmm0_1 = _mm_unpacklo_ps(zmm3, zmm1_1.q)
        goto label_141aa0e1e
    
    r8_1 = arg1 + 0x17c
int32_t rax_12 = *(arg1 + 0x190)
zmm6_1 = var_b8
*(arg1 + 0x1a4) = *(arg1 + 0x188)
*(arg1 + 0x1ac) = rax_12
int64_t var_128

if (*(arg1 + 0x158) == 0)
    int32_t rax_13 = *(arg1 + 0x154)
    var_128 = *(arg1 + 0x14c)
    int32_t var_120_1 = rax_13
else
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x14c), (*(arg1 + 0x154))[0].q), 
        _mm_unpacklo_ps(*(arg1 + 0x150), 0)[0].q)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
    zmm1_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(temp0_8, zmm1_1)
    float temp0_13[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_9, temp0_7), temp0_11)
    float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), zmm1_1)
    float temp0_23[0x4] = _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xd2), temp0_7), temp0_16), 
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xff), temp0_14), temp0_6))
    var_128.d = temp0_23[0]
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
    float var_120 = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)[0]
    var_128:4.d = temp0_24[0]

int64_t var_138

if (*(arg1 + 0x16c) == 0)
    int32_t rax_14 = *(arg1 + 0x168)
    var_138 = *(arg1 + 0x160)
    int32_t var_130_1 = rax_14
else
    float temp0_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x160), (*(arg1 + 0x168))[0].q), 
        _mm_unpacklo_ps(*(arg1 + 0x164), 0)[0].q)
    float temp0_29[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
    zmm1_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
    float temp0_32[0x4] = _mm_mul_ps(temp0_30, zmm1_1)
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_29)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
    float temp0_36[0x4] = _mm_sub_ps(temp0_34, temp0_32)
    float temp0_37[0x4] = _mm_add_ps(temp0_36, temp0_36)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_37)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xd2)
    float temp0_41[0x4] = _mm_mul_ps(temp0_39, zmm1_1)
    float temp0_42[0x4] = _mm_mul_ps(temp0_40, temp0_29)
    float temp0_43[0x4] = _mm_add_ps(temp0_38, temp0_28)
    float temp0_45[0x4] = _mm_add_ps(_mm_sub_ps(temp0_42, temp0_41), temp0_43)
    var_138.d = temp0_45[0]
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x55)
    float var_130 = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)[0]
    var_138:4.d = temp0_46[0]

int128_t* var_168
var_168.b = *(arg1 + 0x15c)
float var_108[0x4]
sub_141a80960(&var_108, &var_b8, r8_1, &var_128, var_168.b, &var_138, (*(arg1 + 0x170))[0])
float zmm3_1[0x4] = var_b8
float zmm2_1[0x4] = var_108
float temp0_50[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b), _mm_shuffle_ps(zmm2_1, zmm2_1, 0))
var_f8 = rbx
int64_t rbx_1 = sx.q(arg3[1].d)
float temp0_51[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
float temp0_52[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
float temp0_53[0x4] = __mulps_xmmps_memps(temp0_50, data_143f2b850)
int32_t rax_16 = (rbx_1 + 1).d
float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm3_1)
arg3[1].d = rax_16
float temp0_55[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
float temp0_56[0x4] = _mm_add_ps(temp0_53, temp0_54)
float temp0_58[0x4] = _mm_mul_ps(temp0_51, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
float temp0_60[0x4] = _mm_mul_ps(temp0_55, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
float temp0_61[0x4] = __mulps_xmmps_memps(temp0_58, data_143f2b840)
float temp0_62[0x4] = __mulps_xmmps_memps(temp0_60, data_143f2b830)
float temp0_64[0x4] = _mm_add_ps(_mm_add_ps(temp0_56, temp0_61), temp0_62)
var_b8 = temp0_64

if (rax_16 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

int64_t result = *arg3
float (* rcx_10)[0x4] = rbx_1 << 6
*(rcx_10 + result) = var_f8.o
*(rcx_10 + result + 0x10) = temp0_64
*(rcx_10 + result + 0x20) = zmm1
*(rcx_10 + result + 0x30) = zmm0
__security_check_cookie(rax_1 ^ &var_188)
return result
