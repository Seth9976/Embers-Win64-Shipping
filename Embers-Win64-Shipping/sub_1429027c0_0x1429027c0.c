// 函数: sub_1429027c0
// 地址: 0x1429027c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0 || arg3 == 0)
    return 0xffffffff

if (((arg2 - 0x80) & 0xffffff3f) != 0 || arg2 == 0x140)
    return 0xfffffffe

arg3[0x44] = sub_1429392b0(arg2, arg1, arg3)
return 0
