// 函数: sub_1412709a0
// 地址: 0x1412709a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int32_t rsi = 0
int64_t r12 = arg2[0xa]
int64_t r13 = arg2[8]
int64_t rcx = arg2[0xc]
int64_t r15 = arg2[6]
int64_t r14 = arg2[4]
int64_t rbp = arg2[2]
int32_t rdx
rdx.b = rbx != 0
*(arg1 + 0x18) = 0
int32_t rax
rax.b = rbp != 0
int32_t rax_1
rax_1.b = r14 != 0
int32_t rax_2
rax_2.b = r15 != 0
int32_t rax_3
rax_3.b = r13 != 0
int32_t rax_4
rax_4.b = r12 != 0
uint64_t result
result.b = rcx != 0
int32_t rdx_6 = rdx + rax + rax_1 + rax_2 + rax_3 + rax_4 + result.d

if (*(arg1 + 0x1c) != rdx_6)
    result = sub_1408098d0(arg1, rdx_6)

if (rbx != 0)
    int64_t rsi_1 = sx.q(*(arg1 + 0x18))
    int32_t rax_5 = (rsi_1 + 1).d
    *(arg1 + 0x18) = rax_5
    
    if (rax_5 s> *(arg1 + 0x1c))
        sub_1408092e0(arg1, rsi_1.d)
    
    void* rax_6 = *(arg1 + 0x10)
    void* rcx_3 = arg1
    
    if (rax_6 != 0)
        rcx_3 = rax_6
    
    *(rcx_3 + (rsi_1 << 3)) = rbx + 0x98
    void* rcx_4 = arg1
    void* rax_7 = *(arg1 + 0x10)
    
    if (rax_7 != 0)
        rcx_4 = rax_7
    
    result = sub_14126c010(rcx_4 + (sx.q(*(arg1 + 0x18) - 1) << 3))
    *(arg1 + 0x70) |= 1
    rsi = result.d

if (rbp != 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0x18))
    int32_t rcx_6 = (rbp_1 + 1).d
    *(arg1 + 0x18) = rcx_6
    
    if (rcx_6 s> *(arg1 + 0x1c))
        sub_1408092e0(arg1, rbp_1.d)
    
    void* rax_11 = *(arg1 + 0x10)
    void* rcx_8 = arg1
    
    if (rax_11 != 0)
        rcx_8 = rax_11
    
    *(rcx_8 + (rbp_1 << 3)) = rbp + 0x98
    void* rcx_9 = arg1
    void* rax_12 = *(arg1 + 0x10)
    
    if (rax_12 != 0)
        rcx_9 = rax_12
    
    result = sub_14126c010(rcx_9 + (sx.q(*(arg1 + 0x18) - 1) << 3))
    rsi += result.d
    *(arg1 + 0x70) |= 2

if (r14 != 0)
    int64_t rbp_2 = sx.q(*(arg1 + 0x18))
    int32_t rax_16 = (rbp_2 + 1).d
    *(arg1 + 0x18) = rax_16
    
    if (rax_16 s> *(arg1 + 0x1c))
        sub_1408092e0(arg1, rbp_2.d)
    
    void* rax_17 = *(arg1 + 0x10)
    void* rcx_12 = arg1
    
    if (rax_17 != 0)
        rcx_12 = rax_17
    
    *(rcx_12 + (rbp_2 << 3)) = r14 + 0x98
    void* rcx_13 = arg1
    void* rax_18 = *(arg1 + 0x10)
    
    if (rax_18 != 0)
        rcx_13 = rax_18
    
    result = sub_14126c010(rcx_13 + (sx.q(*(arg1 + 0x18) - 1) << 3))
    rsi += result.d
    *(arg1 + 0x70) |= 4

