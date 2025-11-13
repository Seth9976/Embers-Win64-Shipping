// 函数: sub_141f7b530
// 地址: 0x141f7b530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fd7160(arg1, sub_140d20910())
*arg1 = &data_143285648
int64_t arg_8
sub_140b58260(&arg_8, u"Streaming", 1)
arg1[7].d &= 0xfffffffc
arg1[9].d |= 3
arg1[0xd].d &= 0xfffffffd
arg1[0xd].d |= 1
arg1[6] = arg_8
*(arg1 + 0x3c) = 0x3fc00000
arg1[8].d = 0x3ba3d70a
*(arg1 + 0x44) = 0x20000
__builtin_memcpy(arg1 + 0x4c, 
    "\x00\x00\xa0\x40\x00\x00\x70\x41\x00\x00\xa0\x40\x00\x00\xa0\x40\x0a\x00\x00\x00\x00\x00\x80\x3f\x"
"05\x00\x00\x00", 
    0x1c)
return arg1
