// 函数: sub_1412952d0
// 地址: 0x1412952d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xa20)

if (arg3 u> 4)
    if (rcx == 0)
        if (arg3 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
            *(arg1 + 0xa20) = rax_1
            rcx = rax_1
        
        return memmove(rcx, arg1, arg2 * 0x288) __tailcall
    
    *(arg1 + 0xa20) = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
else if (rcx != 0)
    memmove(arg1, rcx, arg2 * 0x288)
    rcx = *(arg1 + 0xa20)
    
    if (rcx != 0)
        *(arg1 + 0xa20) = sub_140a84c80(rcx, 0, 0)
