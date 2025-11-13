// 函数: sub_1428671d0
// 地址: 0x1428671d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*arg3 = 0
bool cond:0 = *arg1 s<= 0x300
*(arg1 + 0x670) = 0

if (not(cond:0) && (*(arg1 + 0x5c4) & 0x4000) == 0 && sub_1428546e0(arg1, 0xa, 0, 0, 0) != 0)
    void* rdx = *(arg2 + 0x288)
    
    if (*(rdx + 0x100) != 0)
        return sub_142866cd0(arg1, *(rdx + 0xf0), *(rdx + 0xf8), arg2 + 0x30, *(arg2 + 0x28), arg3)

return 2
