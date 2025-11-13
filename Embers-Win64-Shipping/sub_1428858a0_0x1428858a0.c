// 函数: sub_1428858a0
// 地址: 0x1428858a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rax = sub_142885970(arg1 + 0x1698, &arg2[1])

if (rax s<= 0)
    int32_t rcx_2 = neg.d(rax)
    
    if (rcx_2 u< 0x20)
        rax = *arg2 | 1 << (rcx_2 u% 0x20)
        *arg2 = rax
    
    return rax

if (rax u>= 0x20)
    *arg2 = 1
    int64_t rax_5 = *(arg1 + 0x1698)
    *(arg2 + 4) = rax_5
    return rax_5

*arg2 = *arg2 << rax.b | 1
int64_t rax_4 = *(arg1 + 0x1698)
*(arg2 + 4) = rax_4
return rax_4
