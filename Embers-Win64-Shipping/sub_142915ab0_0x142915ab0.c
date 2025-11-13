// 函数: sub_142915ab0
// 地址: 0x142915ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t* r10 = *(arg1 + 0x28)

if (arg2 - 0x1008 u> 5)
    return 0xfffffffe

switch (arg2)
    case 0x1008
        return sub_142916270(r10, &r10[1], arg4, arg3) __tailcall
    case 0x1009
        return sub_142916270(&r10[2], &r10[3], arg4, arg3) __tailcall
    case 0x100a
        int64_t rcx_4 = *arg4
        
        if (rcx_4 u<= 1 || (rcx_4 & (rcx_4 - 1)) != 0)
            return 0
        
        r10[4] = rcx_4
        return 1
    case 0x100b
        int64_t rax_5 = *arg4
        
        if (rax_5 u< 1)
            return 0
        
        r10[5] = rax_5
        return 1
    case 0x100c
        int64_t rax_7 = *arg4
        
        if (rax_7 u< 1)
            return 0
        
        r10[6] = rax_7
        return 1
    case 0x100d
        int64_t rax_9 = *arg4
        
        if (rax_9 u< 1)
            return 0
        
        r10[7] = rax_9
        return 1
