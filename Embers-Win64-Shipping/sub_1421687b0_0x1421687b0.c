// 函数: sub_1421687b0
// 地址: 0x1421687b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x310)
int64_t arg_10
sub_140d3a3a0(&arg_10, arg3)
int32_t rax_9

if (arg3 == 0)
    rax_9 = 0
else
    int32_t arg_8
    sub_141f87aa0(rsi + 0x50, &arg_8, arg_10)
    int64_t rax_1 = sx.q(arg_8)
    void* rcx_2
    
    if (rax_1.d != 0xffffffff)
        rcx_2 = *(rsi + 0x50) + rax_1 * 0x14
    
    if (rax_1.d == 0xffffffff || rcx_2 == 0 || *(rcx_2 + 8) u<= 0)
        if ((*(*arg3 + 0x1c0))(arg3) != 0)
            goto label_142168844
        
        if ((*(*arg3 + 0x1c8))(arg3) != 0)
            goto label_142168844
        
        rax_9 = 0
    else
    label_142168844:
        sub_141f87aa0(rsi + 0x50, &arg_8, arg_10)
        int64_t rax_7 = sx.q(arg_8)
        
        if (rax_7.d == 0xffffffff)
            rax_9 = 0
        else
            void* rcx_6 = *(rsi + 0x50) + rax_7 * 0x14
            
            if (rcx_6 == 0)
                rax_9 = 0
            else
                rax_9 = *(rcx_6 + 8)

*arg2 = rax_9
return arg2
