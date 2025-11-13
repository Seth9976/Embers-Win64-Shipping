// 函数: sub_14234f280
// 地址: 0x14234f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e4f3c0(arg1)
*(arg1 + 0xb1) &= 0xf0
*arg1 = &data_143209430
arg1[0x16].b = 0x83
*(arg1 + 0xb2) = 0
*(arg1 + 0xb4) = 0
__builtin_memcpy(&arg1[0x17], 
    "\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x48\x43\x00\x80\x3b\x45\x00\x80\xbb\x45", 0x14)
sub_141f7a080(&arg1[0x1a])
sub_141f7a080(&arg1[0x2b])
float zmm0 = *(arg1 + 0x14)
*(arg1 + 0x22c) = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x24)
arg1[0x3c].d = 0x469c4000
*(arg1 + 0x1e4) = 0x469c4000
*(arg1 + 0x1ec) = 0
arg1[0x3e].d = 0x41f00000
arg1[0x46].d = zmm0
__builtin_memcpy(arg1 + 0x1f4, 
    "\x00\x00\x70\x42\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x40\x9c\x46\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\x9a"
"99\x99\x3e", 
    0x34)
__builtin_strncpy(&arg1[0x45], "33s?", 4)
*(arg1 + 0x234) = 0
sub_141f7a080(&arg1[0x47])
arg1[0x58] = 0
arg1[0x59] = 0
zmm0 = *(arg1 + 0x14)
arg1[0x5b].d = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x24)
arg1[0x5a].d = 0x3f800000
*(arg1 + 0x2d4) = 0x3f800000
arg1[0x5c].d = 0x3f800000
*(arg1 + 0x2dc) = zmm0
sub_141f7a080(&arg1[0x5d])
__builtin_memset(&arg1[0x6e], 0, 0x30)
return arg1
