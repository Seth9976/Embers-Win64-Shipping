// 函数: sub_141528480
// 地址: 0x141528480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2.q = arg3.q f- arg2.q
double zmm5 = (arg7 f- arg6) f/ _mm_cvtepi32_pd(zx.q(arg10))
double zmm4 = (arg5 f- arg4.q) f/ _mm_cvtepi32_pd(zx.q(arg9))
arg2.q = arg2.q f/ _mm_cvtepi32_pd(zx.q(arg8))
int64_t zmm6_1
int64_t zmm7_1
int64_t zmm8_1
int64_t zmm9_1
int64_t zmm10_1
int64_t zmm11_1
zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 =
    sub_141529140(arg1, arg8, arg9, arg10, arg2.q, zmm4, zmm5)
int64_t rax = j_sub_140a82f30(0x100)
*(arg1 + 0x50) = rax
*(arg1 + 0x58) = rax
*(arg1 + 0x60) = rax + 0x100
arg1[0x1a] = 0x20
int64_t rcx = sx.q(arg1[4])
arg1[0x28].b = arg11
*(arg1 + 0xa1) = arg12
*(arg1 + 0xa2) = arg13
int64_t rax_5 = 8 * rcx
*(arg1 + 0x70) = zmm8_1
*(arg1 + 0x78) = zmm9_1
*(arg1 + 0x80) = zmm11_1
*(arg1 + 0x88) = zmm6_1
*(arg1 + 0x90) = zmm7_1
*(arg1 + 0x98) = zmm10_1

if (mulu.dp.q(8, rcx) u>> 0x40 != zx.o(0))
    rax_5 = -1

int64_t rax_6 = j_sub_140a82f30(rax_5)
int64_t rcx_2 = sx.q(arg1[4])
*(arg1 + 0xa8) = rax_6
int64_t rax_7 = 8 * rcx_2

if (mulu.dp.q(8, rcx_2) u>> 0x40 != zx.o(0))
    rax_7 = -1

int64_t rax_8 = j_sub_140a82f30(rax_7)
int64_t rcx_4 = sx.q(arg1[4])
*(arg1 + 0xb0) = rax_8
int64_t rax_9 = 4 * rcx_4

if (mulu.dp.q(4, rcx_4) u>> 0x40 != zx.o(0))
    rax_9 = -1

int64_t rax_10 = j_sub_140a82f30(rax_9)
int64_t rcx_6 = sx.q(arg1[4])
*(arg1 + 0xb8) = rax_10
int64_t rax_11 = 4 * rcx_6

if (mulu.dp.q(4, rcx_6) u>> 0x40 != zx.o(0))
    rax_11 = -1

int32_t i = 0
int32_t rdx_1 = 0
*(arg1 + 0xc0) = j_sub_140a82f30(rax_11)
arg1[0x32] = arg15
int32_t rax_14 = arg1[4]

if (rax_14 s> 0)
    int64_t rcx_8 = 0
    
    do
        rcx_8 += 4
        rdx_1 += 1
        *(rcx_8 + *(arg1 + 0xb8) - 4) = 0
        rax_14 = arg1[4]
    while (rdx_1 s< rax_14)

int64_t r14 = sx.q(arg14)
int32_t rdx_2 = 0

if (rax_14 s> 0)
    int64_t rcx_9 = 0
    
    do
        rcx_9 += 4
        rdx_2 += 1
        *(rcx_9 + *(arg1 + 0xc0) - 4) = r14.d
        rax_14 = arg1[4]
    while (rdx_2 s< rax_14)

int32_t rbp = 0

if (rax_14 s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t rax_17 = 4 * r14
        
        if (mulu.dp.q(4, r14) u>> 0x40 != zx.o(0))
            rax_17 = -1
        
        rsi_1 += 8
        rbp += 1
        *(rsi_1 + *(arg1 + 0xa8) - 8) = j_sub_140a82f30(rax_17)
        rax_14 = arg1[4]
    while (rbp s< rax_14)

if (rax_14 s> 0)
    int64_t rsi_2 = 0
    
    do
        int64_t rcx_12 = sx.q(r14.d * arg1[0x32])
        int64_t rax_21 = 8 * rcx_12
        
        if (mulu.dp.q(8, rcx_12) u>> 0x40 != zx.o(0))
            rax_21 = -1
        
        rsi_2 += 8
        i += 1
        *(rsi_2 + *(arg1 + 0xb0) - 8) = j_sub_140a82f30(rax_21)
    while (i s< arg1[4])

return arg1
