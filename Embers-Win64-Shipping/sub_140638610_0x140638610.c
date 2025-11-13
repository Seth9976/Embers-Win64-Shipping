// 函数: sub_140638610
// 地址: 0x140638610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rcx = *(arg1 + 0xc0)

if (arg3 u> 0x18)
    if (rcx == 0)
        if (arg3 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
            *(arg1 + 0xc0) = rax_1
            rcx = rax_1
        
        return memmove(rcx, arg1, (rdi << 3).d) __tailcall
    
    *(arg1 + 0xc0) = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
else if (rcx != 0)
    memmove(arg1, rcx, (rdi << 3).d)
    rcx = *(arg1 + 0xc0)
    
    if (rcx != 0)
        *(arg1 + 0xc0) = sub_140a84c80(rcx, 0, 0)
