// 函数: sub_140f66da0
// 地址: 0x140f66da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
arg1[5].b &= 0xfb
*arg1 = &data_142ee7778
sub_140a96170(&arg1[0x55])
arg1[0x58].b = 0
arg1[0x59] = 0
arg1[0x5a].d = 0
arg1[0x5b] = 0
sub_140ddd1b0(&arg1[0x5c])
sub_140d93b50(&arg1[0xa9])
arg1[0xb3].b = 0
arg1[0xb4] = 0
arg1[0xb5].d = 0
arg1[0xb6] = 0
arg1[0xb7].b = 0
arg1[0xb8] = 0
arg1[0xb9].d = 0
__builtin_memcpy(&arg1[0xba], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
__builtin_memset(&arg1[0xbd], 0, 0x11)
arg1[0xc0] = 0
arg1[0xc1].d = 0
arg1[0xc3].b = 0
arg1[0xc4] = 0
arg1[0xc5].d = 0
arg1[0xc8].b = 0
arg1[0xc9] = 0
arg1[0xca].d = 0
arg1[0xcd].b = 0
arg1[0xce] = 0
arg1[0xcf].d = 0
arg1[0xd0] = 0
arg1[0xd1].b = 0
arg1[0xd2] = 0
arg1[0xd3].d = 0
sub_140a96170(&arg1[0xd4])
arg1[0xd7].b = 0
arg1[0xd8] = 0
arg1[0xd9].d = 0
arg1[0xda].d = 0
*(arg1 + 0x6d4) = 0
arg1[0xdb] = 0
arg1[0xdc].d = 0
arg1[0xdd].w = 0
arg1[0xde] = 0
arg1[0xdf].d = 0
arg1[0xe0].w = 0
arg1[0xe1] = 0
arg1[0xe2].d = 0
__builtin_memset(&arg1[0xe3], 0, 0x11)
arg1[0xe6] = 0
arg1[0xe7].d = 0
arg1[0xe8].d = 0
*(arg1 + 0x744) = 0
arg1[0xe9] = 0
arg1[0xea].d = 0
arg1[0xeb].d = 0
*(arg1 + 0x75c) = 0
arg1[0xec] = 0
arg1[0xed].d = 0
arg1[0xee].d = 0
*(arg1 + 0x774) = 0
arg1[0xef] = 0
arg1[0xf0].d = 0
arg1[0xf2].b = 0
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

arg1[5].b &= 0xfd
*(arg1 + 0x29) &= 0x7f
*(arg1 + 0x794) = 0
*(arg1 + 0x2a) = 1
return arg1
