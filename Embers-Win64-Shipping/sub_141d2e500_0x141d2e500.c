// 函数: sub_141d2e500
// 地址: 0x141d2e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3] = arg2
*arg1 = &data_143222530
arg1[1] = 0
arg1[2].d = 1
arg1[4] = 0
arg1[5] = 0
__builtin_memset(&arg1[7], 0, 0x14)
arg1[6] = &data_142fc4250
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xa] = &data_142fc4220
arg1[0xd].b = 0
sub_14172eb30(&arg1[6], &arg1[0xa])
__builtin_memset(&arg1[0xe], 0, 0x28)
*(arg1 + 0xa0) = data_143dbb0c0
*(arg1 + 0xb0) = data_143dbb0d0
uint32_t zmm3[0x4] = data_143f37420
*(arg1 + 0xc0) = data_143dbb0e0
arg1[0x1a] = data_143dbb1f8.q
arg1[0x1b].d = data_143dbb200
*(arg1 + 0xdc) = data_143dbb1f8.q
*(arg1 + 0xe4) = data_143dbb200
arg1[0x1d].w = 0x504
*(arg1 + 0xea) = 0
__builtin_memset(&arg1[0x1e], 0, 0x14)
*(arg1 + 0x104) = 5
arg1[0x21].d = 0xa
arg1[0x22].b = 0
*(arg1 + 0x114) = 0xffffffff
arg1[0x23] = data_143dbb1f8.q
arg1[0x24].d = data_143dbb200
*(arg1 + 0x124) = data_143dbb1f8.q
*(arg1 + 0x12c) = data_143dbb200
*(arg1 + 0x130) = data_143dbb0c0
*(arg1 + 0x140) = data_143dbb0d0
*(arg1 + 0x150) = data_143dbb0e0
arg1[0x2c].d = 0
*(arg1 + 0x16c) = 0
data_143f37410
uint128_t zmm1
zmm1.q = zx.o(0) u>> 0x40
*(arg1 + 0x170) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x180) = zx.o(0)
*(arg1 + 0x190) = _mm_and_ps(data_143f37410, zmm3)
float zmm2[0x4] = data_143f37410
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x1a0) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x1b0) = zx.o(0)
*(arg1 + 0x1c0) = _mm_and_ps(data_143f37410, zmm3)
*(arg1 + 0x164) = 0
arg1[0x3a] = *arg3
arg1[0x3c] = 0

if (arg1[0x3a] != 0)
    void* rax_5 = arg3[2]
    void* rcx_1 = &arg3[4]
    
    if (rax_5 != 0)
        rcx_1 = rax_5
    
    (**rcx_1)(rcx_1)
    zmm3 = data_143f37420

arg1[0x42] = *arg4
arg1[0x44] = 0

if (arg1[0x42] != 0)
    void* rax_8 = arg4[2]
    void* rcx_2 = &arg4[4]
    
    if (rax_8 != 0)
        rcx_2 = rax_8
    
    (**rcx_2)(rcx_2)
    zmm3 = data_143f37420

data_143f37410
*(arg1 + 0x270) = zx.o(0)
zmm1.q = zx.o(0) u>> 0x40
*(arg1 + 0x260) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x280) = _mm_and_ps(data_143f37410, zmm3)
*(arg1 + 0x170) = data_143dbb0c0
*(arg1 + 0x180) = data_143dbb0d0
*(arg1 + 0x190) = data_143dbb0e0
*(arg1 + 0x1a0) = data_143dbb0c0
*(arg1 + 0x1b0) = data_143dbb0d0
*(arg1 + 0x1c0) = data_143dbb0e0

if (*arg3 != 0)
    void* rax_10 = arg3[2]
    void* rcx_3 = &arg3[4]
    
    if (rax_10 != 0)
        rcx_3 = rax_10
    
    (*(*rcx_3 + 0x10))(rcx_3)

if (*arg4 != 0)
    void* rdx_3 = arg4[2]
    void* rcx_4 = &arg4[4]
    
    if (rdx_3 != 0)
        rcx_4 = rdx_3
    
    int64_t rdx_4 = *rcx_4
    (*(rdx_4 + 0x10))(rcx_4, rdx_4)

return arg1
