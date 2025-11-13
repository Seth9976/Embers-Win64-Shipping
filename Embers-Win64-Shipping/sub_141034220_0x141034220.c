// 函数: sub_141034220
// 地址: 0x141034220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rcx = *(arg1 + 0x48)

if (arg3 u> 3)
    if (rcx == 0)
        if (arg3 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
            *(arg1 + 0x48) = rax_1
            rcx = rax_1
        
        return memmove(rcx, arg1, (rdi * 0x18).d) __tailcall
    
    *(arg1 + 0x48) = sub_140a84c80(rcx, sx.q(arg3) * arg4, 0)
else if (rcx != 0)
    memmove(arg1, rcx, (rdi * 0x18).d)
    rcx = *(arg1 + 0x48)
    
    if (rcx != 0)
        *(arg1 + 0x48) = sub_140a84c80(rcx, 0, 0)
