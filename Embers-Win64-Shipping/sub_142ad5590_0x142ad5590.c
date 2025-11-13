// 函数: sub_142ad5590
// 地址: 0x142ad5590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
int32_t rsi = arg2

if (arg3 u> 0xb)
    uint128_t zmm0 = _mm_cvtepi32_pd(zx.q(rdi))
    int64_t arg_8 = zmm0.q
    double zmm0_1 = sub_142accab0(zmm0, 0x4028000000000000, &arg_8)
    rdi = int.d(fconvert.t(arg_8))
    rsi += int.d(zmm0_1)

int32_t rax_3
int64_t r8_1
rax_3, r8_1 = (*(*arg1 + 0x1c0))(arg1, zx.q(*(arg1 + 0x26c) - 1 + rsi))
r8_1.b = 1
int32_t rax_4 = (*(*arg1 + 0x190))(arg1, _mm_cvtepi32_pd(zx.q(rdi * 0x1d + rax_3)), r8_1)
int32_t r13 = *(arg1 + 0x14)
int32_t r14 = *(arg1 + 0x64)
int32_t rbp = 0
int32_t arg_20 = 0
int32_t rsi_1 = rax_4 + 0x253d8c
sub_142a67f50(arg1, rsi_1)

if (arg_20 s> 0)
    return 0

(*(*arg1 + 0x1b8))(arg1, zx.q(rax_4), zx.q(arg1[0x23].d), zx.q(*(arg1 + 0x11c)), 0)

if (rdi == *(arg1 + 0x14) && arg4 != 0)
    rbp = r14

if (rdi != *(arg1 + 0x14) || rbp != *(arg1 + 0x64))
    int64_t r8_3
    r8_3.b = 1
    rsi_1 = (*(*arg1 + 0x190))(arg1, _mm_cvtepi32_pd(zx.q(rax_4 + 0x19)), r8_3) + 0x253d8c

*(arg1 + 0x14) = r13
arg1[0x11].d = 1
*(arg1 + 0x6a) = 1
*(arg1 + 0x64) = r14
arg1[0x1b].d = 1
*(arg1 + 0x7e) = 1
return zx.q(rsi_1 - 1)
