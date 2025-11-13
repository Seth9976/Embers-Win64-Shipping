// 函数: sub_141709dc0
// 地址: 0x141709dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int128_t zmm7 = *arg2 ^ 0x80000000
int128_t zmm8 = *(arg2 + 4) ^ 0x80000000
int128_t zmm9 = *(arg2 + 8) ^ 0x80000000
int32_t var_98 = zmm7.d
int32_t var_90 = zmm9.d
int32_t var_94 = zmm8.d
int32_t var_a8
sub_14170ea00(rcx, &var_a8, arg2)
float* rdx_1 = *rcx
float zmm3 = zmm8.d * rdx_1[1] + zmm7.d * *rdx_1 + zmm9.d * rdx_1[2]
float zmm2 = zmm8.d * rdx_1[4] + zmm7.d * rdx_1[3] + zmm9.d * rdx_1[5]
float zmm4 = zmm8.d * rdx_1[7] + zmm7.d * rdx_1[6] + zmm9.d * rdx_1[8]
int32_t rdi
int64_t zmm6

if (not(zmm3 < zmm2) && not(zmm3 < zmm4))
    zmm6 = *rdx_1
    rdi = rdx_1[2]
else if (zmm2 < zmm3 || zmm2 < zmm4)
    zmm6 = *(rdx_1 + 0x18)
    rdi = rdx_1[8]
else
    zmm6 = *(rdx_1 + 0xc)
    rdi = rdx_1[5]

float var_88
float* rax
int512_t zmm10
rax, zmm10 = sub_141712290(arg1[1], &var_88, &var_98)
zmm10.o = zx.o(*rax)
int32_t r15 = rax[2]
float* rax_1
int64_t zmm6_1
int32_t zmm7_1
float zmm8_1
int32_t zmm9_1
uint128_t zmm10_1
rax_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_141712290(arg1[1], &var_98, arg2)
int64_t* rbx = arg1[2]
uint128_t zmm11 = zx.o(*rax_1)
int32_t r12 = rax_1[2]
uint128_t zmm0_1
zmm0_1.d = zmm6.d.d f- zmm11.d
zmm0_1.d = zmm0_1.d f* zmm7_1
float zmm2_1 = (zmm6:4.d f- _mm_shuffle_ps(zmm11, zmm11, 0x55).d) * zmm8_1 f+ zmm0_1.d
zmm0_1.d = rdi.d f- r12
zmm0_1.d = zmm0_1.d f* zmm9_1
zmm2_1 = zmm2_1 f+ zmm0_1.d
float var_a4
float zmm1_1 = var_a4 f- _mm_shuffle_ps(zmm10_1, zmm10_1, 0x55).d
zmm0_1.d = var_a8.d f- zmm10_1.d
zmm0_1.d = zmm0_1.d f* *arg2
zmm1_1 = zmm1_1 f* *(arg2 + 4) f+ zmm0_1.d
int32_t var_a0
zmm0_1.d = var_a0.d f- r15
zmm0_1.d = zmm0_1.d f* *(arg2 + 8)
int64_t result

if (zmm2_1 < zmm1_1 f+ zmm0_1.d)
    int64_t rdi_2 = sx.q(rbx[1].d)
    int32_t rax_5 = (rdi_2 + 1).d
    rbx[1].d = rax_5
    
    if (rax_5 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_8 = *rbx
    int64_t rdx_7 = rdi_2 * 3
    *(rcx_8 + (rdx_7 << 2)) = var_a8.q
    *(rcx_8 + (rdx_7 << 2) + 8) = var_a0
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_3 = sx.q(rbx_2[1].d)
    int32_t rax_7 = (rdi_3 + 1).d
    rbx_2[1].d = rax_7
    
    if (rax_7 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_10 = rdi_3 * 3
    *(result + (rcx_10 << 2)) = zmm10_1.q
    *(result + (rcx_10 << 2) + 8) = r15
else
    int64_t rsi_1 = sx.q(rbx[1].d)
    int32_t rax_2 = (rsi_1 + 1).d
    rbx[1].d = rax_2
    
    if (rax_2 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_3 = *rbx
    int64_t rcx_4 = rsi_1 * 3
    *(rax_3 + (rcx_4 << 2)) = zmm6_1
    *(rax_3 + (rcx_4 << 2) + 8) = rdi
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_4 = (rdi_1 + 1).d
    rbx_1[1].d = rax_4
    
    if (rax_4 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_6 = rdi_1 * 3
    *(result + (rcx_6 << 2)) = zmm11.q
    *(result + (rcx_6 << 2) + 8) = r12

return result
