// 函数: sub_142bff050
// 地址: 0x142bff050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2 + 1) << 2
int128_t* rax_1 = rsi + arg1 + 8
int128_t* const rbx = &data_14369a5d0
int128_t* const r10 = &data_14369a5d0
int128_t* const rcx = &data_14369a5d0

if (rax_1 u>= arg1 + 8)
    r10 = rax_1

uint64_t r8 = zx.q(arg2) << 2
int128_t* rax_3 = r8 + arg1 + 8

if (rax_3 u>= arg1 + 8)
    rcx = rax_3

uint32_t result

if ((zx.d(*(r10 + 1)) << 0x10) + (zx.d(*(r10 + 2)) << 8) + (zx.d(*r10) << 0x18) + zx.d(*(r10 + 3))
        u> (zx.d(*(rcx + 1)) << 0x10) + (zx.d(*(rcx + 2)) << 8) + (zx.d(*rcx) << 0x18)
        + zx.d(*(rcx + 3)))
    int128_t* rax_13 = r8 + arg1 + 8
    int128_t* const rcx_6 = &data_14369a5d0
    
    if (rax_13 u>= arg1 + 8)
        rcx_6 = rax_13
    
    uint32_t rdx_10 = (zx.d(*(rcx_6 + 1)) << 0x10) + (zx.d(*(rcx_6 + 2)) << 8)
        + (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*rcx_6) << 0x18)
    int128_t* rax_26 = rsi + arg1 + 8
    *arg3 = rdx_10 + (zx.d(*(arg1 + 4)) << 0x18) + zx.d(*(rcx_6 + 3)) + zx.d(*(arg1 + 7))
    int128_t* const rdx_14 = &data_14369a5d0
    
    if (rax_26 u>= arg1 + 8)
        rdx_14 = rax_26
    
    int128_t* rax_27 = r8 + arg1 + 8
    
    if (rax_27 u>= arg1 + 8)
        rbx = rax_27
    
    uint32_t rcx_12 = (zx.d(*(rdx_14 + 1)) << 0x10) - (zx.d(*(rbx + 1)) << 0x10)
        - (zx.d(*(rbx + 2)) << 8) - (zx.d(*rbx) << 0x18) + (zx.d(*(rdx_14 + 2)) << 8)
    result.b = 1
    *arg4 = rcx_12 + (zx.d(*rdx_14) << 0x18) - zx.d(*(rbx + 3)) + zx.d(*(rdx_14 + 3))
else
    result.b = 0

return result
