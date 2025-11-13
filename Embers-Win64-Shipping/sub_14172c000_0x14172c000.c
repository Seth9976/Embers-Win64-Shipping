// 函数: sub_14172c000
// 地址: 0x14172c000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = *arg2
int128_t zmm3 = *(arg2 + 4)
int128_t zmm4 = *(arg2 + 8)
int64_t* rax = *arg1
float var_d8 = (zmm2 ^ 0x80000000).d
void* rcx = *rax
int32_t var_d4 = (zmm3 ^ 0x80000000).d
int32_t var_d0 = (zmm4 ^ 0x80000000).d
int128_t zmm15 = *(rcx + 0x28)
int128_t zmm13 = *(rcx + 0x2c)
int128_t zmm14 = *(rcx + 0x30)
void* rax_1 = *(rcx + 0x10)
int128_t zmm1
zmm1.d = zmm15.d f* zmm2.d
zmm2.d = zmm13.d f* zmm3.d
zmm3.d = zmm14.d f* zmm4.d
int128_t zmm6

if (zmm1.d f>= 0f)
    zmm6 = *(rax_1 + 0x1c)
else
    zmm6 = *(rax_1 + 0x10)

int128_t zmm0

if (zmm2.d f>= 0f)
    zmm0 = *(rax_1 + 0x20)
else
    zmm0 = *(rax_1 + 0x14)

if (zmm3.d f>= 0f)
    zmm4 = *(rax_1 + 0x24)
else
    zmm4 = *(rax_1 + 0x18)

zmm0.d = zmm0.d f* zmm13.d
int128_t zmm8
zmm8.d = zmm14.d f* zmm4.d
zmm6.d = zmm6.d f* zmm15.d
int32_t var_e4 = zmm0.d
int128_t zmm9

if (zmm1.d f<= -0f)
    zmm9 = *(rax_1 + 0x1c)
else
    zmm9 = *(rax_1 + 0x10)

if (zmm2.d f<= -0f)
    zmm2 = *(rax_1 + 0x20)
else
    zmm2 = *(rax_1 + 0x14)

if (zmm3.d f<= -0f)
    zmm0 = *(rax_1 + 0x24)
else
    zmm0 = *(rax_1 + 0x18)

zmm13.d = zmm13.d f* zmm2.d
zmm14.d = zmm14.d f* zmm0.d
zmm9.d = zmm9.d f* zmm15.d
int32_t var_f4 = zmm13.d
float var_c8
int64_t* rax_2
int512_t zmm15_1
rax_2, zmm15_1 = sub_14170a0b0(arg1[1], &var_c8, &var_d8)
zmm15_1.o = zx.o(*rax_2)
float rbp = rax_2[1].d
float* rax_3
float zmm6_1
float zmm7_1
float zmm8_1
float zmm9_1
float zmm10_1
float zmm11_1
float zmm12_1
float zmm13_1
float zmm14_1
uint128_t zmm15_2
rax_3, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_2 =
    sub_14170a0b0(arg1[1], &var_d8, arg2)
int64_t* rbx = arg1[2]
uint128_t zmm1_1 = zx.o(*rax_3)
float r14 = rax_3[2]
zmm6_1 = (zmm6_1 f- zmm15_2.d) f* *arg2
zmm8_1 = (zmm8_1 - rbp) f* *(arg2 + 8)
zmm13_1 = zmm13_1 f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
zmm7_1 = (zmm7_1 f- _mm_shuffle_ps(zmm15_2, zmm15_2, 0x55).d) f* *(arg2 + 4)
int64_t rdi_1 = sx.q(rbx[1].d)
int32_t rax_4 = (rdi_1 + 1).d
rbx[1].d = rax_4
int64_t result

if ((zmm9_1 f- zmm1_1.d) * zmm10_1 + zmm13_1 * zmm11_1 + (zmm14_1 - r14) * zmm12_1
        < zmm7_1 + zmm6_1 + zmm8_1)
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_8 = *rbx
    int64_t rdx_6 = rdi_1 * 3
    *(rcx_8 + (rdx_6 << 2)) = zmm6.d.q
    *(rcx_8 + (rdx_6 << 2) + 8) = zmm8.d
    int64_t* rbx_2 = arg1[3]
    int64_t rdi_3 = sx.q(rbx_2[1].d)
    int32_t rax_8 = (rdi_3 + 1).d
    rbx_2[1].d = rax_8
    
    if (rax_8 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    result = *rbx_2
    int64_t rcx_10 = rdi_3 * 3
    *(result + (rcx_10 << 2)) = zmm15_2.q
    *(result + (rcx_10 << 2) + 8) = rbp
else
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_4 = *rbx
    int64_t rdx_3 = rdi_1 * 3
    *(rcx_4 + (rdx_3 << 2)) = zmm9.d.q
    *(rcx_4 + (rdx_3 << 2) + 8) = zmm14.d
    int64_t* rbx_1 = arg1[3]
    int64_t rdi_2 = sx.q(rbx_1[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbx_1[1].d = rax_6
    
    if (rax_6 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    result = *rbx_1
    int64_t rcx_6 = rdi_2 * 3
    *(result + (rcx_6 << 2)) = zmm1_1.q
    *(result + (rcx_6 << 2) + 8) = r14

return result
