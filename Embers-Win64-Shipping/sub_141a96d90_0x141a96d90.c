// 函数: sub_141a96d90
// 地址: 0x141a96d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t rdx = *(arg1 + 0x28)
*(arg1 + 0x60) = 0

if (rdx s> *(arg1 + 0x64))
    sub_1405dadb0(arg1 + 0x58, rdx)

int32_t r14 = *(arg1 + 0x28)
int32_t rdi = 0

if (r14 s> 0)
    do
        int64_t rsi_1 = sx.q(*(arg1 + 0x60))
        int32_t rax_1 = (rsi_1 + 1).d
        *(arg1 + 0x60) = rax_1
        
        if (rax_1 s> *(arg1 + 0x64))
            sub_1405a4cf0(arg1 + 0x58)
        
        *(*(arg1 + 0x58) + (rsi_1 << 2)) = rdi
        rdi += 1
    while (rdi s< r14)

int32_t rdx_3 = *(arg1 + 0x60)
int32_t r10 = 0
uint128_t zmm0

if (rdx_3 - 1 s> 0)
    int64_t i = 0
    int32_t r11_1 = rdx_3
    
    do
        int32_t rax_6
        
        if (r11_1 s<= 0)
            rax_6 = 0
        else
            int32_t rax_2 = *(arg1 + 0x6c) * 0xbb38435
            zmm0 = _mm_cvtepi32_ps(zx.o(r11_1))
            *(arg1 + 0x6c) = rax_2 + 0x3619636b
            rax_6 = int.d((((rax_2 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        
        uint64_t rax = zx.q(rax_6 + r10)
        
        if (r10 != rax.d)
            int64_t r8_1 = *(arg1 + 0x58)
            int64_t rdx_2 = sx.q(rax.d)
            int32_t rcx_2 = *(r8_1 + (i << 2))
            *(r8_1 + (i << 2)) = *(r8_1 + (rdx_2 << 2))
            *(r8_1 + (rdx_2 << 2)) = rcx_2
        
        r10 += 1
        r11_1 -= 1
        i += 1
    while (i s< sx.q(rdx_3 - 1))
    
    rdx_3 = *(arg1 + 0x60)

if (rdx_3 s<= 1 || *(*(arg1 + 0x58) + (sx.q(*(arg1 + 0x60)) << 2) - 4) != arg2)
    return 

if (rdx_3 - 1 s> 0)
    int32_t rax_7 = *(arg1 + 0x6c) * 0xbb38435
    zmm0 = _mm_cvtepi32_ps(zx.o(rdx_3 - 1))
    *(arg1 + 0x6c) = rax_7 + 0x3619636b
    rbp = int.d((((rax_7 + 0x3619636b) u>> 9 | 0x3f800000) f- 1f) f* zmm0.d)

if (rbp == rdx_3 - 1)
    return 

int64_t r9_1 = *(arg1 + 0x58)
int64_t r8_2 = sx.q(rdx_3)
int64_t rdx_4 = sx.q(rbp)
int32_t rcx_5 = *(r9_1 + (rdx_4 << 2))
*(r9_1 + (rdx_4 << 2)) = *(r9_1 + (r8_2 << 2) - 4)
*(r9_1 + (r8_2 << 2) - 4) = rcx_5
