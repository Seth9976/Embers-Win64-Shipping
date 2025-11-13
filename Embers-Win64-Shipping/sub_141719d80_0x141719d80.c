// 函数: sub_141719d80
// 地址: 0x141719d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm9 = *arg2
uint128_t zmm10 = *(arg2 + 4)
float var_c0 = (zmm9 ^ 0x80000000).d
uint128_t zmm11 = *(arg2 + 8)
int32_t var_bc = (zmm10 ^ 0x80000000).d
int32_t var_b8 = (zmm11 ^ 0x80000000).d
void* rcx = **arg1
uint128_t zmm5 = *(rcx + 0x20)
uint128_t zmm4 = *(rcx + 0x1c)
uint128_t zmm6 = *(rcx + 0x24)
uint128_t zmm3
zmm3.d = zmm5.d f* zmm10.d
uint128_t zmm0
zmm0.d = zmm4.d f* zmm9.d
uint128_t zmm1
zmm1.d = zmm6.d f* zmm11.d
zmm3.d = zmm3.d f+ zmm0.d
zmm3.d = zmm3.d f+ zmm1.d
uint64_t var_d8
int32_t var_d0

if (zmm3.d f< 0f)
    var_d8 = *(rcx + 0x10)
    var_d0 = *(rcx + 0x18)
else
    int32_t zmm2 = *(rcx + 0x28)
    zmm0.d = zmm4.d f* zmm2
    zmm1.d = zmm5.d f* zmm2
    zmm0.d = zmm0.d f+ *(rcx + 0x10)
    zmm1.d = zmm1.d f+ *(rcx + 0x14)
    var_d8.d = zmm0.d
    zmm0.d = zmm6.d f* zmm2
    var_d8:4.d = zmm1.d
    zmm0.d = zmm0.d f+ *(rcx + 0x18)
    var_d0 = zmm0.d

uint64_t var_cc
int32_t var_c4

if ((zmm3 ^ 0x80000000).d f< 0f)
    var_cc = *(rcx + 0x10)
    var_c4 = *(rcx + 0x18)
else
    zmm0 = *(rcx + 0x28)
    zmm4.d = zmm4.d f* zmm0.d
    zmm5.d = zmm5.d f* zmm0.d
    zmm4.d = zmm4.d f+ *(rcx + 0x10)
    zmm6.d = zmm6.d f* zmm0.d
    zmm5.d = zmm5.d f+ *(rcx + 0x14)
    zmm6.d = zmm6.d f+ *(rcx + 0x18)
    var_cc.d = zmm4.d
    var_cc:4.d = zmm5.d
    var_c4 = zmm6.d

int64_t* rcx_1 = arg1[1]
float var_a0
float* rax_5
int512_t zmm8
rax_5, zmm8 = sub_141716230(rcx_1, &var_a0, &var_c0)
zmm8.o = zx.o(*rax_5)
int32_t r15 = rax_5[2]
float* rax_6
float zmm6_1[0x4]
int128_t zmm7
uint128_t zmm8_1
int32_t zmm9_1
float zmm10_1
int32_t zmm11_1
rax_6, zmm6_1, zmm7, zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_141716230(rcx_1, &var_c0, arg2)
int64_t* rbx = arg1[2]
float temp0[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
uint128_t zmm12 = zx.o(*rax_6)
int32_t r12 = rax_6[2]
zmm6_1[0] = zmm6_1[0] f- zmm12.d
uint128_t zmm0_1 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
temp0[0] = temp0[0] f- zmm0_1.d
zmm0_1.d = var_c4.d f- r12
zmm6_1[0] = zmm6_1[0] f* zmm9_1
temp0[0] = temp0[0] * zmm10_1
zmm0_1.d = zmm0_1.d f* zmm11_1
temp0[0] = temp0[0] + zmm6_1[0]
temp0[0] = temp0[0] f+ zmm0_1.d
zmm0_1.d = var_d8.d.d f- zmm8_1.d
zmm0_1.d = zmm0_1.d f* zmm9_1
float zmm1_1 = (var_d8:4.d f- _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55).d) * zmm10_1 f+ zmm0_1.d
zmm0_1.d = var_d0.d f- r15
zmm0_1.d = zmm0_1.d f* zmm11_1
int64_t result

if ((temp0 ^ zmm7)[0] < zmm1_1 f+ zmm0_1.d)
    int64_t rsi_1 = sx.q(rbx[1].d)
    int32_t rax_10 = (rsi_1 + 1).d
    rbx[1].d = rax_10
    
    if (rax_10 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_7 = *rbx
    int64_t rdx_6 = rsi_1 * 3
    *(rcx_7 + (rdx_6 << 2)) = var_d8
    *(rcx_7 + (rdx_6 << 2) + 8) = var_d0
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_12 = (rdi_2 + 1).d
    rbx_2[1].d = rax_12
    
    if (rax_12 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_9 = rdi_2 * 3
    *(result + (rcx_9 << 2)) = zmm8_1.q
    *(result + (rcx_9 << 2) + 8) = r15
else
    int64_t rdi = sx.q(rbx[1].d)
    int32_t rax_7 = (rdi + 1).d
    rbx[1].d = rax_7
    
    if (rax_7 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_3 = *rbx
    int64_t rdx_3 = rdi * 3
    *(rcx_3 + (rdx_3 << 2)) = var_cc
    *(rcx_3 + (rdx_3 << 2) + 8) = var_c4
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_9 = (rdi_1 + 1).d
    rbx_1[1].d = rax_9
    
    if (rax_9 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_5 = rdi_1 * 3
    *(result + (rcx_5 << 2)) = zmm12.q
    *(result + (rcx_5 << 2) + 8) = r12

return result
