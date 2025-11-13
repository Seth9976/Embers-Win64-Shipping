// 函数: sub_142287aa0
// 地址: 0x142287aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x30)
*(arg1 + 0xf0) = 0
*(arg1 + 0xf8) = 0
*(arg1 + 0xfc) = 0x10
__builtin_memset(arg1 + 0x108, 0, 0x20)
*(arg1 + 0x134) = 0
*(arg1 + 0x128) = -1
*(arg1 + 0x130) = 0xffffffff
*(arg1 + 0x138) = 0x42000000
*(arg1 + 0x13c) &= 0xfffffff0
__builtin_memcpy(arg1 + 0x140, 
    "\x00\x00\x00\x41\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
return arg1
