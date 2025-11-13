// 函数: sub_142c40370
// 地址: 0x142c40370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg3)
int128_t* const rcx = nullptr
uint64_t rbx = zx.q(arg2)

if (arg3 == 0xffffffff)
    *arg4 = 0
    *arg5 = 0
    return arg5

int32_t r8

if (arg3 == 0)
    r8 = 0
else
    int64_t rax_3 = (rbx + 4) * 2
    uint64_t rdx = zx.q((r10 - 1).d)
    
    if (rdx.d u< *(arg1 + (rax_3 << 3)))
        r8 = *((rdx << 4) + *(arg1 + (rax_3 << 3) + 8))
    else
        r8 = 0

int64_t rdx_4 = (rbx + 4) * 2
int32_t rdx_5

if (r10.d u>= *(arg1 + (rdx_4 << 3)))
    rdx_5 = *(arg1 + (rbx + 2) * 0x10)
else
    rdx_5 = *((r10 << 4) + *(arg1 + (rdx_4 << 3) + 8))

if (rdx_5 != r8)
    int64_t rax_10 = (rbx + 2) * 2
    
    if (r8 u< *(arg1 + (rax_10 << 3)))
        rcx = *(arg1 + (rax_10 << 3) + 8) + (zx.q(r8) << 3)
    else
        rcx = &data_14369a5d0

*arg4 = rcx
*arg5 = rdx_5 - r8
return arg5
