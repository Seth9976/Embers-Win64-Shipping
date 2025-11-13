// 函数: sub_1428a3ac0
// 地址: 0x1428a3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428ae8e0(arg1, 0xffffffff, 0xffffffff)

if (arg2 != 0)
    *arg2 = arg1[0x15].d

if (arg3 != 0)
    *arg3 = *(arg1 + 0xac)

if (arg4 != 0)
    *arg4 = arg1[0x16].d

if (arg5 != 0)
    *arg5 = *(arg1 + 0xb4)

return zx.q(*(arg1 + 0xb4)) & 1
