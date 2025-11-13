// 函数: sub_141728af0
// 地址: 0x141728af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
int128_t zmm2 = *(arg2 + 4)
int128_t zmm1 = *(arg2 + 8)
int128_t zmm13 = zmm1 ^ 0x80000000
float zmm14[0x4] = zmm3 ^ 0x80000000
int32_t var_c4 = (zmm2 ^ 0x80000000).d
void* rbx = **arg1
float var_c8 = zmm14[0]
int32_t var_c0 = zmm13.d
zmm3[0] = zmm3[0] f* *(rbx + 0x28)
void* rcx = *(rbx + 0x10)
zmm2.d = zmm2.d f* *(rbx + 0x2c)
zmm1.d = zmm1.d f* *(rbx + 0x30)
float var_e8 = zmm3[0]
int32_t var_e4 = zmm2.d
int32_t var_e0 = zmm1.d
float var_f8
float zmm11_1 = sub_141758e70(rcx, &var_f8, &var_e8, zx.o(0))
float zmm0 = zmm14[0]
int32_t var_f4
int128_t zmm12
zmm12.d = var_f4.d f* *(rbx + 0x2c)
float var_f0
float zmm9 = var_f0 f* *(rbx + 0x30)
void* rbx_1 = **arg1
var_e8 = var_f8 f* *(rbx + 0x28)
int32_t var_e4_1 = zmm12.d
void* rcx_1 = *(rbx_1 + 0x10)
float zmm1_1 = zmm11_1 f* *(rbx_1 + 0x2c)
var_f8 = zmm0 f* *(rbx_1 + 0x28)
float var_f4_1 = zmm1_1
float var_f0_1 = zmm13.d f* *(rbx_1 + 0x30)
float var_d8
sub_141758e70(rcx_1, &var_d8, &var_f8, zx.o(0))
int64_t* rcx_2 = arg1[1]
float var_d4
float zmm8 = var_d4 f* *(rbx_1 + 0x2c)
float var_d0
float zmm6 = var_d0 f* *(rbx_1 + 0x30)
var_f8 = var_d8 f* *(rbx_1 + 0x28)
float var_f4_2 = zmm8
float* rax_2 = sub_14170bf60(rcx_2, &var_d8, &var_c8)
uint128_t zmm15 = zx.o(*rax_2)
float r14 = rax_2[2]
float* rax_3
float zmm6_1
float zmm7_1
float zmm8_1
float zmm9_1
float zmm10_1
float zmm11_2
float zmm12_1
float zmm13_1
rax_3, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_2, zmm12_1, zmm13_1 =
    sub_14170bf60(arg1[1], &var_c8, arg2)
int64_t* rbx_2 = arg1[2]
uint128_t zmm1_2 = zx.o(*rax_3)
float r15 = rax_3[2]
zmm10_1 = (zmm10_1 f- zmm15.d) f* *arg2
zmm9_1 = (zmm9_1 - r14) f* *(arg2 + 8)
zmm8_1 = zmm8_1 f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
zmm7_1 = (zmm7_1 f- zmm1_2.d) * zmm14[0]
zmm12_1 = (zmm12_1 f- _mm_shuffle_ps(zmm15, zmm15, 0x55).d) f* *(arg2 + 4)
int64_t rdi_1 = sx.q(rbx_2[1].d)
int32_t rax_4 = (rdi_1 + 1).d
rbx_2[1].d = rax_4
int64_t result

if (zmm8_1 * zmm11_2 + zmm7_1 + (zmm6_1 - r15) * zmm13_1 < zmm12_1 + zmm10_1 + zmm9_1)
    if (rax_4 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    int64_t rcx_9 = *rbx_2
    int64_t rdx_8 = rdi_1 * 3
    *(rcx_9 + (rdx_8 << 2)) = var_e8.q
    *(rcx_9 + (rdx_8 << 2) + 8) = zmm9
    int64_t* rbx_4 = arg1[3]
    int64_t rdi_3 = sx.q(rbx_4[1].d)
    int32_t rax_8 = (rdi_3 + 1).d
    rbx_4[1].d = rax_8
    
    if (rax_8 s> *(rbx_4 + 0xc))
        sub_14083a7e0(rbx_4)
    
    result = *rbx_4
    int64_t rcx_11 = rdi_3 * 3
    *(result + (rcx_11 << 2)) = zmm15.q
    *(result + (rcx_11 << 2) + 8) = r14
else
    if (rax_4 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    int64_t rcx_5 = *rbx_2
    int64_t rdx_5 = rdi_1 * 3
    *(rcx_5 + (rdx_5 << 2)) = var_f8.q
    *(rcx_5 + (rdx_5 << 2) + 8) = zmm6
    int64_t* rbx_3 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_3[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbx_3[1].d = rax_6
    
    if (rax_6 s> *(rbx_3 + 0xc))
        sub_14083a7e0(rbx_3)
    
    result = *rbx_3
    int64_t rcx_7 = rdi_2 * 3
    *(result + (rcx_7 << 2)) = zmm1_2.q
    *(result + (rcx_7 << 2) + 8) = r15

return result
