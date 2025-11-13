// 函数: sub_1417157a0
// 地址: 0x1417157a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm13 = *arg2
int128_t zmm14 = *(arg2 + 4)
int128_t zmm15 = *(arg2 + 8)
void* rdx = **arg1
void* rax_1 = *(rdx + 0x10)
float zmm11[0x4] = *(rax_1 + 0x10)
float zmm12[0x4] = *(rax_1 + 0x14)
float zmm10[0x4] = *(rax_1 + 0x18)
zmm11[0] = zmm11[0] f* *(rdx + 0x28)
zmm12[0] = zmm12[0] f* *(rdx + 0x2c)
zmm10[0] = zmm10[0] f* *(rdx + 0x30)
int64_t* rdx_1 = arg1[1]
float var_c8 = zmm11[0]
float var_c4 = zmm12[0]
float var_c0 = zmm10[0]
void* rcx = *rdx_1
float var_e8 = zmm11[0]
float var_e4 = zmm12[0]
float var_e0 = zmm10[0]
void* rax_2 = *(rcx + 0x10)
float zmm3[0x4] = *(rax_2 + 0x10)
float zmm0[0x4] = *(rax_2 + 0x18)
zmm0[0] = zmm0[0] f* *(rcx + 0x30)
zmm3[0] = zmm3[0] f* *(rcx + 0x28)
float zmm2[0x4] = *(rax_2 + 0x14)
zmm2[0] = zmm2[0] f* *(rcx + 0x2c)
int128_t* rax_3 = rdx_1[1]
float temp0[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float zmm8[0x4] = *rax_3
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xc9), temp0_3)
float temp0_8[0x4] = _mm_mul_ps(temp0_5, temp0_4)
float temp0_9[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_7)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_4)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_2)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_3)
float temp0_18[0x4] = _mm_mul_ps(temp0_13, temp0_4)
float temp0_19[0x4] = _mm_mul_ps(temp0_14, temp0_3)
float temp0_20[0x4] = _mm_sub_ps(temp0_15, temp0_17)
float temp0_21[0x4] = _mm_sub_ps(temp0_18, temp0_19)
float temp0_23[0x4] = __addps_xmmps_memps(_mm_add_ps(temp0_20, temp0_16), rax_3[1])
float var_b8 = temp0_23[0]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
float var_b4 = temp0_24[0]
float result_2 = temp0_25[0]
int64_t* rbx = arg1[2]
float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_16)
zmm12[0] = zmm12[0] - temp0_24[0]
int64_t rdi = sx.q(rbx[1].d)
zmm11[0] = zmm11[0] - temp0_23[0]
float temp0_27[0x4] = __addps_xmmps_memps(temp0_26, rax_3[1])
zmm10[0] = zmm10[0] - temp0_25[0]
int32_t rax_4 = (rdi + 1).d
zmm11[0] = zmm11[0] f* zmm13.d
rbx[1].d = rax_4
zmm11[0] = zmm11[0] - temp0_27[0]
float var_d8 = temp0_27[0]
zmm10[0] = zmm10[0] f* zmm15.d
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
zmm12[0] = zmm12[0] - temp0_28[0]
float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
zmm10[0] = zmm10[0] - temp0_29[0]
zmm11[0] = zmm11[0] f* zmm13.d
zmm12[0] = zmm12[0] f* zmm14.d
zmm10[0] = zmm10[0] f* zmm15.d
zmm12[0] = zmm12[0] + zmm11[0]
zmm14.d = zmm14.d f* zmm12[0]
float var_d4 = temp0_28[0]
zmm12[0] = zmm12[0] + zmm10[0]
float result_1 = temp0_29[0]
zmm11[0] = zmm11[0] f+ zmm14.d
zmm12 ^= data_142d3f780
zmm11[0] = zmm11[0] + zmm10[0]
float result
int64_t* rbx_1
int64_t rdi_1

if (zmm12[0] < zmm11[0])
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_5 = *rbx
    int64_t rdx_6 = rdi * 3
    *(rcx_5 + (rdx_6 << 2)) = var_c8.q
    *(rcx_5 + (rdx_6 << 2) + 8) = var_c0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    rbx_1[1].d = rax_8
    
    if (rax_8 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_b8.q)
    result = result_2
else
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_2 = *rbx
    int64_t rdx_3 = rdi * 3
    *(rcx_2 + (rdx_3 << 2)) = var_e8.q
    *(rcx_2 + (rdx_3 << 2) + 8) = var_e0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_6 = (rdi_1 + 1).d
    rbx_1[1].d = rax_6
    
    if (rax_6 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_d8.q)
    result = result_1

int64_t rcx_7 = *rbx_1
int64_t rdx_8 = rdi_1 * 3
*(rcx_7 + (rdx_8 << 2)) = zmm0.q
*(rcx_7 + (rdx_8 << 2) + 8) = result
return result
