// 函数: sub_1423b4c00
// 地址: 0x1423b4c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x78))
int64_t rsi = sx.q(arg2)
uint64_t result

if (rdi.d u> 0xe)
    int64_t rcx = 4
    
    if (*(arg1 + 0x7c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    result = sub_140a846a0(rcx << 3, 0) u>> 3
    
    if (rdi.d s> result.d)
        result = 0x7fffffff
else
    result = 0xe

*(arg1 + 0x7c) = result.d
int64_t rcx_3 = *(arg1 + 0x70)

if (result.d u> 0xe)
    if (rcx_3 == 0)
        if (result.d != 0)
            int64_t rax_4 = sub_140a84c80(rcx_3, sx.q(result.d) << 3, 0)
            *(arg1 + 0x70) = rax_4
            rcx_3 = rax_4
        
        return memmove(rcx_3, arg1, (rsi << 3).d) __tailcall
    
    result = sub_140a84c80(rcx_3, sx.q(result.d) << 3, 0)
    *(arg1 + 0x70) = result
else if (rcx_3 != 0)
    result = memmove(arg1, rcx_3, (rsi << 3).d)
    rcx_3 = *(arg1 + 0x70)
    
    if (rcx_3 != 0)
        result = sub_140a84c80(rcx_3, 0, 0)
        *(arg1 + 0x70) = result

return result
