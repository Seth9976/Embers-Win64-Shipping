// 函数: sub_1420d3b60
// 地址: 0x1420d3b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = *(arg1 + 0x98) & 8

if (arg2 == neg.d(sbb.d(arg4, arg4, rcx_1 != 0)) - 1)
    int64_t rcx_2 = sx.q(arg3) * 0x2c
    *(rcx_2 + *(arg1 + 0x48) + 0x10) = arg5
    int64_t rax_4 = *(arg1 + 0x48)
    *(rcx_2 + rax_4 + 0x1c) = arg6
    return rax_4

int32_t r9_3 = 1
int32_t rax_5 = 1

if (rcx_1 == 0)
    rax_5 = -1

if (arg2 == rax_5)
    int64_t rcx_3 = sx.q(arg3) * 0x2c
    *(rcx_3 + *(arg1 + 0x48) + 0x14) = arg5
    int64_t rax_8 = *(arg1 + 0x48)
    *(rcx_3 + rax_8 + 0x20) = arg6
    return rax_8

int32_t rdx = 2
int32_t rax_9 = 2

if (rcx_1 == 0)
    rax_9 = -1

if (arg2 == rax_9)
    int64_t rcx_4 = sx.q(arg3) * 0x2c
    *(rcx_4 + *(arg1 + 0x48) + 0x18) = arg5
    int64_t rax_12 = *(arg1 + 0x48)
    *(rcx_4 + rax_12 + 0x24) = arg6
    return rax_12

uint64_t rax_14 = zx.q(*(arg1 + 0x98)) & 0x11
int32_t rbx

if (rax_14.d != 0x10)
    rbx = -1
    rcx_1 = *(arg1 + 0x98) & 8
else if (rcx_1 == 0)
    rbx = 0
else
    rbx = (rax_14 - 0xd).d

if (arg2 == rbx)
    int64_t rcx_6 = sx.q(arg3) * 0x2c
    *(rcx_6 + *(arg1 + 0x60) + 0x10) = arg5
    int64_t rax_17 = *(arg1 + 0x60)
    *(rcx_6 + rax_17 + 0x1c) = arg6
    return rax_17

if (rax_14.d != 0x10)
    r9_3 = -1
else if (rcx_1 != 0)
    r9_3 = 4

if (arg2 == r9_3)
    int64_t rcx_7 = sx.q(arg3) * 0x2c
    *(rcx_7 + *(arg1 + 0x60) + 0x14) = arg5
    int64_t rax_20 = *(arg1 + 0x60)
    *(rcx_7 + rax_20 + 0x20) = arg6
    return rax_20

if (rax_14.d != 0x10)
    rdx = -1
else
    rax_14 = 5
    
    if (rcx_1 != 0)
        rdx = 5

if (arg2 == rdx)
    int64_t rcx_8 = sx.q(arg3) * 0x2c
    *(rcx_8 + *(arg1 + 0x60) + 0x18) = arg5
    rax_14 = *(arg1 + 0x60)
    *(rcx_8 + rax_14 + 0x24) = arg6

return rax_14
