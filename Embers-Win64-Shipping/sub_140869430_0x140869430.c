// 函数: sub_140869430
// 地址: 0x140869430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x28))
uint64_t result = 4
int64_t rsi = sx.q(arg2)

if (rdi.d u> 4)
    if (*(arg1 + 0x2c) != 0 || rdi.d u> 4)
        result = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    result = sub_140a846a0(result << 3, 0) u>> 3
    
    if (rdi.d s> result.d)
        result = 0x7fffffff

*(arg1 + 0x2c) = result.d
int64_t rcx_1 = *(arg1 + 0x20)

if (result.d u> 4)
    if (rcx_1 == 0)
        if (result.d != 0)
            int64_t rax_4 = sub_140a84c80(rcx_1, sx.q(result.d) << 3, 0)
            *(arg1 + 0x20) = rax_4
            rcx_1 = rax_4
        
        return memmove(rcx_1, arg1, (rsi << 3).d) __tailcall
    
    result = sub_140a84c80(rcx_1, sx.q(result.d) << 3, 0)
    *(arg1 + 0x20) = result
else if (rcx_1 != 0)
    result = memmove(arg1, rcx_1, (rsi << 3).d)
    rcx_1 = *(arg1 + 0x20)
    
    if (rcx_1 != 0)
        result = sub_140a84c80(rcx_1, 0, 0)
        *(arg1 + 0x20) = result

return result
