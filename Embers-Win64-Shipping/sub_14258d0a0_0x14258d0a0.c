// 函数: sub_14258d0a0
// 地址: 0x14258d0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
arg1[1] = 0
arg1[2] = 0
arg1[3].b = 0x97
__builtin_memcpy(arg1 + 0x1c, 
    "\xac\xc5\xa7\x37\xac\xc5\xa7\x37\x00\x00\x80\x3a\x8f\xc2\x75\x3c\x00", 0x11)
__builtin_memcpy(&arg1[6], 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x04\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x3f\x00\x03\x03\x03\x03", 
    0x19)
*(arg1 + 0x49) &= 0xfe
*(arg1 + 0x49) |= 2
arg1[0xb].b &= 0xfe
arg1[0xc].b &= 0xfc
__builtin_memset(arg1 + 0x64, 0, 0x24)
*(arg1 + 0x4c) = 0x3dcccccd
arg1[0xa].d = 0x42700000
*(arg1 + 0x54) = 4
*(arg1 + 0x5c) = 0x3f800000
__builtin_memset(&arg1[0x12], 0, 0x20)
arg1[0x11].d = 0x3f800000
*(arg1 + 0xb1) &= 0xf0
arg1[0x16].b = 0
return arg1
