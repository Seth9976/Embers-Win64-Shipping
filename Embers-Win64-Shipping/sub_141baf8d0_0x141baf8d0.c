// 函数: sub_141baf8d0
// 地址: 0x141baf8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
label_141baf971:
    *arg1 = 0
    arg1[1] = 0
else
    int64_t rbx_1 = sx.q(arg5)
    
    if (rbx_1.d s>= arg4[1].d)
        goto label_141baf971
    
    void* var_38 = arg3
    void* const rax_1
    
    if (arg3 == 0)
        rax_1 = nullptr
    else
        rax_1 = *(arg3 + 0x50)
    
    int32_t var_28_1 = 0xffffffff
    int16_t var_24_1 = 0x101
    char var_22_1 = 0
    sub_1406328d0(&var_38)
    void* const rsi_1 = rax_1
    
    if (rsi_1 == 0)
        goto label_141baf971
    
    while (*(rsi_1 + 0x28) != *(*arg4 + (rbx_1 << 3)))
        void* rax_2 = *(rsi_1 + 0x20)
        sub_1406328d0(&var_38)
        rsi_1 = rax_2
        
        if (rsi_1 == 0)
            goto label_141baf971
    
    if (((zx.q(*(*(rsi_1 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
        goto label_141baf971
    
    void* r8 = *(rsi_1 + 0x78)
    
    if (rbx_1.d != arg4[1].d - 1)
        sub_141baf8d0(arg1, sx.q(*(rsi_1 + 0x4c)) + arg2, r8, arg4, (rbx_1 + 1).d)
    else
        void* rbx_2 = *(r8 + 0x18)
        void arg_10
        
        if (rbx_2 != *sub_141bb15d0(&arg_10) && rbx_2 != *sub_141bb1550(&arg_10)
                && rbx_2 != *sub_141bb14d0(&arg_10))
            goto label_141baf971
        
        int64_t rax_11 = sx.q(*(rsi_1 + 0x4c)) + arg2
        var_38 = rbx_2
        int64_t var_30_3 = rax_11
        *arg1 = var_38.o

return arg1
