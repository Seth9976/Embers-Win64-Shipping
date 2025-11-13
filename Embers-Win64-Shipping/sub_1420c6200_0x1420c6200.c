// 函数: sub_1420c6200
// 地址: 0x1420c6200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_1 = *(arg1 + 0x98) & 8
int64_t rdi = sx.q(arg3)

if (arg2 == neg.d(sbb.d(arg5, arg5, r11_1 != 0)) - 1)
    int64_t rcx = *(arg1 + 0x48)
    int64_t rdx = rdi * 0x2c
    *arg4 = *(rdx + rcx + 0x10)
    *arg6 = *(rdx + rcx + 0x1c)
    return arg6

int32_t r8 = 1
int32_t rax_4 = 1

if (r11_1 == 0)
    rax_4 = -1

if (arg2 == rax_4)
    int64_t rcx_2 = *(arg1 + 0x48)
    int64_t rdx_1 = rdi * 0x2c
    *arg4 = *(rdx_1 + rcx_2 + 0x14)
    *arg6 = *(rdx_1 + rcx_2 + 0x20)
    return arg6

int32_t rcx_4 = 2
int32_t rax_7 = 2

if (r11_1 == 0)
    rax_7 = -1

int32_t* rax_9
int64_t rcx_5

if (arg2 != rax_7)
    rax_9 = zx.q(*(arg1 + 0x98)) & 0x11
    int32_t r10_3
    
    if (rax_9.d != 0x10)
        r10_3 = -1
        r11_1 = *(arg1 + 0x98) & 8
    else if (r11_1 == 0)
        r10_3 = 0
    else
        r10_3 = (rax_9 - 0xd).d
    
    if (arg2 == r10_3)
        int64_t rcx_6 = *(arg1 + 0x60)
        int64_t rdx_2 = rdi * 0x2c
        *arg4 = *(rdx_2 + rcx_6 + 0x10)
        *arg6 = *(rdx_2 + rcx_6 + 0x1c)
        return arg6
    
    if (rax_9.d != 0x10)
        r8 = -1
    else if (r11_1 != 0)
        r8 = 4
    
    if (arg2 == r8)
        int64_t rcx_8 = *(arg1 + 0x60)
        int64_t rdx_3 = rdi * 0x2c
        *arg4 = *(rdx_3 + rcx_8 + 0x14)
        *arg6 = *(rdx_3 + rcx_8 + 0x20)
        return arg6
    
    if (rax_9.d != 0x10)
        rcx_4 = -1
    else
        rax_9 = 5
        
        if (r11_1 != 0)
            rcx_4 = 5
    
    if (arg2 == rcx_4)
        rcx_5 = *(arg1 + 0x60)
        goto label_1420c635d
else
    rcx_5 = *(arg1 + 0x48)
label_1420c635d:
    int64_t rdx_4 = rdi * 0x2c
    *arg4 = *(rdx_4 + rcx_5 + 0x18)
    rax_9 = arg6
    *rax_9 = *(rdx_4 + rcx_5 + 0x24)
return rax_9
