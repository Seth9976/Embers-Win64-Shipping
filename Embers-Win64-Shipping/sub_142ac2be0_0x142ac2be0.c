// 函数: sub_142ac2be0
// 地址: 0x142ac2be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    __builtin_memset(arg2, 0, 0x14)
    return arg2

int32_t rcx = *(arg1 + 0x10)
int64_t r8 = 0
uint64_t rdx_1 = zx.q(rcx) & 0xfffffff
uint32_t rcx_1 = rcx u>> 0x1c
int64_t r10 = 0
uint32_t rbx = 0

if (rcx_1 != 8)
    if (rcx_1 != 9)
        *arg3 = 0x11
        __builtin_memset(arg2, 0, 0x14)
        return arg2
    
    int64_t rcx_3 = *(*(arg1 + 8) + 0x10)
    rbx = zx.d(*(rcx_3 + (rdx_1 << 1)))
    r8 = rcx_3 + (rdx_1 << 1) + 2
else if (rdx_1.d != 0)
    int64_t rcx_4 = *(*(arg1 + 8) + 8)
    rbx = *(rcx_4 + (rdx_1 << 2))
    r10 = rcx_4 + (rdx_1 << 2) + 4

arg2[2].d = rbx
arg2[1] = r10
*arg2 = r8
return arg2
