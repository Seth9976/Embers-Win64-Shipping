// 函数: sub_141512ea0
// 地址: 0x141512ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1a0)
uint64_t rdx = zx.q(arg3[0x2a9].d)
void* r13 = arg4
int64_t rax = *arg5
int64_t arg_10 = r12
int64_t arg_8 = 0
int32_t var_100 = 0
float zmm0
float zmm7[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
zmm0, zmm7, zmm9, zmm10, zmm11, zmm12 =
    sub_141439ac0(arg1, arg2, r12, arg5, (*(rax + 0x40))(arg5, rdx, &arg_8), arg3, arg3.d + 0x10)
float zmm8[0x4] = 0x3f800000
float zmm6[0x4] = sub_1414f6700(arg1 + 0x130, arg2, r12, r13, zmm0, 1f)
void* rax_2 = *(r13 + 0x20)
uint128_t zmm1 = *(rax_2 + 0x120)
int32_t var_f0 = 0
uint64_t r15 = zx.q(*(arg1 + 0x13a))
int32_t var_f8 = (*(rax_2 + 0x11c)).d
int32_t var_f4 = zmm1.d

if (r15.d u>= 0xc)
    r15 = 0xc

if (r15.d != 0)
    arg_8.d = zx.d(*(arg1 + 0x138))
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg5.d = zx.d(*(arg1 + 0x136))
    int64_t rax_5 = rbx_3 + r15
    
    if (rax_5 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, (r15 + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_5 = rbx_3 + r15
    
    *(arg2 + 0x30) = rax_5
    memcpy(rbx_3, &var_f8, r15.d)
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_8[6]
    
    if (rax_6 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_8[6]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r13 = arg4
    *rax_7 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142d549d8
    rcx_8[4].d = arg5.d
    *(rcx_8 + 0x24) = arg_8.d
    rcx_8[2] = r12
    rcx_8[3] = rbx_3
    rcx_8[5].d = r15.d

if (*(arg1 + 0x140) u> 0)
    void* rcx_12 = *(r13 + 0x20)
    float zmm2_1[0x4] = 0x3f800000
    float var_48_1[0x4] = zmm6
    float var_58_1[0x4] = zmm7
    float var_78_1[0x4] = zmm9
    zmm1 = zx.o(*(rcx_12 + 0x110))
    int32_t rax_11 = *(rcx_12 + 0x118)
    zmm2_1[0] = 1f f/ _mm_shuffle_ps(zmm1, zmm1, 0x55).d
    int64_t var_dc_1 = 0
    int64_t var_d0_1 = 0
    int64_t var_e4_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_bc_1 = 0
    float zmm3_1[0x4] = *(rcx_12 + 0x40)
    zmm6 = *(rcx_12 + 0x50)
    zmm9 = *(rcx_12 + 0x60)
    zmm8[0] = 1f f/ rax_11
    float var_e8[0x4]
    zmm7 = var_e8
    uint128_t zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
    zmm7[0] = zmm8[0]
    zmm8 = var_c8_1.o
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
    float zmm5_1 = 1f f/ zmm1.d
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
    zmm1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
    float var_88_1[0x4] = zmm10
    zmm10 = var_dc_1:4.o
    float temp0_6[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
    temp0_7[0] = zmm2_1[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xe1)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    temp0_8[0] = zmm5_1
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
    zmm1 = _mm_mul_ps(zmm1, temp0_11)
    float temp0_13[0x4] = _mm_mul_ps(temp0_3, temp0_9)
    float temp0_14[0x4] = _mm_mul_ps(temp0_10, temp0_9)
    float var_98_1[0x4] = zmm11
    zmm11 = *(rcx_12 + 0x70)
    float temp0_15[0x4] = _mm_add_ps(temp0_13, zmm0_1)
    float var_a8_1[0x4] = zmm12
    zmm12 = data_142d3f660
    zmm0_1 = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_17[0x4] = _mm_mul_ps(temp0_6, zmm12)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, zmm1)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7)
    var_dc_1:4.o = temp0_9
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), temp0_11)
    float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_17)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_24[0x4] = _mm_add_ps(temp0_14, zmm0_1)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm12)
    var_e8 = zmm7
    float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), zmm7)
    float temp0_28[0x4] = _mm_add_ps(temp0_24, zmm1)
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x55), temp0_9)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xaa), temp0_11)
    float temp0_33[0x4] = _mm_add_ps(temp0_28, temp0_25)
    var_c8_1.o = temp0_11
    float temp0_34[0x4] = _mm_add_ps(temp0_27, zmm0_1)
    var_e8 = temp0_22
    var_dc_1:4.o = temp0_33
    float temp0_35[0x4] = _mm_add_ps(temp0_34, zmm1)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm7)
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x55), temp0_9)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), temp0_11)
    float temp0_43[0x4] = _mm_add_ps(temp0_38, zmm0_1)
    float temp0_44[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
    float temp0_45[0x4] = _mm_mul_ps(temp0_36, zmm12)
    float temp0_46[0x4] = _mm_mul_ps(temp0_44, zmm12)
    float temp0_47[0x4] = _mm_add_ps(temp0_43, zmm1)
    var_c8_1.o = _mm_add_ps(temp0_35, temp0_45)
    float var_b8_1[0x4] = _mm_add_ps(temp0_47, temp0_46)
    sub_1405eb5d0(arg2, &arg_10, arg1 + 0x13c, &var_e8, 0)
    int512_t zmm6_1
    zmm6_1.o = var_48_1

void arg_30
sub_1405d0cd0(arg2, &arg_10, arg1 + 0x142, &arg_30, 0)
return sub_1405eb5d0(arg2, &arg_10, arg1 + 0x148, arg6, 0)
