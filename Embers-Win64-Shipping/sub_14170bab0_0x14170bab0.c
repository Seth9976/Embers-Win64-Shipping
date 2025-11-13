// 函数: sub_14170bab0
// 地址: 0x14170bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int128_t zmm7 = *(arg2 + 8) ^ 0x80000000
int32_t var_84 = (*(arg2 + 4) ^ 0x80000000).d
int32_t var_88 = (*arg2 ^ 0x80000000).d
int32_t var_80 = zmm7.d
int32_t var_98
sub_14170aa90(rcx, &var_98, arg2)
int32_t var_a8
sub_14170aa90(*arg1, &var_a8, &var_88)
int64_t* rcx_2 = arg1[1]
float var_78
float* rax
int512_t zmm12
rax, zmm12 = sub_1417092b0(rcx_2, &var_78, &var_88)
zmm12.o = zx.o(*rax)
int32_t r14 = rax[2]
float* rax_1
float zmm6_1
int32_t zmm7_1
int32_t zmm8_1
uint128_t zmm12_1
rax_1, zmm6_1, zmm7_1, zmm8_1, zmm12_1 = sub_1417092b0(rcx_2, &var_88, arg2)
int64_t* rbx = arg1[2]
uint128_t zmm13 = zx.o(*rax_1)
int32_t r15 = rax_1[2]
int64_t rdi = sx.q(rbx[1].d)
float var_a4
float zmm2 = var_a4 f- _mm_shuffle_ps(zmm13, zmm13, 0x55).d
uint128_t zmm0
zmm0.d = var_a8.d f- zmm13.d
int32_t rax_2 = (rdi + 1).d
zmm0.d = zmm0.d f* zmm8_1
zmm2 = zmm2 * zmm6_1 f+ zmm0.d
int32_t var_a0
zmm0.d = var_a0.d f- r15
zmm0.d = zmm0.d f* zmm7_1
zmm2 = zmm2 f+ zmm0.d
float var_94
float zmm1 = var_94 f- _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55).d
zmm0.d = var_98.d f- zmm12_1.d
zmm0.d = zmm0.d f* *arg2
zmm1 = zmm1 f* *(arg2 + 4) f+ zmm0.d
int32_t var_90
zmm0.d = var_90.d f- r14
zmm0.d = zmm0.d f* *(arg2 + 8)
rbx[1].d = rax_2
int64_t result

if (zmm2 < zmm1 f+ zmm0.d)
    if (rax_2 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_8 = *rbx
    int64_t rdx_8 = rdi * 3
    *(rcx_8 + (rdx_8 << 2)) = var_98.q
    *(rcx_8 + (rdx_8 << 2) + 8) = var_90
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbx_2[1].d = rax_6
    
    if (rax_6 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_10 = rdi_2 * 3
    *(result + (rcx_10 << 2)) = zmm12_1.q
    *(result + (rcx_10 << 2) + 8) = r14
else
    if (rax_2 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_4 = *rbx
    int64_t rdx_5 = rdi * 3
    *(rcx_4 + (rdx_5 << 2)) = var_a8.q
    *(rcx_4 + (rdx_5 << 2) + 8) = var_a0
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_4 = (rdi_1 + 1).d
    rbx_1[1].d = rax_4
    
    if (rax_4 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_6 = rdi_1 * 3
    *(result + (rcx_6 << 2)) = zmm13.q
    *(result + (rcx_6 << 2) + 8) = r15

return result
