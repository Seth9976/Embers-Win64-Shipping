// 函数: sub_1428ae760
// 地址: 0x1428ae760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428aebf0(arg1)
int32_t rdx = arg1[0x1a].d
int32_t rcx_1 = rdx & 2

if (rcx_1 == 0 || (*(arg1 + 0xd4) & 4) != 0)
    if ((rdx.b & 1) != 0)
        return zx.q(zx.d(rdx.b) u>> 4) & 1
    
    if ((rdx & 0x2040) == 0x2040)
        return 3
    
    if (rcx_1 != 0)
        return 4
    
    if ((rdx.b & 8) != 0 && (*(arg1 + 0xdc) & 7) != 0)
        return 5

return 0
