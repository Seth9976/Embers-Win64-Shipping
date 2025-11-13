// 函数: sub_141e8f870
// 地址: 0x141e8f870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
int64_t r8
r8.b = 1
*arg1 = &data_143253e18
arg1[0x4d] = 0
arg1[0x4e] = 0
arg1[0x4c].b = 1
arg1[0x4f].d = 0x3f000000
*(arg1 + 0x27c) = 0x40000000
arg1[0x50].b = 0
__builtin_memcpy(arg1 + 0x284, 
    "\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x40\x9c\x46\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x00\x3f\x"
"00\x40\x9c\x46\x00\x00\x00\x3f", 
    0x20)
int64_t* rcx = arg1[0x47]
(*(*rcx + 0x620))(rcx, data_143f3a590, r8)
void* rax_1 = arg1[0x47]
int32_t arg_8 = 0xffffff00
*(rax_1 + 0x208) |= 0x80
*(arg1 + 0x22c) |= 1
*(arg1 + 0x25c) |= 1
*(arg1 + 0x224) = 0xffffff00
return arg1
