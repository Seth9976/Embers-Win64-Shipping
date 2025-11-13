// 函数: sub_14171e770
// 地址: 0x14171e770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
float zmm12[0x4] = *(arg2 + 4)
float zmm13[0x4] = *arg2
float zmm9[0x4] = zmm12 ^ 0x80000000
float zmm14[0x4] = *(arg2 + 8)
float zmm10[0x4] = zmm13 ^ 0x80000000
float zmm11[0x4] = zmm14 ^ 0x80000000
float var_c8
sub_14170ea00(rcx, &var_c8, arg2)
int32_t* rdx_1 = *rcx
zmm10[0] = zmm10[0] f* *rdx_1
zmm11[0] = zmm11[0] f* rdx_1[2]
zmm9[0] = zmm9[0] f* rdx_1[1]
zmm9[0] = zmm9[0] f* rdx_1[4]
zmm9[0] = zmm9[0] f* rdx_1[7]
zmm9[0] = zmm9[0] + zmm10[0]
zmm10[0] = zmm10[0] f* rdx_1[3]
zmm9[0] = zmm9[0] + zmm11[0]
zmm11[0] = zmm11[0] f* rdx_1[5]
zmm9[0] = zmm9[0] + zmm10[0]
zmm10[0] = zmm10[0] f* rdx_1[6]
zmm9[0] = zmm9[0] + zmm11[0]
zmm11[0] = zmm11[0] f* rdx_1[8]
zmm9[0] = zmm9[0] + zmm10[0]
bool cond:0 = zmm9[0] < zmm9[0]
zmm9[0] = zmm9[0] + zmm11[0]
int32_t rdi
uint128_t zmm8

if (not(cond:0) && not(zmm9[0] < zmm9[0]))
    zmm8 = zx.o(*rdx_1)
    rdi = rdx_1[2]
else if (zmm9[0] < zmm9[0] || zmm9[0] < zmm9[0])
    zmm8 = zx.o(*(rdx_1 + 0x18))
    rdi = rdx_1[8]
else
    zmm8 = zx.o(*(rdx_1 + 0xc))
    rdi = rdx_1[5]

void* rdx_2 = arg1[1]
float zmm6 = var_c8
int64_t* rbx = arg1[2]
uint64_t var_d8 = zmm8.q
void* rcx_1 = *(rdx_2 + 8)
void* rax = *(rcx_1 + 0x10)
float zmm3[0x4] = *(rax + 0x10)
zmm3[0] = zmm3[0] f* *(rcx_1 + 0x28)
float zmm0[0x4] = *(rax + 0x18)
zmm0[0] = zmm0[0] f* *(rcx_1 + 0x30)
float zmm2[0x4] = *(rax + 0x14)
zmm2[0] = zmm2[0] f* *(rcx_1 + 0x2c)
int128_t* rax_1 = *(rdx_2 + 0x10)
float temp0[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float zmm4[0x4] = *rax_1
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xc9), temp0_4)
float temp0_8[0x4] = _mm_mul_ps(temp0_5, temp0_3)
float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_7)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
int32_t var_c4
zmm3 = var_c4
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_4)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_2)
int32_t var_c0
float zmm5[0x4] = var_c0
float temp0_20[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_13, temp0_3), temp0_15), temp0_16), rax_1[1])
float var_ac = temp0_20[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
zmm6 = zmm6 - temp0_20[0]
zmm5[0] = zmm5[0] - temp0_21[0]
float result_2 = temp0_21[0]
zmm0 = var_d8:4.d
float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
zmm3[0] = zmm3[0] - temp0_22[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
zmm0[0] = zmm0[0] - temp0_23[0]
float var_a8 = temp0_22[0]
float zmm1[0x4] = var_d8.d
float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
zmm1[0] = zmm1[0] - temp0_20[0]
zmm13[0] = zmm13[0] * zmm6
zmm9[0] = zmm9[0] * zmm0[0]
zmm0 = rdi
zmm12[0] = zmm12[0] * zmm3[0]
zmm0[0] = zmm0[0] - temp0_24[0]
zmm14[0] = zmm14[0] * zmm5[0]
zmm12[0] = zmm12[0] + zmm13[0]
zmm10[0] = zmm10[0] * zmm1[0]
zmm0[0] = zmm0[0] * zmm11[0]
zmm9[0] = zmm9[0] + zmm10[0]
float var_b8 = temp0_20[0]
zmm12[0] = zmm12[0] + zmm14[0]
float var_b4 = temp0_23[0]
float result_1 = temp0_24[0]
zmm9[0] = zmm9[0] + zmm0[0]
float result
int64_t* rbx_1
int64_t rdi_1

if (zmm9[0] < zmm12[0])
    int64_t rdi_2 = sx.q(rbx[1].d)
    int32_t rax_5 = (rdi_2 + 1).d
    rbx[1].d = rax_5
    
    if (rax_5 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_6 = *rbx
    int64_t rdx_6 = rdi_2 * 3
    *(rcx_6 + (rdx_6 << 2)) = var_c8.q
    *(rcx_6 + (rdx_6 << 2) + 8) = var_c0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    rbx_1[1].d = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_ac.q)
    result = result_2
else
    int64_t rsi_1 = sx.q(rbx[1].d)
    int32_t rax_2 = (rsi_1 + 1).d
    rbx[1].d = rax_2
    
    if (rax_2 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_3 = *rbx
    int64_t rcx_3 = rsi_1 * 3
    *(rax_3 + (rcx_3 << 2)) = zmm8.q
    *(rax_3 + (rcx_3 << 2) + 8) = rdi
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_4 = (rdi_1 + 1).d
    rbx_1[1].d = rax_4
    
    if (rax_4 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_b8.q)
    result = result_1

int64_t rcx_8 = *rbx_1
int64_t rdx_8 = rdi_1 * 3
*(rcx_8 + (rdx_8 << 2)) = zmm0.q
*(rcx_8 + (rdx_8 << 2) + 8) = result
return result
