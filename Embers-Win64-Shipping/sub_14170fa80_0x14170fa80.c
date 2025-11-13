// 函数: sub_14170fa80
// 地址: 0x14170fa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
int128_t zmm2 = *(arg2 + 4)
int128_t zmm1 = *(arg2 + 8)
float arg_8 = (zmm3 ^ 0x80000000)[0]
void* rbx = **arg1
int32_t arg_10 = (zmm2 ^ 0x80000000).d
int32_t arg_18 = (zmm1 ^ 0x80000000).d
zmm3[0] = zmm3[0] f* *(rbx + 0x28)
void* rcx = *(rbx + 0x10)
zmm2.d = zmm2.d f* *(rbx + 0x2c)
zmm1.d = zmm1.d f* *(rbx + 0x30)
float var_cc = zmm3[0]
int32_t var_c8 = zmm2.d
int32_t var_c4 = zmm1.d
float var_d8
float zmm6_1
float zmm7_1
float zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_141758e70(rcx, &var_d8, &var_cc, zx.o(0))
int32_t var_d0
int128_t zmm15
zmm15.d = var_d0.d f* *(rbx + 0x30)
void* rbx_1 = **arg1
float var_f8 = var_d8 f* *(rbx + 0x28)
float var_d4
float var_f4 = var_d4 f* *(rbx + 0x2c)
int32_t var_f0 = zmm15.d
void* rcx_1 = *(rbx_1 + 0x10)
float zmm1_1 = zmm7_1 f* *(rbx_1 + 0x2c)
var_cc = zmm8_1 f* *(rbx_1 + 0x28)
float var_c8_1 = zmm1_1
float var_c4_1 = zmm6_1 f* *(rbx_1 + 0x30)
sub_141758e70(rcx_1, &var_d8, &var_cc, zx.o(0))
void* rdx_2 = arg1[1]
void* rcx_2 = *(rdx_2 + 8)
int128_t zmm14
zmm14.d = var_d8.d f* *(rbx_1 + 0x28)
int128_t zmm12
zmm12.d = var_d4.d f* *(rbx_1 + 0x2c)
void* rax_2 = *(rcx_2 + 0x10)
int128_t zmm13
zmm13.d = var_d0.d f* *(rbx_1 + 0x30)
int32_t var_e8 = zmm14.d
float zmm3_2[0x4] = *(rax_2 + 0x10)
float zmm2_1[0x4] = *(rax_2 + 0x14)
uint128_t zmm0_1 = *(rax_2 + 0x18)
zmm3_2[0] = zmm3_2[0] f* *(rcx_2 + 0x28)
zmm2_1[0] = zmm2_1[0] f* *(rcx_2 + 0x2c)
zmm0_1.d = zmm0_1.d f* *(rcx_2 + 0x30)
int32_t var_e4 = zmm12.d
int32_t var_e0 = zmm13.d
float (* rax_3)[0x4] = *(rdx_2 + 0x10)
float temp0[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_2, zmm0_1.q), temp0[0].q)
float zmm10[0x4] = *rax_3
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_4[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xd2)
zmm0_1 = _mm_mul_ps(temp0_3, temp0_4)
float temp0_6[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xc9)
float temp0_7[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
float temp0_8[0x4] = _mm_mul_ps(temp0_3, temp0_4)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_10[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
float temp0_11[0x4] = _mm_mul_ps(temp0_9, temp0_6)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_6)
float temp0_13[0x4] = _mm_sub_ps(temp0_11, zmm0_1)
float temp0_14[0x4] = _mm_sub_ps(temp0_12, temp0_8)
float zmm6_2[0x4] = var_f4
float temp0_15[0x4] = _mm_add_ps(temp0_13, temp0_13)
float temp0_16[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_17[0x4] = _mm_mul_ps(temp0_7, temp0_15)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xd2)
zmm0_1 = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
float temp0_20[0x4] = _mm_mul_ps(temp0_18, temp0_6)
zmm0_1 = _mm_mul_ps(zmm0_1, temp0_4)
float temp0_22[0x4] = _mm_add_ps(temp0_17, temp0_2)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xd2), temp0_6)
float zmm5[0x4] = var_f8
float temp0_25[0x4] = _mm_sub_ps(temp0_20, zmm0_1)
float temp0_26[0x4] = _mm_mul_ps(temp0_10, temp0_16)
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_4)
float temp0_29[0x4] = _mm_add_ps(temp0_25, temp0_22)
float temp0_30[0x4] = _mm_add_ps(temp0_26, temp0_2)
float temp0_31[0x4] = _mm_sub_ps(temp0_24, zmm0_1)
float temp0_32[0x4] = __addps_xmmps_memps(temp0_29, rax_3[1])
float temp0_33[0x4] = _mm_add_ps(temp0_31, temp0_30)
var_cc = temp0_32[0]
float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
zmm5[0] = zmm5[0] - temp0_32[0]
zmm6_2[0] = zmm6_2[0] - temp0_34[0]
float var_c8_2 = temp0_34[0]
float temp0_35[0x4] = __addps_xmmps_memps(temp0_33, rax_3[1])
float temp0_36[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)
zmm5[0] = zmm5[0] f* *arg2
zmm15.d = zmm15.d f- temp0_36[0]
zmm6_2[0] = zmm6_2[0] f* *(arg2 + 4)
zmm14.d = zmm14.d f- temp0_35[0]
float result_2 = temp0_36[0]
zmm15.d = zmm15.d f* *(arg2 + 8)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
zmm6_2[0] = zmm6_2[0] + zmm5[0]
zmm14.d = zmm14.d f* arg_8
zmm12.d = zmm12.d f- temp0_37[0]
zmm0_1 = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
zmm13.d = zmm13.d f- zmm0_1.d
var_d8 = temp0_35[0]
float var_d4_1 = temp0_37[0]
zmm12.d = zmm12.d f* arg_10
float result_1 = zmm0_1.d
zmm13.d = zmm13.d f* arg_18
zmm14.d = zmm14.d f+ zmm12.d
zmm14.d = zmm14.d f+ zmm13.d
int64_t* rbx_2 = arg1[2]
zmm6_2[0] = zmm6_2[0] f+ zmm15.d
int64_t rdi_1 = sx.q(rbx_2[1].d)
int32_t rax_4 = (rdi_1 + 1).d
rbx_2[1].d = rax_4
float result
int64_t* rbx_3
int64_t rdi_2

