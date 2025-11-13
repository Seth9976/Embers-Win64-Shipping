// 函数: sub_142913ef0
// 地址: 0x142913ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t* rcx = *(arg1 + 0x28)

if (arg2 == 1)
    *rcx = arg4
else
    int32_t rax_4
    
    if (arg2 == 6)
        if (arg4 != 0)
            if (arg3 s< 0xffffffff)
                return 0
        else if (arg3 s> 0 || arg3 s< 0xffffffff)
            return 0
        
        rax_4 = sub_1428e61a0(&rcx[1], arg4, arg3)
    else
        if (arg2 != 7)
            return 0xfffffffe
        
        int32_t* rdx_2 = *(*(arg1 + 0x10) + 0x28)
        rax_4 = sub_1428be280(rcx[4], *(rdx_2 + 8), *rdx_2, *rcx, *(arg1 + 8))
    
    if (rax_4 == 0)
        return 0

return 1
