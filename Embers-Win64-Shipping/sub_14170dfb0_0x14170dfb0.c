// 函数: sub_14170dfb0
// 地址: 0x14170dfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = **arg1
uint128_t zmm5 = *(r8 + 0x20)
uint128_t zmm4 = *(r8 + 0x1c)
float zmm3[0x4] = zmm5
zmm3[0] = zmm3[0] f* arg2[1]
uint128_t zmm0
zmm0.d = zmm4.d f* *arg2
float zmm6[0x4] = *(r8 + 0x24)
zmm6[0] = zmm6[0] f* arg2[2]
zmm3[0] = zmm3[0] f+ zmm0.d
zmm3[0] = zmm3[0] + zmm6[0]
uint64_t var_d8
int32_t var_d0
float zmm1[0x4]
uint128_t zmm2

if (zmm3[0] < 0f)
    var_d8 = *(r8 + 0x10)
    var_d0 = *(r8 + 0x18)
else
    zmm2 = *(r8 + 0x28)
    zmm0.d = zmm4.d f* zmm2.d
    zmm1 = zmm5
    zmm1[0] = zmm1[0] f* zmm2.d
    zmm0.d = zmm0.d f+ *(r8 + 0x10)
    zmm1[0] = zmm1[0] f+ *(r8 + 0x14)
    var_d8.d = zmm0.d
    zmm0.d = zmm6.d f* zmm2.d
    var_d8:4.d = zmm1[0]
    zmm0.d = zmm0.d f+ *(r8 + 0x18)
    var_d0 = zmm0.d

uint64_t var_cc
float var_c4

if ((zmm3 ^ 0x80000000)[0] < 0f)
    var_cc = *(r8 + 0x10)
    var_c4 = *(r8 + 0x18)
else
    zmm0 = *(r8 + 0x28)
    zmm4.d = zmm4.d f* zmm0.d
    zmm5.d = zmm5.d f* zmm0.d
    zmm4.d = zmm4.d f+ *(r8 + 0x10)
    zmm6[0] = zmm6[0] f* zmm0.d
    zmm5.d = zmm5.d f+ *(r8 + 0x14)
    zmm6[0] = zmm6[0] f+ *(r8 + 0x18)
    var_cc.d = zmm4.d
    var_cc:4.d = zmm5.d
    var_c4 = zmm6[0]

void* rcx = arg1[1]
uint128_t zmm13 = zx.o(var_cc)
void* r8_1 = *(rcx + 8)
zmm4 = zx.o(*(r8_1 + 0x10))
int32_t rax_5 = *(r8_1 + 0x18)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
int128_t* rax_6 = *(rcx + 0x10)
zmm5 = _mm_unpacklo_ps(zmm4, rax_5[0].q)
zmm2 = _mm_unpacklo_ps(zmm0, 0)
float zmm11[0x4] = *rax_6
zmm6 = rax_6[1]
int32_t rax_7 = *(r8_1 + 0x18)
zmm5 = _mm_unpacklo_ps(zmm5, zmm2.q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_4)
float temp0_8[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
uint64_t var_e8 = zmm4.q
uint64_t var_f8 = zmm4.q
float temp0_11[0x4] = _mm_sub_ps(temp0_7, zmm0)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
zmm0 = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_8)
float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_10)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_4)
float temp0_18[0x4] = _mm_add_ps(temp0_16, zmm5)
float temp0_19[0x4] = _mm_sub_ps(temp0_17, zmm0)
zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_18)
zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_7[0].q), zmm2.q)
float temp0_25[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_26[0x4] = _mm_add_ps(temp0_22, zmm6)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_8)
float temp0_29[0x4] = _mm_mul_ps(temp0_25, temp0_4)
var_e8.d = temp0_26[0]
float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
float temp0_32[0x4] = _mm_sub_ps(temp0_29, zmm0)
var_e8:4.d = temp0_30[0]
float result_2 = temp0_31[0]
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
zmm0 = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_4)
zmm0 = _mm_mul_ps(zmm0, temp0_8)
float temp0_38[0x4] = _mm_mul_ps(temp0_33, temp0_10)
float temp0_41[0x4] = _mm_add_ps(_mm_sub_ps(temp0_36, zmm0), _mm_add_ps(temp0_38, zmm5))
int64_t* rbx = arg1[2]
float temp0_42[0x4] = _mm_add_ps(temp0_41, zmm6)
zmm0 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
zmm4.d = zmm13.d f- temp0_42[0]
var_f8.d = temp0_42[0]
zmm2 = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
zmm0.d = zmm0.d f- temp0_45[0]
float result_1 = zmm2.d
zmm4.d = zmm4.d f* *arg2
var_f8:4.d = temp0_45[0]
zmm1 = var_d0
zmm0.d = zmm0.d f* arg2[1]
zmm1[0] = zmm1[0] - temp0_31[0]
zmm4.d = zmm4.d f+ zmm0.d
zmm1[0] = zmm1[0] f* arg2[2]
zmm0.d = var_c4.d f- zmm2.d
zmm2.d = var_d8.d.d f- temp0_26[0]
zmm0.d = zmm0.d f* arg2[2]
zmm2.d = zmm2.d f* *arg2
zmm4.d = zmm4.d f+ zmm0.d
zmm0.d = var_d8:4.d.d f- temp0_30[0]
zmm0.d = zmm0.d f* arg2[1]
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1[0]
float result
int64_t* rbx_1
int64_t rdi_1

if ((zmm4 ^ 0x80000000).d f< zmm2.d)
    int64_t rsi_1 = sx.q(rbx[1].d)
    int32_t rax_11 = (rsi_1 + 1).d
    rbx[1].d = rax_11
    
    if (rax_11 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_5 = *rbx
    int64_t rdx_4 = rsi_1 * 3
    *(rcx_5 + (rdx_4 << 2)) = var_d8
    *(rcx_5 + (rdx_4 << 2) + 8) = var_d0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_13 = (rdi_1 + 1).d
    rbx_1[1].d = rax_13
    
    if (rax_13 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_e8)
    result = result_2
else
    int64_t rdi = sx.q(rbx[1].d)
    int32_t rax_8 = (rdi + 1).d
    rbx[1].d = rax_8
    
    if (rax_8 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_2 = *rbx
    int64_t rdx_1 = rdi * 3
    *(rcx_2 + (rdx_1 << 2)) = zmm13.q
    *(rcx_2 + (rdx_1 << 2) + 8) = var_c4
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_10 = (rdi_1 + 1).d
    rbx_1[1].d = rax_10
    
    if (rax_10 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_f8)
    result = result_1

int64_t rcx_7 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_7 + (rdx_6 << 2)) = zmm0.q
*(rcx_7 + (rdx_6 << 2) + 8) = result
return result
