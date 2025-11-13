// 函数: sub_141983300
// 地址: 0x141983300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rcx = *(arg1 + 0x100)

if (arg3 u> 0x40)
    if (rcx == 0)
        if (arg3 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
            *(arg1 + 0x100) = rax_1
            rcx = rax_1
        
        return memmove(rcx, arg1, (rdi << 2).d) __tailcall
    
    *(arg1 + 0x100) = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
else if (rcx != 0)
    memmove(arg1, rcx, (rdi << 2).d)
    rcx = *(arg1 + 0x100)
    
    if (rcx != 0)
        *(arg1 + 0x100) = sub_140a84c80(rcx, 0, 0)
