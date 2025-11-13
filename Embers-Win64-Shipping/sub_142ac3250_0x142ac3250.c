// 函数: sub_142ac3250
// 地址: 0x142ac3250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    __builtin_memset(arg2, 0, 0x24)
    return arg2

int32_t rcx = *(arg1 + 0x10)
int64_t r8 = 0
uint64_t rdx_1 = zx.q(rcx) & 0xfffffff
uint32_t rcx_1 = rcx u>> 0x1c
int64_t r11 = 0
int64_t rbp = 0
int64_t rsi = 0
uint64_t r10 = 0

if (rcx_1 == 2)
    if (rdx_1.d != 0)
        int64_t rcx_6 = *(*(arg1 + 8) + 8)
        uint64_t rcx_7 = zx.q(*(rcx_6 + (rdx_1 << 2)))
        r8 = rcx_6 + (rdx_1 << 2) + 2
        r10 = zx.q(rcx_7.d)
        rsi = r8 + (((zx.q(not.d(rcx_7.d)) & 1) + rcx_7) << 1)
    
    goto label_142ac3335

if (rcx_1 == 4)
    if (rdx_1.d != 0)
        int64_t rcx_5 = *(*(arg1 + 8) + 8)
        r10 = sx.q(*(rcx_5 + (rdx_1 << 2)))
        r11 = rcx_5 + (rdx_1 << 2) + 4
        rsi = r11 + (r10 << 2)
    
    goto label_142ac3335

if (rcx_1 == 5)
    int64_t rcx_4 = *(*(arg1 + 8) + 0x10)
    r10 = zx.q(*(rcx_4 + (rdx_1 << 1)))
    r8 = rcx_4 + (rdx_1 << 1) + 2
    rbp = r8 + (r10 << 1)
label_142ac3335:
    arg2[1] = r11
    arg2[2] = rbp
    arg2[3] = rsi
    arg2[4].d = r10.d
else
    *arg3 = 0x11
    __builtin_memset(&arg2[1], 0, 0x1c)

*arg2 = r8
return arg2
