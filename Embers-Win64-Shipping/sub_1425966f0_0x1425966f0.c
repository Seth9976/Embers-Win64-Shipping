// 函数: sub_1425966f0
// 地址: 0x1425966f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0x3e99999a
arg2[1].b = 0
__builtin_memset(&arg2[2], 0, 0x20)
arg2[6].d = 0x3f800000
arg2[7] = 0
arg2[8].b = 0
__builtin_memcpy(arg2 + 0x44, 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x04\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x3f\x00\x03\x03\x03\x03", 
    0x19)
*(arg2 + 0x5d) &= 0xfe
*(arg2 + 0x5d) |= 2
*(arg2 + 0x6c) &= 0xfe
*(arg2 + 0x74) &= 0xfc
arg2[0xc].d = 0x3dcccccd
*(arg2 + 0x64) = 0x42700000
arg2[0xd].d = 4
arg2[0xe].d = 0x3f800000
arg2[0xf].d = 0
return 0
