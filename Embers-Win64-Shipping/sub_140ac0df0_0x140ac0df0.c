// 函数: sub_140ac0df0
// 地址: 0x140ac0df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x108))
uint64_t result

if (rdi.d u> 0x80)
    int64_t rcx = 4
    
    if (*(arg1 + 0x10c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    result = sub_140a846a0(rcx * 2, 0) u>> 1
    
    if (rdi.d s> result.d)
        result = 0x7fffffff
else
    result = 0x80

*(arg1 + 0x10c) = result.d
int64_t rcx_3 = *(arg1 + 0x100)

if (result.d u> 0x80)
    if (rcx_3 == 0)
        if (result.d != 0)
            int64_t rax_4 = sub_140a84c80(rcx_3, sx.q(result.d) * 2, 0)
            *(arg1 + 0x100) = rax_4
            rcx_3 = rax_4
        
        return memmove(rcx_3, arg1, arg2 * 2) __tailcall
    
    result = sub_140a84c80(rcx_3, sx.q(result.d) * 2, 0)
    *(arg1 + 0x100) = result
else if (rcx_3 != 0)
    result = memmove(arg1, rcx_3, arg2 * 2)
    rcx_3 = *(arg1 + 0x100)
    
    if (rcx_3 != 0)
        result = sub_140a84c80(rcx_3, 0, 0)
        *(arg1 + 0x100) = result

return result
