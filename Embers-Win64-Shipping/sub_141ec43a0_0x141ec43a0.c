// 函数: sub_141ec43a0
// 地址: 0x141ec43a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return arg2

int32_t rax = *(arg2 + 0xc)
int32_t rdi = 0
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
    return arg2

EnterCriticalSection(arg1 + 0x160)
int32_t arg_10

if (arg2 != *(arg1 + 0x188))
    *(arg1 + 0x188) = arg2
    sub_140865c40(arg1 + 0x110, &arg_10, arg2)
    int64_t rax_10 = sx.q(arg_10)
    void* const rcx_6
    
    if (rax_10.d == 0xffffffff)
        rcx_6 = nullptr
    else
        rcx_6 = *(arg1 + 0x110) + rax_10 * 0x18
    
    int64_t* rax_12 = rcx_6 + 8
    
    if (rcx_6 == 0)
        rax_12 = nullptr
    
    if (rax_12 == 0)
        *(arg1 + 0x190) = 0
    else
        *(arg1 + 0x190) = *rax_12

void* r14 = *(arg1 + 0x190)

if (arg1 != -0x160)
    LeaveCriticalSection(arg1 + 0x160)

if (r14 != 0)
    return r14

int64_t rdx_5 = *(arg2 + 0x20)

if (rdx_5 == *(arg1 + 0xa8))
    arg_10.q = 0
    void* i_1 = sub_140998b80(arg2, sub_140cde0b0(), 0)
    void* rsi_1 = *(arg1 + 0xb0)
    int64_t rbp_1 = sx.q(*(rsi_1 + 0x30))
    int32_t rax_15 = (rbp_1 + 1).d
    *(rsi_1 + 0x30) = rax_15
    
    if (rax_15 s> *(rsi_1 + 0x34))
        sub_1405a4f90(rsi_1 + 0x28)
    
    void* i = i_1
    void** rcx_12 = (rbp_1 << 4) + *(rsi_1 + 0x28)
    *rcx_12 = i_1
    rcx_12[1].d = 0
    
    if (i_1 == 0)
        return i
    
    do
        rdi += 1
        rcx_12[1].d = rdi
        i = *(i + 0x20)
    while (i != 0)
    
    return i_1

void* rax_16 = sub_141ec43a0(arg1, rdx_5)

if (rax_16 == 0)
    return arg2

void* rax_17 = sub_140d3b5d0(rax_16, *(arg2 + 0x10), *(arg2 + 0x18))
void* r14_1 = rax_17

if (rax_17 == 0)
    arg_10.q = 0
    r14_1 = sub_140998b80(arg2, rax_16, 0)

EnterCriticalSection(arg1 + 0x160)
*(arg1 + 0x188) = arg2
*(arg1 + 0x190) = r14_1

if (r14_1 != 0)
    void** var_38 = arg1 + 0x188
    void* var_30_1 = arg1 + 0x190
    sub_140bbe6a0(arg1 + 0x110, &arg_10, &var_38, nullptr)
label_141ec45e4:
    
    if (arg1 != -0x160)
        LeaveCriticalSection(arg1 + 0x160)
else
    EnterCriticalSection(arg1 + 0x160)
    *(arg1 + 0x188) = arg2
    *(arg1 + 0x190) = 0
    sub_140868c90(arg1 + 0x110, arg2)
    
    if (arg1 != -0x160)
        LeaveCriticalSection(arg1 + 0x160)
        goto label_141ec45e4

return r14_1
