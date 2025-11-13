// 函数: sub_140d16df0
// 地址: 0x140d16df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rax = (*arg4)(arg4[1], &arg_10)
int64_t* arg_28
int64_t* rcx_1 = arg_28
int32_t rdx_1 = rax
int64_t r12 = *rcx_1
int64_t* rcx_2

if (r12 == 0)
    rcx_2 = arg_28
else
    rcx_2 = rcx_1[1]

if (arg1[1].d != *(arg1 + 0x24))
    int64_t* r15_1 = arg_28
    
    if (r12 != 0)
        r15_1 = rcx_2
    
    int64_t rcx_3 = sx.q(arg1[6].d)
    void* rdx_2 = arg1[5]
    
    if ((rdx_2.b & 1) != 0)
        rdx_2 = (rdx_2 s>> 1) + &arg1[5]
    
    void* rsi_2
    
    for (int32_t i = *(rdx_2 + (((rcx_3 - 1) & sx.q((rcx_3 - 1).d & rdx_1)) << 2)); 
            i != 0xffffffff; i = *(sx.q(*arg3) + rsi_2))
        void* rcx_7 = *arg1
        
        if ((rcx_7.b & 1) != 0)
            rcx_7 = (rcx_7 s>> 1) + arg1
        
        int32_t rax_5 = arg3[4] * i
        arg_10 = arg2
        rsi_2 = sx.q(rax_5) + rcx_7
        arg_28 = rsi_2
        
        if (r12(r15_1, &arg_10, &arg_28) != 0)
            if (i == 0xffffffff)
                break
            
            void* rcx_11 = *arg1
            
            if ((rcx_11.b & 1) != 0)
                rcx_11 = (rcx_11 s>> 1) + arg1
            
            void* rbx_2 = sx.q(arg3[4] * i) + rcx_11
            arg_28 = rbx_2
            (*arg6)(*(arg6 + 8), &arg_28)
            arg_28 = rbx_2
            return (*arg5)(arg5[1], &arg_28)
    
    rdx_1 = rax

int64_t rax_8 = *arg5
int64_t var_58 = rax_8

if (rax_8 != 0)
    int64_t var_50_1 = arg5[1]

int64_t rax_10 = *arg4
int64_t var_48 = rax_10

if (rax_10 != 0)
    int64_t var_40_1 = arg4[1]

return sub_140cf17b0(arg1, arg3, &var_48, rdx_1, &var_58)
