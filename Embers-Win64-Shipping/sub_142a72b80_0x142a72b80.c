// 函数: sub_142a72b80
// 地址: 0x142a72b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

int32_t rbp_1
int32_t rsi_1
int32_t rdi_1
int32_t r14_1

if (arg2 s< *(arg1 + 0x270))
    uint128_t zmm0
    zmm0.q = _mm_cvtepi32_pd(zx.q(arg2 - 0x1a4450)).q f* 4.0
    zmm0.q = zmm0.q f+ 1464.0
    int32_t arg_18
    int32_t rax_1 = sub_142acca60(zmm0, 0x5b5, &arg_18)
    rdi_1 = rax_1
    int32_t rcx_1 = rdi_1 * 0x16d
    int32_t rdx = 0
    int32_t r8_2 = rdi_1 & 3
    int32_t rsi_5 = arg2 - 0x1a4450 - rcx_1 - sub_142acca40(rax_1 - 1, 4) + 0x16d
    
    if (rsi_5 s>= sbb.d(rcx_1, rcx_1, r8_2 != 0) + 0x3c)
        rdx.b = r8_2 != 0
        rdx += 1
    
    rbp_1 = ((zx.q((rdx + rsi_5) * 3) << 2) + 6).d s/ 0x16f
    int64_t rax_8 = sx.q(rbp_1)
    int16_t rdx_2
    
    if (r8_2 != 0)
        rdx_2 = *((rax_8 << 1) + 0x1436405e0)
    else
        rdx_2 = *((rax_8 << 1) + 0x1436405f8)
    
    r14_1 = rsi_5 - sx.d(rdx_2) + 1
    rsi_1 = rsi_5 + 1
else
    rbp_1 = *(arg1 + 0x11c)
    r14_1 = *(arg1 + 0x124)
    rsi_1 = *(arg1 + 0x120)
    rdi_1 = *(arg1 + 0x118)

if (rdi_1 == *(arg1 + 0x280) && arg2 s>= *(arg1 + 0x270))
    rsi_1 += sub_142a72b40(rdi_1)

*(arg1 + 0x14) = rbp_1
int32_t rcx_7 = 1
*(arg1 + 0x88) = 1
*(arg1 + 0x6a) = 1
*(arg1 + 0x20) = r14_1
*(arg1 + 0x94) = 1
*(arg1 + 0x6d) = 0x101
*(arg1 + 0x24) = rsi_1
*(arg1 + 0x98) = 1
*(arg1 + 0x58) = rdi_1
*(arg1 + 0xcc) = 1
*(arg1 + 0x7b) = 1

if (rdi_1 s< 1)
    rcx_7 = 0
    rdi_1 = 1 - rdi_1

*(arg1 + 0xc) = rcx_7
*(arg1 + 0x80) = 1
*(arg1 + 0x68) = 0x101
*(arg1 + 0x10) = rdi_1
*(arg1 + 0x84) = 1
