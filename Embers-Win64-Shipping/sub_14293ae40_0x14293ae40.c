// 函数: sub_14293ae40
// 地址: 0x14293ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_14293b6e0(arg1, arg2, 0, 1, arg3, arg4)

if (rax != 0)
    void* rax_1
    
    if (*(arg1 + 8) == 0)
        rax_1 = sub_142898ba0()
        *(arg1 + 8) = rax_1
    
    if (*(arg1 + 8) != 0 || rax_1 != 0)
        rax[0xa] = arg5
        rax[0xb] = arg6
        *(rax + 0x30) = 0
        int32_t result = sub_142898d50(*(arg1 + 8), rax)
        
        if (result s> 0)
            return result
        
        sub_14293b650(rax)
        return zx.q(result - 1)
    
    sub_14293b650(rax)

return -1
