// 函数: sub_141723040
// 地址: 0x141723040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg2 + 4) ^ 0x80000000
int128_t zmm8 = *(arg2 + 8) ^ 0x80000000
int64_t* rax = *arg1
float var_a8 = (*arg2 ^ 0x80000000).d
int32_t var_a4 = zmm7.d
int32_t var_a0 = zmm8.d
void* rcx = *rax
void* rax_1 = *(rcx + 0x10)
int128_t zmm10
zmm10.d = (*(rax_1 + 0x10)).d f* *(rcx + 0x28)
int128_t zmm11
zmm11.d = (*(rax_1 + 0x14)).d f* *(rcx + 0x2c)
int128_t zmm9
zmm9.d = (*(rax_1 + 0x18)).d f* *(rcx + 0x30)
int32_t var_b4 = zmm11.d
int32_t var_c4 = zmm11.d
float var_98
float* rax_2
int512_t zmm15
rax_2, zmm15 = sub_14170b7f0(arg1[1], &var_98, &var_a8)
zmm15.o = zx.o(*rax_2)
int32_t rbp = rax_2[2]
float* rax_3
float zmm6_1
float zmm7_1
int32_t zmm8_1
uint128_t zmm9_1
float zmm10_1
float zmm11_1
uint128_t zmm15_1
rax_3, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm15_1 =
    sub_14170b7f0(arg1[1], &var_a8, arg2)
int64_t* rbx = arg1[2]
float zmm2 = zmm10_1
uint128_t zmm3 = zx.o(*rax_3)
int32_t r14 = rax_3[2]
zmm10_1 = (zmm10_1 f- zmm15_1.d) f* *arg2
uint128_t zmm0
zmm0.d = zmm9_1.d f- r14
zmm9_1.d = zmm9_1.d f- rbp
float zmm1 = (zmm11_1 f- _mm_shuffle_ps(zmm3, zmm3, 0x55).d) * zmm7_1
zmm0.d = zmm0.d f* zmm8_1
zmm9_1.d = zmm9_1.d f* *(arg2 + 8)
zmm11_1 = (zmm11_1 f- _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55).d) f* *(arg2 + 4)
int64_t rdi_1 = sx.q(rbx[1].d)
int32_t rax_4 = (rdi_1 + 1).d
rbx[1].d = rax_4
int64_t result

if ((zmm2 f- zmm3.d) * zmm6_1 + zmm1 f+ zmm0.d < zmm11_1 + zmm10_1 f+ zmm9_1.d)
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_8 = *rbx
    int64_t rdx_6 = rdi_1 * 3
    *(rcx_8 + (rdx_6 << 2)) = zmm10.d.q
    *(rcx_8 + (rdx_6 << 2) + 8) = zmm9.d
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_3 = sx.q(rbx_2[1].d)
    int32_t rax_8 = (rdi_3 + 1).d
    rbx_2[1].d = rax_8
    
    if (rax_8 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_10 = rdi_3 * 3
    *(result + (rcx_10 << 2)) = zmm15_1.q
    *(result + (rcx_10 << 2) + 8) = rbp
else
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_4 = *rbx
    int64_t rdx_3 = rdi_1 * 3
    *(rcx_4 + (rdx_3 << 2)) = zmm10.d.q
    *(rcx_4 + (rdx_3 << 2) + 8) = zmm9.d
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_1[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbx_1[1].d = rax_6
    
    if (rax_6 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_6 = rdi_2 * 3
    *(result + (rcx_6 << 2)) = zmm3.q
    *(result + (rcx_6 << 2) + 8) = r14

return result
