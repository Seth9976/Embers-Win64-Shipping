// 函数: sub_141104ab0
// 地址: 0x141104ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 8)

if (arg3 u> 2)
    if (rcx == 0)
        if (arg3 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
            *(arg1 + 8) = rax_1
            rcx = rax_1
        
        return memmove(rcx, arg1, arg2 * 2) __tailcall
    
    *(arg1 + 8) = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
else if (rcx != 0)
    memmove(arg1, rcx, arg2 * 2)
    rcx = *(arg1 + 8)
    
    if (rcx != 0)
        *(arg1 + 8) = sub_140a84c80(rcx, 0, 0)
