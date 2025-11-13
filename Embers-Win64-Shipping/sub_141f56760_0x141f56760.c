// 函数: sub_141f56760
// 地址: 0x141f56760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg2, 0)

uint128_t zmm7 = zx.o(0)

if (arg1[0xa].d s> 0)
    zmm7 = *(arg1[9] + sx.q(arg1[0xa].d) * 0x14 - 0x14)

int32_t r14 = 2
uint128_t zmm0
zmm0.d = zmm7.d f* arg3.d
int32_t rax_3 = int.d(zmm0.d)

if (rax_3 s>= 2)
    r14 = rax_3

uint128_t zmm1

if (r14 s> 0)
    zmm0 = _mm_cvtepi32_ps(zx.o(r14))
    int32_t arg_18 = 0
    int128_t zmm8
    zmm8.d = 1f f/ zmm0.d
    
    do
        zmm1.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* zmm8.d
        zmm1.d = zmm1.d f* zmm7.d
        uint128_t zmm0_1
        int512_t zmm6_1
        zmm0_1, zmm6_1 = sub_141f5bc90(&arg1[9], zmm1, &arg_18)
        zmm6_1.o = zmm0_1
        uint64_t var_68[0x2]
        uint64_t* rax_4
        int32_t zmm6_2
        rax_4, zmm6_2, zmm7, zmm8 = sub_141a1d730(arg1, &var_68, zmm0_1, &data_143dbb1f8)
        int64_t rbp_1 = sx.q(arg2[1].d)
        int32_t rcx_4 = (rbp_1 + 1).d
        arg2[1].d = rcx_4
        
        if (rcx_4 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        rdi += 1
        int64_t rcx_8 = (rbp_1 << 4) + *arg2
        *rcx_8 = *rax_4
        int32_t rax_5 = rax_4[1].d
        *(rcx_8 + 0xc) = zmm6_2
        *(rcx_8 + 8) = rax_5
    while (rdi s< r14)

int64_t rax_6 = sx.q(arg1[0xa].d)
int64_t rdi_1 = sx.q(arg2[1].d)
int64_t r15_2 = arg1[9]
int64_t rsi_1 = *arg1
int64_t rbp_2 = sx.q(arg1[1].d) * 0x2c
int32_t rax_8 = (rdi_1 + 1).d
arg2[1].d = rax_8

if (rax_8 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

zmm1 = *(r15_2 + rax_6 * 0x14 - 0x10)
uint64_t* rcx_12 = (rdi_1 << 4) + *arg2
*rcx_12 = *(rsi_1 + rbp_2 - 0x28)
int32_t result = *(rsi_1 + rbp_2 - 0x20)
*(rcx_12 + 0xc) = zmm1.d
rcx_12[1].d = result
return result
