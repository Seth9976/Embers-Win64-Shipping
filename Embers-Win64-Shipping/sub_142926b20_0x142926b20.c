// 函数: sub_142926b20
// 地址: 0x142926b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbx = arg1[3]
int64_t rsi = sx.q(*(*arg1 + 0x38))

if (rsi u> 0xa8)
    return 0

memset(rbx, 0, 0xc8)
*(rbx + 0xd8) = 0
*(rbx + 0xc8) = rsi
*(rbx + 0xd0) = sx.q(*(*arg1 + 8))
*(rbx + 0x188) = arg2
return 1
