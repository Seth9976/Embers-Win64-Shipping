// 函数: sub_142403fc0
// 地址: 0x142403fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x25].b = 0
arg1[0x23].w = 0
int64_t* rcx = *(arg1 + 0x58)
int32_t arg_8
int64_t* rax_1

if (rcx == 0)
    arg_8 = 1
    rax_1 = &arg_8
    arg2 = 1
else
    rax_1 = (*(*rcx + 0x18))(rcx, &arg_8)

int64_t rbx = *rax_1
int64_t rbp = sx.q(arg1[0xc])
arg_8.q = rbx
int32_t rax_2 = (rbp + 1).d
arg1[0xc] = rax_2

if (rax_2 s> arg1[0xd])
    sub_1405c5060(&arg1[0xa])

int64_t rbp_2 = rbp * 0x50
float (* rbp_3)[0x4] = rbp_2 + *(arg1 + 0x28)

if (rbp_2 != neg.q(*(arg1 + 0x28)))
    if (arg1[0x25].b == 0)
        arg1[0x29]
    
    data_142d3f660
    int64_t var_e4_1 = 0
    int64_t var_d0_1 = 0
    int32_t var_bc_1 = 0
    void var_a8
    int128_t* rax_3
    float zmm10_1[0x4]
    int32_t zmm11_1
    rax_3, zmm10_1, zmm11_1 = sub_142402cb0(&var_a8, rbx.d, arg2)
    float var_e8[0x4]
    var_e8[0] = zmm11_1
    float zmm6_1[0x4] = rax_3[1]
    float zmm5_1[0x4] = *rax_3
    float zmm7_1[0x4] = rax_3[2]
    float zmm8_1[0x4] = rax_3[3]
    float zmm0_1[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0x55)
    float zmm1_1[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xaa)
    float zmm9_1[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0)
    float zmm2_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_e8, var_e8, 0xff), zmm8_1)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm6_1)
    zmm1_1 = _mm_mul_ps(zmm1_1, zmm7_1)
    zmm9_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9_1, zmm5_1), zmm0_1), zmm1_1), zmm2_1)
    zmm2_1 = 0:4.o
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
    zmm2_1[0] = zmm11_1
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float zmm4_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm8_1)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm6_1)
    zmm1_1 = _mm_mul_ps(zmm1_1, zmm7_1)
    zmm4_1 = _mm_mul_ps(zmm4_1, zmm5_1)
    *rbp_3 = zmm9_1
    zmm4_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm4_1, zmm0_1), zmm1_1), zmm2_1)
    zmm2_1 = 0.o
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
    zmm2_1[0] = zmm11_1
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
    float zmm3_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm8_1)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm6_1)
    zmm1_1 = _mm_mul_ps(zmm1_1, zmm7_1)
    zmm3_1 = _mm_add_ps(_mm_mul_ps(zmm3_1, zmm5_1), zmm0_1)
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0x55), zmm6_1)
    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa), zmm7_1)
    zmm3_1 = _mm_add_ps(zmm3_1, zmm2_1)
    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0), zmm5_1)
    zmm10_1 = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), zmm8_1)
    zmm2_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm2_1, zmm0_1), zmm1_1), zmm10_1)
    rbp_3[1] = zmm4_1
    rbp_3[2] = zmm3_1
    rbp_3[3] = zmm2_1
    rbp_3[4][0] = sub_140b212b0(rbp_3, 0x40, 0)

*arg1 = 0x3f800000
arg1[0x42] = 0xffffffff
int64_t rbx_1 = sx.q(arg1[8])
int32_t rax_5 = (rbx_1 + 1).d
arg1[8] = rax_5

if (rax_5 s> arg1[9])
    sub_1405a4cf0(&arg1[6])

int64_t result = *(arg1 + 0x18)
*(result + (rbx_1 << 2)) = 0
return result
