// 函数: sub_1428bb7f0
// 地址: 0x1428bb7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rbx = *(arg1 + 0x18)

if (rbx == 0)
    return 0

*rbx = arg4
rbx[1].d = arg5
rbx[2] = arg2
rbx[3].d = arg3

if (arg5 != 0 && sub_140371df0(rbx, 2) != 0)
    return 0xffffffff

return zx.q(arg3 - rbx[3].d)
