// 函数: sub_140915c70
// 地址: 0x140915c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10))
int64_t rsi = sx.q(arg2)
uint64_t result

if (rdi.d u> 1)
    int64_t rcx = 4
    
    if (*(arg1 + 0x14) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    result = sub_140a846a0(rcx << 3, 0) u>> 3
    
    if (rdi.d s> result.d)
        result = 0x7fffffff
else
    result = 1

*(arg1 + 0x14) = result.d
int64_t rcx_3 = *(arg1 + 8)

if (result.d u> 1)
    if (rcx_3 == 0)
        if (result.d != 0)
            int64_t rax_4 = sub_140a84c80(rcx_3, sx.q(result.d) << 3, 0)
            *(arg1 + 8) = rax_4
            rcx_3 = rax_4
        
        return memmove(rcx_3, arg1, (rsi << 3).d) __tailcall
    
    result = sub_140a84c80(rcx_3, sx.q(result.d) << 3, 0)
    *(arg1 + 8) = result
else if (rcx_3 != 0)
    result = memmove(arg1, rcx_3, (rsi << 3).d)
    rcx_3 = *(arg1 + 8)
    
    if (rcx_3 != 0)
        result = sub_140a84c80(rcx_3, 0, 0)
        *(arg1 + 8) = result

return result
