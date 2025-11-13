// 函数: sub_1428aeb80
// 地址: 0x1428aeb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
char rax = (*(arg1 + 0xd0)).b

if ((rax & 4) == 0 || (*(arg1 + 0xd8) & 4) != 0)
    if (arg2 == 0)
        char rax_2
        
        if ((rax & 8) != 0)
            rax_2 = (*(arg1 + 0xdc)).b
        
        if ((rax & 8) == 0 || (rax_2 & 0x20) != 0)
            return 1
        
        if (rax_2 s< 0)
            return 2
    else
        int32_t result = sub_1428aeaa0(arg1)
        
        if (result != 0 && (result != 5 || (*(arg1 + 0xdc) & 2) != 0))
            return result

return 0
