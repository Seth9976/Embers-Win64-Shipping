// 函数: sub_141722190
// 地址: 0x141722190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10 = *(arg2 + 4)
int128_t zmm12 = *arg2
int128_t zmm13 = *(arg2 + 8)
void* rdx = **arg1
float zmm5[0x4] = *(rdx + 0x20)
uint128_t zmm4 = *(rdx + 0x1c)
uint128_t zmm6 = *(rdx + 0x24)
uint128_t zmm3
zmm3.d = zmm5.d f* zmm10.d
float zmm1[0x4] = zmm6
uint128_t zmm0
zmm0.d = zmm4.d f* zmm12.d
zmm1[0] = zmm1[0] f* zmm13.d
zmm3.d = zmm3.d f+ zmm0.d
zmm3.d = zmm3.d f+ zmm1[0]
uint64_t var_a0
int32_t var_98
float zmm2[0x4]

if (zmm3.d f< 0f)
    var_a0 = *(rdx + 0x10)
    var_98 = *(rdx + 0x18)
else
    zmm2 = *(rdx + 0x28)
    zmm0.d = zmm4.d f* zmm2[0]
    zmm5[0] = zmm5[0] * zmm2[0]
    zmm0.d = zmm0.d f+ *(rdx + 0x10)
    zmm5[0] = zmm5[0] f+ *(rdx + 0x14)
    var_a0.d = zmm0.d
    zmm0.d = zmm6.d f* zmm2[0]
    var_a0:4.d = zmm5[0]
    zmm0.d = zmm0.d f+ *(rdx + 0x18)
    var_98 = zmm0.d

uint64_t var_94
int32_t var_8c

if ((zmm3 ^ data_142d3f780).d f< 0f)
    var_94 = *(rdx + 0x10)
    var_8c = *(rdx + 0x18)
else
    zmm0 = *(rdx + 0x28)
    zmm4.d = zmm4.d f* zmm0.d
    zmm5[0] = zmm5[0] f* zmm0.d
    zmm4.d = zmm4.d f+ *(rdx + 0x10)
    zmm6.d = zmm6.d f* zmm0.d
    zmm5[0] = zmm5[0] f+ *(rdx + 0x14)
    zmm6.d = zmm6.d f+ *(rdx + 0x18)
    var_94.d = zmm4.d
    var_94:4.d = zmm5[0]
    var_8c = zmm6.d

void* rdx_1 = arg1[1]
uint128_t zmm9 = zx.o(var_94)
int64_t* rbx = arg1[2]
void* rcx = *(rdx_1 + 8)
void* rax_5 = *(rcx + 0x10)
zmm3.d = (*(rcx + 0x28)).d f* *(rax_5 + 0x10)
zmm0.d = (*(rax_5 + 0x18)).d f* *(rcx + 0x30)
zmm2 = *(rax_5 + 0x14)
zmm2[0] = zmm2[0] f* *(rcx + 0x2c)
float (* rax_6)[0x4] = *(rdx_1 + 0x10)
zmm4 = _mm_unpacklo_ps(zmm3, zmm0.q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
float zmm8[0x4] = *rax_6
zmm4 = _mm_unpacklo_ps(zmm4, temp0_1[0].q)
zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm6)
float temp0_7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
float temp0_8[0x4] = _mm_mul_ps(temp0_4, temp0_7)
float temp0_9[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, zmm0)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
zmm3 = _mm_mul_ps(temp0_13, temp0_7)
zmm0 = _mm_mul_ps(temp0_14, zmm6)
float temp0_17[0x4] = _mm_add_ps(temp0_12, zmm4)
float temp0_18[0x4] = _mm_mul_ps(temp0_13, temp0_7)
zmm5 = var_98
zmm3 = _mm_sub_ps(zmm3, zmm0)
float temp0_21[0x4] = _mm_sub_ps(temp0_18, _mm_mul_ps(temp0_14, zmm6))
zmm3 = _mm_add_ps(zmm3, temp0_17)
float temp0_23[0x4] = _mm_add_ps(temp0_21, temp0_17)
zmm3 = __addps_xmmps_memps(zmm3, rax_6[1])
float temp0_25[0x4] = __addps_xmmps_memps(temp0_23, rax_6[1])
int32_t var_ac = zmm3.d
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm6.d = var_a0.d.d f- zmm3.d
float result_2 = zmm0.d
zmm5[0] = zmm5[0] f- zmm0.d
zmm4 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
int32_t var_a8 = zmm4.d
zmm3.d = var_a0:4.d.d f- zmm4.d
zmm0 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
zmm4.d = zmm9.d f- temp0_25[0]
zmm0.d = zmm0.d f- temp0_29[0]
float temp0_30[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
float var_b8 = temp0_25[0]
float var_b4 = temp0_29[0]
float result_1 = temp0_30[0]
zmm4.d = zmm4.d f* zmm12.d
zmm0.d = zmm0.d f* zmm10.d
zmm4.d = zmm4.d f+ zmm0.d
zmm0.d = var_8c.d f- temp0_30[0]
zmm10.d = zmm10.d f* zmm3.d
zmm0.d = zmm0.d f* zmm13.d
zmm12.d = zmm12.d f* zmm6.d
zmm13.d = zmm13.d f* zmm5[0]
zmm4.d = zmm4.d f+ zmm0.d
zmm10.d = zmm10.d f+ zmm12.d
zmm10.d = zmm10.d f+ zmm13.d
float result
int64_t* rbx_1
int64_t rdi_1

if ((zmm4 ^ data_142d3f780).d f< zmm10.d)
    int64_t rsi_1 = sx.q(rbx[1].d)
    int32_t rax_10 = (rsi_1 + 1).d
    rbx[1].d = rax_10
    
    if (rax_10 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_5 = *rbx
    int64_t rdx_6 = rsi_1 * 3
    *(rcx_5 + (rdx_6 << 2)) = var_a0
    *(rcx_5 + (rdx_6 << 2) + 8) = var_98
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_12 = (rdi_1 + 1).d
    rbx_1[1].d = rax_12
    
    if (rax_12 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_ac.q)
    result = result_2
else
    int64_t rdi = sx.q(rbx[1].d)
    int32_t rax_7 = (rdi + 1).d
    rbx[1].d = rax_7
    
    if (rax_7 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_2 = *rbx
    int64_t rdx_3 = rdi * 3
    *(rcx_2 + (rdx_3 << 2)) = zmm9.q
    *(rcx_2 + (rdx_3 << 2) + 8) = var_8c
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_9 = (rdi_1 + 1).d
    rbx_1[1].d = rax_9
    
    if (rax_9 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_b8.q)
    result = result_1

int64_t rcx_7 = *rbx_1
int64_t rdx_8 = rdi_1 * 3
*(rcx_7 + (rdx_8 << 2)) = zmm0.q
*(rcx_7 + (rdx_8 << 2) + 8) = result
return result
