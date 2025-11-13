// 函数: sub_1428bb780
// 地址: 0x1428bb780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbx = *(arg1 + 0x18)

if (rbx != 0)
    *(rbx + 0x58) = arg4
    *(rbx + 0x60) = arg5
    *(rbx + 0x68) = arg2
    *(rbx + 0x70) = arg3
    
    if (arg5 == 0)
        return zx.q(arg3 - *(rbx + 0x70))
    
    if (sub_14036f750(rbx + 0x58, 2) == 0)
        return zx.q(arg3 - *(rbx + 0x70))

return 0xffffffff
