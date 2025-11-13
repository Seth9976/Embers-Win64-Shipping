// 函数: sub_141ee86d0
// 地址: 0x141ee86d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x29]
*(arg1 + 0x38a) &= 0xdf
int64_t* rdi = *(rax + 0x298)
char result = sub_141ea5e60(rdi)

if (result != 0)
    result = sub_141ea6010(rdi)
    char rcx_2 = *(arg1 + 0x38a)
    
    if (result != 0)
        bool cond:0_1 = *(arg1 + 0x493) != 0
        *(arg1 + 0x38a) = rcx_2 | 0x20
        
        if (not(cond:0_1))
            sub_1423c9cb0(&arg1[0x91], 1)
            return sub_141eaacc0(&arg1[6], rdi) __tailcall
    else
        int64_t rax_1 = *arg1
        *(arg1 + 0x38a) = rcx_2 & 0xdf
        result = (*(rax_1 + 0x600))(arg1, arg2)
        
        if (*(arg1 + 0x493) != 0)
            sub_1423c9cb0(&arg1[0x91], 0)
            return sub_141e93860(&arg1[6], rdi) __tailcall
else if (*(arg1 + 0x493) != 0)
    return sub_1423c9cb0(&arg1[0x91], 0)

return result
