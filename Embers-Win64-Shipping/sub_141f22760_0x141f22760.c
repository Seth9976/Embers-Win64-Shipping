// 函数: sub_141f22760
// 地址: 0x141f22760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x1a8)

if (arg3 u> 3)
    if (rcx == 0)
        if (arg3 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
            *(arg1 + 0x1a8) = rax_1
            rcx = rax_1
        
        return memmove(rcx, arg1, arg2 * 0x8c) __tailcall
    
    *(arg1 + 0x1a8) = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
else if (rcx != 0)
    memmove(arg1, rcx, arg2 * 0x8c)
    rcx = *(arg1 + 0x1a8)
    
    if (rcx != 0)
        *(arg1 + 0x1a8) = sub_140a84c80(rcx, 0, 0)
