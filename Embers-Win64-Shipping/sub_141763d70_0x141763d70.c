// 函数: sub_141763d70
// 地址: 0x141763d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t rdi = *arg4
int32_t r13 = *(arg1 + 0x20)
int64_t var_50 = arg3
int64_t var_48 = -1
int32_t result_1

if (rdi != 0)
    result = sub_140865c40(arg1 + 0x38, &result_1, rdi)
    
    if (*result == 0xffffffff)
        result = sub_14177c490(arg1, rdi)

int64_t rdi_1 = arg4[1]
int64_t rsi = rdi_1

if (rdi_1 != 0)
    result = sub_140865c40(arg1 + 0x38, &result_1, rdi_1)
    
    if (*result == 0xffffffff)
        result = sub_14177c490(arg1, rdi_1)
        rsi = arg4[1]

int64_t rbp = *arg4
void* r14

if (rbp == 0)
    r14 = nullptr
else
    sub_140865c40(arg1 + 0x38, &result_1, rbp)
    result = sx.q(result_1)
    
    if (result.d == 0xffffffff)
        r14 = nullptr
    else
        void* rdx_5 = result * 3
        result = *(arg1 + 0x38)
        void* rcx_5 = &result[rdx_5]
        r14 = rcx_5 + 8
        
        if (rcx_5 == 0)
            r14 = nullptr

void* rsi_1

if (rsi == 0)
    rsi_1 = nullptr
else
    sub_140865c40(arg1 + 0x38, &result_1, rsi)
    result = sx.q(result_1)
    void* rcx_7
    
    if (result.d == 0xffffffff)
        rcx_7 = nullptr
    else
        void* rdx_7 = result * 3
        result = *(arg1 + 0x38)
        rcx_7 = &result[rdx_7]
    
    rsi_1 = rcx_7 + 8
    
    if (rcx_7 == 0)
        rsi_1 = nullptr

if (r14 != 0)
    int64_t r14_1 = sx.q(*r14)
    var_48.d = r14_1.d
    *((r14_1 << 5) + *(arg1 + 8) + 0x10) = rbp
    int64_t* rdi_4 = (r14_1 << 5) + *(arg1 + 8)
    int64_t rbp_1 = sx.q(rdi_4[1].d)
    int32_t rax_1 = (rbp_1 + 1).d
    rdi_4[1].d = rax_1
    
    if (rax_1 s> *(rdi_4 + 0xc))
        sub_1405a4cf0(rdi_4)
    
    *(*rdi_4 + (rbp_1 << 2)) = r13
    int64_t rbp_2 = sx.q(*(arg1 + 0xd0))
    int32_t rax_3 = (rbp_2 + 1).d
    *(arg1 + 0xd0) = rax_3
    
    if (rax_3 s> *(arg1 + 0xd4))
        sub_1405a4cf0(arg1 + 0xc8)
    
    *(*(arg1 + 0xc8) + (rbp_2 << 2)) = r14_1.d
    
    if (rsi_1 != 0)
        goto label_141763f3d
    
label_141763fb3:
    int64_t rdi_8 = sx.q(*(arg1 + 0x20))
    int32_t rax_10 = (rdi_8 + 1).d
    *(arg1 + 0x20) = rax_10
    
    if (rax_10 s> *(arg1 + 0x24))
        sub_1405a4df0(arg1 + 0x18)
    
    result = *(arg1 + 0x18)
    int64_t rcx_16 = rdi_8 * 3
    *(result + (rcx_16 << 3)) = var_48.o
    result[rcx_16 + 2] = arg2.o:8.q
else if (rsi_1 != 0)
label_141763f3d:
    int64_t rbp_3 = sx.q(*rsi_1)
    var_48:4.d = rbp_3.d
    *((rbp_3 << 5) + *(arg1 + 8) + 0x10) = arg4[1]
    int64_t* rdi_7 = (rbp_3 << 5) + *(arg1 + 8)
    int64_t rsi_2 = sx.q(rdi_7[1].d)
    int32_t rax_6 = (rsi_2 + 1).d
    rdi_7[1].d = rax_6
    
    if (rax_6 s> *(rdi_7 + 0xc))
        sub_1405a4cf0(rdi_7)
    
    *(*rdi_7 + (rsi_2 << 2)) = r13
    int64_t rsi_3 = sx.q(*(arg1 + 0xd0))
    int32_t rax_8 = (rsi_3 + 1).d
    *(arg1 + 0xd0) = rax_8
    
    if (rax_8 s> *(arg1 + 0xd4))
        sub_1405a4cf0(arg1 + 0xc8)
    
    *(*(arg1 + 0xc8) + (rsi_3 << 2)) = rbp_3.d
    goto label_141763fb3

return result
