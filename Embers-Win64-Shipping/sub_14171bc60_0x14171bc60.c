// 函数: sub_14171bc60
// 地址: 0x14171bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg2 + 4) ^ 0x80000000
void* rcx_1 = **arg1
int128_t zmm7 = *(arg2 + 8) ^ 0x80000000
int32_t var_88 = (*arg2 ^ 0x80000000).d
int32_t var_84 = zmm6.d
int32_t var_80 = zmm7.d
float var_98
sub_141758e70(rcx_1, &var_98, arg2, zx.o(0))
float var_a8
sub_141758e70(**arg1, &var_a8, &var_88, zx.o(0))
int64_t* rcx_4 = arg1[1]
float var_78
float* rax
int512_t zmm9
rax, zmm9 = sub_1417092b0(rcx_4, &var_78, &var_88)
zmm9.o = zx.o(*rax)
int32_t r14 = rax[2]
float* rax_1
float zmm6_1
int32_t zmm7_1
int32_t zmm8_1
uint128_t zmm9_1
rax_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_1417092b0(rcx_4, &var_88, arg2)
int64_t* rdi = arg1[2]
uint128_t zmm10 = zx.o(*rax_1)
float zmm2 = var_98 f- zmm9_1.d
int32_t r15 = rax_1[2]
float var_a4
float zmm3_2 = var_a4 f- _mm_shuffle_ps(zmm10, zmm10, 0x55).d
zmm2 = zmm2 f* *arg2
uint128_t zmm0
zmm0.d = var_a8.d f- zmm10.d
zmm0.d = zmm0.d f* zmm8_1
zmm3_2 = zmm3_2 * zmm6_1 f+ zmm0.d
int32_t var_a0
zmm0.d = var_a0.d f- r15
zmm0.d = zmm0.d f* zmm7_1
zmm3_2 = zmm3_2 f+ zmm0.d
int32_t var_90
zmm0.d = var_90.d f- r14
float var_94
float zmm1 = (var_94 f- _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55).d) f* *(arg2 + 4)
zmm0.d = zmm0.d f* *(arg2 + 8)
int64_t rbx_1 = sx.q(rdi[1].d)
int32_t rax_2 = (rbx_1 + 1).d
rdi[1].d = rax_2
int64_t result

if (zmm3_2 < zmm2 + zmm1 f+ zmm0.d)
    if (rax_2 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rcx_10 = *rdi
    int64_t rdx_8 = rbx_1 * 3
    *(rcx_10 + (rdx_8 << 2)) = var_98.q
    *(rcx_10 + (rdx_8 << 2) + 8) = var_90
    int64_t* rbx_3 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_3[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbx_3[1].d = rax_6
    
    if (rax_6 s> *(rbx_3 + 0xc))
        sub_14083a7e0(rbx_3)
    
    result = *rbx_3
    int64_t rcx_12 = rdi_2 * 3
    *(result + (rcx_12 << 2)) = zmm9_1.q
    *(result + (rcx_12 << 2) + 8) = r14
else
    if (rax_2 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rcx_6 = *rdi
    int64_t rdx_5 = rbx_1 * 3
    *(rcx_6 + (rdx_5 << 2)) = var_a8.q
    *(rcx_6 + (rdx_5 << 2) + 8) = var_a0
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_1 = sx.q(rbx_2[1].d)
    int32_t rax_4 = (rdi_1 + 1).d
    rbx_2[1].d = rax_4
    
    if (rax_4 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_8 = rdi_1 * 3
    *(result + (rcx_8 << 2)) = zmm10.q
    *(result + (rcx_8 << 2) + 8) = r15

return result
