// 函数: sub_1428ae2e0
// 地址: 0x1428ae2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
char rax = (*(arg2 + 0xd0)).b

if ((rax & 4) == 0 || (*(arg2 + 0xd8) & 2) != 0)
    if (arg3 != 0)
        return sub_1428aeb00(arg2) __tailcall
    
    if (((rax & 2) == 0 || (*(arg2 + 0xd4) & 0x88) != 0)
            && ((rax & 8) == 0 || (*(arg2 + 0xdc) & 0x80) != 0))
        return 1

return 0