if (zmm14.d f< zmm6_2[0])
    if (rax_4 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    int64_t rcx_7 = *rbx_2
    int64_t rdx_7 = rdi_1 * 3
    *(rcx_7 + (rdx_7 << 2)) = var_f8.q
    *(rcx_7 + (rdx_7 << 2) + 8) = var_f0
    rbx_3 = arg1[3]
    rdi_2 = sx.q(rbx_3[1].d)
    int32_t rax_8 = (rdi_2 + 1).d
    rbx_3[1].d = rax_8
    
    if (rax_8 s> *(rbx_3 + 0xc))
        sub_14083a7e0(rbx_3)
    
    zmm0_1 = zx.o(var_cc.q)
    result = result_2
else
    if (rax_4 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    int64_t rcx_4 = *rbx_2
    int64_t rdx_4 = rdi_1 * 3
    *(rcx_4 + (rdx_4 << 2)) = var_e8.q
    *(rcx_4 + (rdx_4 << 2) + 8) = var_e0
    rbx_3 = arg1[3]
    rdi_2 = sx.q(rbx_3[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbx_3[1].d = rax_6
    
    if (rax_6 s> *(rbx_3 + 0xc))
        sub_14083a7e0(rbx_3)
    
    zmm0_1 = zx.o(var_d8.q)
    result = result_1

int64_t rcx_9 = *rbx_3
int64_t rdx_9 = rdi_2 * 3
*(rcx_9 + (rdx_9 << 2)) = zmm0_1.q
*(rcx_9 + (rdx_9 << 2) + 8) = result
return result
