// 函数: sub_1428788e0
// 地址: 0x1428788e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t r8 = *(arg1 + 0x5c)

if (r8 == 1)
    return sub_142860090(arg1, arg2, 1, 1) __tailcall

if (r8 == 0xc)
    void* rax_6 = *(arg1 + 8)
    *(arg1 + 0x44) = 0
    
    if ((*(*(rax_6 + 0xc0) + 0x60) & 8) != 0)
        int32_t result = sub_142882cb0(arg1)
        
        if (result == 0)
            return result
else if (r8 != 0x10)
    if (r8 == 0x2e)
        return sub_142860090(arg1, arg2, 0, 1) __tailcall
    
    if (r8 == 0x2f)
        int32_t rax_1 = *(arg1 + 0x84)
        
        if (rax_1 != 7 && rax_1 != 0)
            return sub_142860090(arg1, arg2, 0, 1) __tailcall
else if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0 && *(arg1 + 0xc8) != 0)
    *(arg1 + 0x78) = 0

return 2
