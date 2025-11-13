// 函数: sub_141d69700
// 地址: 0x141d69700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int64_t* rax_1 = sub_141d6bc30(arg1 + 0x350, arg2, arg3)
    
    if (rax_1 != 0)
        int64_t rsi_1 = sx.q(arg5[4])
        int32_t rcx_1 = (rsi_1 + 1).d
        arg5[4] = rcx_1
        
        if (rcx_1 s> arg5[5])
            sub_140915c70(arg5, rsi_1.d)
        
        int32_t* rax_2 = *(arg5 + 8)
        int32_t* rcx_3 = arg5
        
        if (rax_2 != 0)
            rcx_3 = rax_2
        
        *(rcx_3 + (rsi_1 << 3)) = rax_1

return sub_141d6baa0(arg1 + 0x3a0, arg2, arg3, arg4, arg5) __tailcall
