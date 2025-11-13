// 函数: sub_1417825e0
// 地址: 0x1417825e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc58b0
arg1[1].w = 0x101
__builtin_memcpy(&arg1[2], 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
__builtin_memset(&arg1[5], 0, 0x50)
arg1[0x10].d = arg5
arg1[0xf].d = arg3
*(arg1 + 0x7c) = arg4
*(arg1 + 0x84) = arg6
__builtin_memset(&arg1[0x12], 0, 0x30)
sub_14178f720(arg1, arg2)
return arg1
