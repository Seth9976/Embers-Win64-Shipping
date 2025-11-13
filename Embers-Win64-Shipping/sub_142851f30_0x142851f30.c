// 函数: sub_142851f30
// 地址: 0x142851f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
*arg1
arg1[1]
arg1[2]
int32_t rcx = arg1[3].d

if (rcx == 0 || rcx == 1)
    jump(*(arg1 + 0x20))

if (rcx == 2)
    jump(*(arg1 + 0x20))

return 0xffffffff
