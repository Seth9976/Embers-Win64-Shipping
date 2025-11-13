// 函数: sub_142bfe860
// 地址: 0x142bfe860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
uint64_t rdi = zx.q(*(arg1 + 5))
uint64_t rdx = zx.q(*(arg1 + 4))
uint64_t rcx = zx.q(*(arg1 + 3))
uint64_t rsi = zx.q(*(arg1 + 6))
int128_t* const rdx_1

if ((rcx.d << 0x18) + (rdi.d << 8) + (rdx.d << 0x10) != neg.d(rsi.d))
    rdx_1 = ((((rdx + (rcx << 8)) << 8) + rdi) << 8) + arg4 + rsi
else
    rdx_1 = &data_14369a5d0

int32_t r9 = 0
uint32_t rax_8 = zx.d(*(rdx_1 + 3))
int32_t r8_4 = (zx.d(*(rdx_1 + 1)) << 0x10) + (zx.d(*(rdx_1 + 2)) << 8) + (zx.d(*rdx_1) << 0x18) - 1
int32_t r8_5 = r8_4 + rax_8

if (r8_4 + rax_8 s>= 0)
    do
        uint64_t rax_10 = zx.q((r9 + r8_5) u>> 1)
        uint64_t rdx_7 = zx.q(rax_10.d)
        uint32_t r10_8 = (zx.d(*(rdx_1 + 4 + (rax_10 << 2) + 1)) << 8)
            + (zx.d(*(rdx_1 + 4 + (rax_10 << 2))) << 0x10) + zx.d(*(rdx_1 + 4 + (rdx_7 << 2) + 2))
        
        if (arg2 u< r10_8)
            r8_5 = (rdx_7 - 1).d
        else
            if (arg2 u<= zx.d(*(rdx_1 + 4 + (rdx_7 << 2) + 3)) + r10_8)
                return 2
            
            r9 = (rdx_7 + 1).d
    while (r9 s<= r8_5)

uint64_t r9_1 = zx.q(*(arg1 + 9))
uint64_t rdx_8 = zx.q(*(arg1 + 7))
uint64_t r8_6 = zx.q(*(arg1 + 8))
uint64_t r10_9 = zx.q(*(arg1 + 0xa))
int128_t* const rcx_7

if ((rdx_8.d << 0x18) + (r9_1.d << 8) + (r8_6.d << 0x10) != neg.d(r10_9.d))
    rcx_7 = ((((r8_6 + (rdx_8 << 8)) << 8) + r9_1) << 8) + arg4 + r10_9
else
    rcx_7 = &data_14369a5d0

void* rax_21 = sub_142bfb1a0(rcx_7, &arg_10, &data_14369a5d0)

if (zx.w(*(rax_21 + 3)) * 0x100 == neg.w(zx.w(*(rax_21 + 4))))
    return 0

*arg3 = (zx.d(*(rax_21 + 3)) << 8) + zx.d(*(rax_21 + 4))
return 1
