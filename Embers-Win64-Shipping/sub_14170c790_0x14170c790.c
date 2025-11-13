// 函数: sub_14170c790
// 地址: 0x14170c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *arg2 ^ 0x80000000
void* rcx_1 = **arg1
int128_t zmm14 = *(arg2 + 4) ^ 0x80000000
int128_t zmm15 = *(arg2 + 8) ^ 0x80000000
int32_t var_a0 = zmm15.d
float var_a8 = zmm1.d
int32_t var_a4 = zmm14.d
float var_c8
sub_141758e70(rcx_1, &var_c8, arg2, zx.o(0))
float var_d8
sub_141758e70(**arg1, &var_d8, &var_a8, zx.o(0))
int64_t* rdx_2 = arg1[1]
void* rcx_4 = *rdx_2
void* rax = *(rcx_4 + 0x10)
float zmm3_2[0x4] = *(rcx_4 + 0x28)
float zmm0[0x4] = *(rax + 0x18)
zmm0[0] = zmm0[0] f* *(rcx_4 + 0x30)
float zmm2[0x4] = *(rax + 0x14)
zmm2[0] = zmm2[0] f* *(rcx_4 + 0x2c)
zmm3_2[0] = zmm3_2[0] f* *(rax + 0x10)
int128_t* rax_1 = rdx_2[1]
float temp0[0x4] = _mm_unpacklo_ps(zmm2, 0)
float zmm12[0x4] = *rax_1
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_2, zmm0[0].q), temp0[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(temp0_3, temp0_5)
float temp0_8[0x4] = _mm_mul_ps(temp0_4, temp0_6)
float temp0_9[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_7)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_4)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_2)
float temp0_20[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(temp0_14, _mm_mul_ps(temp0_15, temp0_3)), temp0_16), rax_1[1])
var_a8 = temp0_20[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
float var_a4_1 = temp0_21[0]
int64_t* rdi = arg1[2]
float temp0_22[0x4] = _mm_mul_ps(temp0_4, temp0_6)
float zmm5[0x4] = var_c8
float temp0_23[0x4] = _mm_mul_ps(temp0_3, temp0_5)
zmm5[0] = zmm5[0] - temp0_20[0]
int32_t var_c4
float zmm6[0x4] = var_c4
float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
zmm6[0] = zmm6[0] - temp0_21[0]
int32_t var_c0
float zmm4[0x4] = var_c0
zmm5[0] = zmm5[0] f* *arg2
float temp0_25[0x4] = _mm_sub_ps(temp0_22, temp0_23)
zmm4[0] = zmm4[0] - temp0_24[0]
float result_2 = temp0_24[0]
zmm6[0] = zmm6[0] f* *(arg2 + 4)
zmm3_2 = var_d8
float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_25)
zmm4[0] = zmm4[0] f* *(arg2 + 8)
zmm6[0] = zmm6[0] + zmm5[0]
int64_t rbx_1 = sx.q(rdi[1].d)
float temp0_27[0x4] = _mm_mul_ps(temp0_9, temp0_26)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
zmm6[0] = zmm6[0] + zmm4[0]
float temp0_30[0x4] = _mm_mul_ps(temp0_29, temp0_3)
float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_4)
float temp0_32[0x4] = _mm_add_ps(temp0_27, temp0_2)
int32_t var_d4
zmm0 = var_d4
float temp0_35[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_31, temp0_30), temp0_32), rax_1[1])
int32_t rax_2 = (rbx_1 + 1).d
rdi[1].d = rax_2
zmm3_2[0] = zmm3_2[0] - temp0_35[0]
float var_b8 = temp0_35[0]
float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
zmm0[0] = zmm0[0] - temp0_36[0]
float var_b4 = temp0_36[0]
int32_t var_d0
float zmm1_1[0x4] = var_d0
zmm3_2[0] = zmm3_2[0] f* zmm1.d
float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
zmm0[0] = zmm0[0] f* zmm14.d
zmm1_1[0] = zmm1_1[0] - temp0_37[0]
float result_1 = temp0_37[0]
zmm3_2[0] = zmm3_2[0] + zmm0[0]
zmm1_1[0] = zmm1_1[0] f* zmm15.d
zmm3_2[0] = zmm3_2[0] + zmm1_1[0]
float result
int64_t* rbx_2
int64_t rdi_1

if (zmm3_2[0] < zmm6[0])
    if (rax_2 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rcx_9 = *rdi
    int64_t rdx_7 = rbx_1 * 3
    *(rcx_9 + (rdx_7 << 2)) = var_c8.q
    *(rcx_9 + (rdx_7 << 2) + 8) = var_c0
    rbx_2 = arg1[3]
    rdi_1 = sx.q(rbx_2[1].d)
    int32_t rax_6 = (rdi_1 + 1).d
    rbx_2[1].d = rax_6
    
    if (rax_6 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    zmm0 = zx.o(var_a8.q)
    result = result_2
else
    if (rax_2 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rcx_6 = *rdi
    int64_t rdx_4 = rbx_1 * 3
    *(rcx_6 + (rdx_4 << 2)) = var_d8.q
    *(rcx_6 + (rdx_4 << 2) + 8) = var_d0
    rbx_2 = arg1[3]
    rdi_1 = sx.q(rbx_2[1].d)
    int32_t rax_4 = (rdi_1 + 1).d
    rbx_2[1].d = rax_4
    
    if (rax_4 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    zmm0 = zx.o(var_b8.q)
    result = result_1

int64_t rcx_11 = *rbx_2
int64_t rdx_9 = rdi_1 * 3
*(rcx_11 + (rdx_9 << 2)) = zmm0.q
*(rcx_11 + (rdx_9 << 2) + 8) = result
return result
