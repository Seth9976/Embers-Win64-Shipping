// 函数: sub_1417cc1e0
// 地址: 0x1417cc1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x8008))
int64_t rsi = sx.q(arg2)
uint64_t result

if (rdi.d u> 0x200)
    int64_t rcx = 4
    
    if (*(arg1 + 0x800c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    result = sub_140a846a0(rcx << 6, 0) u>> 6
    
    if (rdi.d s> result.d)
        result = 0x7fffffff
else
    result = 0x200

*(arg1 + 0x800c) = result.d
int64_t rcx_3 = *(arg1 + 0x8000)

if (result.d u> 0x200)
    if (rcx_3 == 0)
        if (result.d != 0)
            int64_t rax_4 = sub_140a84c80(rcx_3, sx.q(result.d) << 6, 0)
            *(arg1 + 0x8000) = rax_4
            rcx_3 = rax_4
        
        return memmove(rcx_3, arg1, (rsi << 6).d) __tailcall
    
    result = sub_140a84c80(rcx_3, sx.q(result.d) << 6, 0)
    *(arg1 + 0x8000) = result
else if (rcx_3 != 0)
    result = memmove(arg1, rcx_3, (rsi << 6).d)
    rcx_3 = *(arg1 + 0x8000)
    
    if (rcx_3 != 0)
        result = sub_140a84c80(rcx_3, 0, 0)
        *(arg1 + 0x8000) = result

return result
