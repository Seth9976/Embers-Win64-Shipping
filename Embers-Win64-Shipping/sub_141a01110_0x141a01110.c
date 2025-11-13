// 函数: sub_141a01110
// 地址: 0x141a01110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr

if (*(arg1 + 0x290) != 0)
    data_14399e5e0
    sub_1405a6220(sub_140a242a0(), arg1 + 0x290)
    int64_t* rcx_1 = *(arg1 + 0x290)
    *(arg1 + 0x290) = 0
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

void var_30

if (*sub_140865c40(arg1 + 0x240, &var_30, arg2) != 0xffffffff)
    data_14399e5e0
    int32_t arg_8
    sub_140865c40(arg1 + 0x240, &arg_8, arg2)
    int64_t rax_4 = sx.q(arg_8)
    void* const rbx_2
    
    if (rax_4.d == 0xffffffff)
        rbx_2 = nullptr
    else
        rbx_2 = *(arg1 + 0x240) + rax_4 * 0x18
    
    sub_1405a6220(sub_140a242a0(), rbx_2 + 8)
    sub_141a13170(arg1 + 0x240, arg2)

EnterCriticalSection(arg1 + 0x120)
int32_t arg_18
sub_141a0a300(arg1 + 0x148, &arg_18, arg2)
int64_t rax_7 = sx.q(arg_18)
void* const rdx_9

if (rax_7.d == 0xffffffff)
    rdx_9 = nullptr
else
    rdx_9 = rax_7 * 0x30 + *(arg1 + 0x148)

sub_1419fdd30(arg1 + 0x38, rdx_9 + 8)

if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
    int32_t arg_20
    sub_141a0a300(arg1 + 0x198, &arg_20, arg2)
    int64_t rax_8 = sx.q(arg_20)
    void* const rdx_14
    
    if (rax_8.d == 0xffffffff)
        rdx_14 = nullptr
    else
        rdx_14 = rax_8 * 0x30 + *(arg1 + 0x198)
    
    sub_1419fdd30(arg1 + 0x78, rdx_14 + 8)
    int32_t var_38
    sub_141a0a300(arg1 + 0x1e8, &var_38, arg2)
    int64_t rax_9 = sx.q(var_38)
    
    if (rax_9.d != 0xffffffff)
        rsi = rax_9 * 0x30 + *(arg1 + 0x1e8)
    
    sub_1419fdd30(arg1 + 0x98, rsi + 8)

if (arg1 != -0x120)
    LeaveCriticalSection(arg1 + 0x120)

return sub_141a11af0(arg1, arg2) __tailcall
