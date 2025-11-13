// 函数: sub_1428aea60
// 地址: 0x1428aea60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428aebf0(arg1)

if ((arg1[0x1a].b & 2) == 0)
    return 0xffffffff

return zx.q(*(arg1 + 0xd4))
