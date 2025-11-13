// 函数: sub_14170f4a0
// 地址: 0x14170f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg2 + 4) ^ 0x80000000
int128_t zmm7 = *(arg2 + 8) ^ 0x80000000
int64_t* rax = *arg1
int32_t var_c8 = (*arg2 ^ 0x80000000).d
int32_t var_c4 = zmm6.d
int32_t var_c0 = zmm7.d
void* rcx = *rax
int32_t r15 = *(rcx + 0x18)
*(rcx + 0x10)
float var_98
float* rax_1
int512_t zmm9
rax_1, zmm9 = sub_141712290(arg1[1], &var_98, &var_c8)
zmm9.o = zx.o(*rax_1)
int32_t rbp = rax_1[2]
float* rax_2
int32_t zmm6_1
int32_t zmm7_1
int32_t zmm8_1
uint128_t zmm9_1
float zmm11_1[0x4]
rax_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm11_1 = sub_141712290(arg1[1], &var_c8, arg2)
int64_t* rdi = arg1[2]
float temp0[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
uint128_t zmm10 = zx.o(*rax_2)
float zmm2 = zmm11_1[0] f- zmm9_1.d
int32_t r14 = rax_2[2]
uint128_t zmm0 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
temp0[0] = temp0[0] f- zmm0.d
zmm2 = zmm2 f* *arg2
zmm0.d = zmm11_1.d f- zmm10.d
temp0[0] = temp0[0] f* zmm6_1
zmm0.d = zmm0.d f* zmm8_1
temp0[0] = temp0[0] f+ zmm0.d
zmm0.d = r15.d f- r14
zmm0.d = zmm0.d f* zmm7_1
temp0[0] = temp0[0] f+ zmm0.d
zmm0 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
temp0_1[0] = temp0_1[0] f- zmm0.d
zmm0.d = r15.d f- rbp
temp0_1[0] = temp0_1[0] f* *(arg2 + 4)
zmm0.d = zmm0.d f* *(arg2 + 8)
int64_t rbx_1 = sx.q(rdi[1].d)
int32_t rax_3 = (rbx_1 + 1).d
rdi[1].d = rax_3
int64_t result

if (temp0[0] < zmm2 + temp0_1[0] f+ zmm0.d)
    if (rax_3 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rax_6 = *rdi
    int64_t rcx_8 = rbx_1 * 3
    *(rax_6 + (rcx_8 << 2)) = zmm11_1.q
    *(rax_6 + (rcx_8 << 2) + 8) = r15
    int64_t* rbx_3 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_3[1].d)
    int32_t rax_7 = (rdi_2 + 1).d
    rbx_3[1].d = rax_7
    
    if (rax_7 s> *(rbx_3 + 0xc))
        sub_14083a7e0(rbx_3)
    
    result = *rbx_3
    int64_t rcx_10 = rdi_2 * 3
    *(result + (rcx_10 << 2)) = zmm9_1.q
    *(result + (rcx_10 << 2) + 8) = rbp
else
    if (rax_3 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rax_4 = *rdi
    int64_t rcx_4 = rbx_1 * 3
    *(rax_4 + (rcx_4 << 2)) = zmm11_1.q
    *(rax_4 + (rcx_4 << 2) + 8) = r15
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_1 = sx.q(rbx_2[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_2[1].d = rax_5
    
    if (rax_5 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_6 = rdi_1 * 3
    *(result + (rcx_6 << 2)) = zmm10.q
    *(result + (rcx_6 << 2) + 8) = r14

return result
