// 函数: sub_142bff540
// 地址: 0x142bff540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(*(arg1 + 0x14))
uint64_t r8 = zx.q(arg2)

if (arg2 u< r10.d)
    int128_t* rax = *(arg1 + 0x20)
    int128_t* const r9 = &data_14369a5d0
    int128_t* const rcx = &data_14369a5d0
    
    if (rax != 0)
        rcx = rax
    
    int64_t rdx = rcx[1].q
    int128_t* rcx_1 = rdx + (r8 << 2)
    
    if (rcx_1 u>= rdx)
        r9 = rcx_1
    
    return zx.q(sx.d(zx.w(*(r9 + 3)) + zx.w(*(r9 + 2)) * 0x100))

if (r8.d u>= *(arg1 + 0x10))
    return 0

int128_t* rax_4 = *(arg1 + 0x20)
int128_t* const r9_1 = &data_14369a5d0
int128_t* const rcx_2 = &data_14369a5d0

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rdx_3 = rcx_2[1].q
int128_t* rcx_3 = rdx_3 + (r10 << 2)

if (rcx_3 u>= rdx_3)
    r9_1 = rcx_3

uint64_t r8_1 = zx.q(r8.d - r10.d)
return zx.q(sx.d(zx.w(*(r9_1 + (r8_1 << 1) + 1)) + zx.w(*(r9_1 + (r8_1 << 1))) * 0x100))
