// 函数: sub_140839310
// 地址: 0x140839310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x68)

if (arg3 u> 1)
    if (rcx == 0)
        if (arg3 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
            *(arg1 + 0x68) = rax_1
            rcx = rax_1
        
        return memmove(rcx, arg1, arg2 * 0x68) __tailcall
    
    *(arg1 + 0x68) = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
else if (rcx != 0)
    memmove(arg1, rcx, arg2 * 0x68)
    rcx = *(arg1 + 0x68)
    
    if (rcx != 0)
        *(arg1 + 0x68) = sub_140a84c80(rcx, 0, 0)
