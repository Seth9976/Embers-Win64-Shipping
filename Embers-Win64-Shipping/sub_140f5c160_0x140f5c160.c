// 函数: sub_140f5c160
// 地址: 0x140f5c160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
int64_t result

if (rdi.d u> 0x10)
    int64_t rcx = 4
    
    if (*(arg1 + 0x1c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    result = sub_140a846a0(rcx, 0)
    
    if (rdi.d s> result.d)
        result = 0x7fffffff
else
    result = 0x10

*(arg1 + 0x1c) = result.d
int64_t rcx_2 = *(arg1 + 0x10)

if (result.d u> 0x10)
    if (rcx_2 == 0)
        if (result.d != 0)
            int64_t rax_3 = sub_140a84c80(rcx_2, sx.q(result.d), 0)
            *(arg1 + 0x10) = rax_3
            rcx_2 = rax_3
        
        return memmove(rcx_2, arg1, arg2) __tailcall
    
    result = sub_140a84c80(rcx_2, sx.q(result.d), 0)
    *(arg1 + 0x10) = result
else if (rcx_2 != 0)
    result = memmove(arg1, rcx_2, arg2)
    rcx_2 = *(arg1 + 0x10)
    
    if (rcx_2 != 0)
        result = sub_140a84c80(rcx_2, 0, 0)
        *(arg1 + 0x10) = result

return result