if (r15 != 0)
    int64_t rbp_3 = sx.q(*(arg1 + 0x18))
    int32_t rax_22 = (rbp_3 + 1).d
    *(arg1 + 0x18) = rax_22
    
    if (rax_22 s> *(arg1 + 0x1c))
        sub_1408092e0(arg1, rbp_3.d)
    
    void* rax_23 = *(arg1 + 0x10)
    void* rcx_16 = arg1
    
    if (rax_23 != 0)
        rcx_16 = rax_23
    
    *(rcx_16 + (rbp_3 << 3)) = r15 + 0x98
    void* rcx_17 = arg1
    void* rax_24 = *(arg1 + 0x10)
    
    if (rax_24 != 0)
        rcx_17 = rax_24
    
    result = sub_14126c010(rcx_17 + (sx.q(*(arg1 + 0x18) - 1) << 3))
    rsi += result.d
    *(arg1 + 0x70) |= 8

if (r13 != 0)
    int64_t rbp_4 = sx.q(*(arg1 + 0x18))
    int32_t rax_28 = (rbp_4 + 1).d
    *(arg1 + 0x18) = rax_28
    
    if (rax_28 s> *(arg1 + 0x1c))
        sub_1408092e0(arg1, rbp_4.d)
    
    void* rax_29 = *(arg1 + 0x10)
    void* rcx_20 = arg1
    
    if (rax_29 != 0)
        rcx_20 = rax_29
    
    *(rcx_20 + (rbp_4 << 3)) = r13 + 0x98
    void* rcx_21 = arg1
    void* rax_30 = *(arg1 + 0x10)
    
    if (rax_30 != 0)
        rcx_21 = rax_30
    
    result = sub_14126c010(rcx_21 + (sx.q(*(arg1 + 0x18) - 1) << 3))
    rsi += result.d
    *(arg1 + 0x70) |= 0x10

if (r12 != 0)
    int64_t rbp_5 = sx.q(*(arg1 + 0x18))
    int32_t rax_34 = (rbp_5 + 1).d
    *(arg1 + 0x18) = rax_34
    
    if (rax_34 s> *(arg1 + 0x1c))
        sub_1408092e0(arg1, rbp_5.d)
    
    void* rax_35 = *(arg1 + 0x10)
    void* rcx_24 = arg1
    
    if (rax_35 != 0)
        rcx_24 = rax_35
    
    *(rcx_24 + (rbp_5 << 3)) = r12 + 0x98
    void* rcx_25 = arg1
    void* rax_36 = *(arg1 + 0x10)
    
    if (rax_36 != 0)
        rcx_25 = rax_36
    
    result = sub_14126c010(rcx_25 + (sx.q(*(arg1 + 0x18) - 1) << 3))
    rsi += result.d
    *(arg1 + 0x70) |= 0x20

if (rcx != 0)
    int64_t rbp_6 = sx.q(*(arg1 + 0x18))
    int32_t rax_40 = (rbp_6 + 1).d
    *(arg1 + 0x18) = rax_40
    
    if (rax_40 s> *(arg1 + 0x1c))
        sub_1408092e0(arg1, rbp_6.d)
    
    void* rax_41 = *(arg1 + 0x10)
    void* rcx_28 = arg1
    
    if (rax_41 != 0)
        rcx_28 = rax_41
    
    *(rcx_28 + (rbp_6 << 3)) = rcx + 0x98
    void* rcx_29 = arg1
    void* rax_42 = *(arg1 + 0x10)
    
    if (rax_42 != 0)
        rcx_29 = rax_42
    
    rsi += sub_14126c010(rcx_29 + (sx.q(*(arg1 + 0x18) - 1) << 3))
    result = 0x100
    *(arg1 + 0x70) |= 0x100

if (rsi s> 0)
    *(arg1 + 0x72) = rsi.w
    
    if (rsi.w u> 0x50)
        result = j_sub_140a82f30(zx.q(rsi.w))
        *(arg1 + 0x20) = result
        
        if (*(arg1 + 0x72) u> 0x50)
            return memset(result, 0, zx.q(rsi))

return result
