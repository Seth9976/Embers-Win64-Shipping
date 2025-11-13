// 函数: sub_141975c30
// 地址: 0x141975c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *arg2
int64_t* rsi = arg1
int32_t r13 = arg4
int32_t arg_20
sub_140865c40(rsi, &arg_20, r15)
int64_t rax = sx.q(arg_20)
void* rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *rsi + rax * 0x18

int64_t* rbx = rcx_1 + 8

if (rcx_1 == 0)
    rbx = nullptr

if (rbx != 0)
    *arg3 = *rbx
else
    int64_t* rdi_1 = arg1
    sub_140865c40(rdi_1, &arg_20, r15)
    int64_t rax_2 = sx.q(arg_20)
    void* const rcx_3
    
    if (rax_2.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = *rdi_1 + rax_2 * 0x18
    
    int64_t* rdi_2 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rdi_2 = nullptr
    
    if (rdi_2 != 0 || ((arg4 u>> 2).b & 1) != 0)
        int32_t rax_4 = sub_1419665c0(arg1, r13, r13 | 2)
        rsi = arg1
        int64_t r14_2 = *arg2
        r13 = rax_4
        sub_140865c40(rsi, &arg_20, r14_2)
        int64_t rcx_6 = sx.q(arg_20)
        void* rdx_6
        
        if (rcx_6.d == 0xffffffff)
            rdx_6 = nullptr
        else
            rdx_6 = *rsi + rcx_6 * 0x18
        
        rbx = rdx_6 + 8
        
        if (rdx_6 == 0)
            rbx = nullptr
        
        if (rbx == 0)
            struct _RTL_SRWLOCK rdi_3 = arg1
            sub_140865c40(rdi_3, &arg_20, r14_2)
            int64_t rax_6 = sx.q(arg_20)
            void* rdi_4
            
            if (rax_6.d != 0xffffffff)
                rdi_4 = *rdi_3 + rax_6 * 0x18
            
            if (rax_6.d == 0xffffffff || rdi_4 == 0)
                rdi_2 = nullptr
            else
                rdi_2 = rdi_4 + 8
            
            goto label_141975d95
        
        *arg3 = *rbx
    else
    label_141975d95:
        
        if (rbx != 0)
            *arg3 = *rbx
        else if (rdi_2 != 0)
            int64_t* var_48 = arg2
            int64_t* var_40_1 = rdi_2
            sub_140bbe6a0(rsi, &arg_20, &var_48, nullptr)
            sub_140868c90(arg1, *arg2)
            rbx = rdi_2
            
            if (rbx != 0)
                *arg3 = *rbx

*arg5 = r13
int32_t* result
result.b = rbx != 0
return result
