// 函数: sub_14281ff30
// 地址: 0x14281ff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = (arg2 s>> 0xa).w | 0xd7c0
arg2.w &= 0x3ff
arg2.w |= 0xdc00
arg1[1] = arg2.w
return arg1
