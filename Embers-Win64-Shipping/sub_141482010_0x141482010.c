// 函数: sub_141482010
// 地址: 0x141482010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x550) * 2
uint64_t r10 = zx.q(*(arg1 + 0x544))
int32_t rdi = arg4
int32_t r8_2 = *(arg1 + 0x54c) + rax_1 + r10.d
uint64_t r9 = zx.q(*(arg1 + 0x540))
int32_t rdx_2 = *(arg1 + 0x548) + rax_1 + r9.d
int32_t rax_2
int64_t rbp
int128_t zmm0

if ((*(arg1 + 0x570) & 0x80) == 0)
    zmm0 = data_14399f5c0
    rbp.b = 0
    rax_2 = 1
else
    zmm0 = data_142d4cc30
    int128_t var_58_1 = zx.o(0)
    rbp.b = 1
    rax_2 = 2

int64_t rcx = *(arg2 + 0x30)
int128_t var_68 = zmm0

if (rdi s>= rax_2)
    rdi = rax_2

void*** rcx_2 = (rcx + 7) & 0xfffffffffffffff8

if (arg5 == 0)
    void* rax_9 = &rcx_2[3]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_2[3]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142f6bbc8
    rcx_2[2].b = rbp.b
    *(rcx_2 + 0x11) = 1
    return &data_142f6bbc8

int128_t zmm8
zmm8.d = float.s(r10)
int128_t zmm6
zmm6.d = float.s(zx.q(r8_2))
int128_t zmm7
zmm7.d = float.s(zx.q(rdx_2))
void* rax_5 = &rcx_2[5]
int128_t zmm9
zmm9.d = float.s(r9)

if (rax_5 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_2[5]

*(arg2 + 0x30) = rax_5
int64_t* rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[3].d = 0
*rcx_2 = &data_142d54998
rcx_2[2].d = zmm9.d
*(rcx_2 + 0x14) = zmm8.d
*(rcx_2 + 0x1c) = zmm7.d
rcx_2[4].d = zmm6.d
*(rcx_2 + 0x24) = 0x3f800000
return sub_14199cb60(arg2, rbp.b, rdi, &var_68, 1, 0x3f800000, 0, 0)
