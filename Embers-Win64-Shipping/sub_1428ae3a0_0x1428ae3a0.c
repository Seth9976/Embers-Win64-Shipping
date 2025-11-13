// 函数: sub_1428ae3a0
// 地址: 0x1428ae3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rax = *(arg2 + 0xd0)

if ((rax.b & 4) == 0 || (*(arg2 + 0xd8) & 0x11) != 0)
    if (arg3 != 0)
        return sub_1428aeb00(arg2) __tailcall
    
    if ((rax.b & 8) == 0 || (*(arg2 + 0xdc) & 0x40) != 0)
        int32_t rax_2 = rax & 2
        
        if ((rax_2 == 0 || (*(arg2 + 0xd4) & 0xa8) != 0)
                && (rax_2 == 0 || (*(arg2 + 0xd4) & 0x20) != 0))
            return 1

return 0
