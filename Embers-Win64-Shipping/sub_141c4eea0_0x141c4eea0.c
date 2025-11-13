// 函数: sub_141c4eea0
// 地址: 0x141c4eea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14234f680(arg1)
*arg1 = &data_143209ba0
sub_141c308b0(&arg1[0xe])
arg1[0x128].b = 0
*(arg1 + 0x944) = 0x3f800000
*(arg1 + 0x94c) = 0x3f4ccccd
arg1[0x12a].d = 0x3f000000
__builtin_strncpy(arg1 + 0x954, "333?", 0xc)
__builtin_memcpy(&arg1[0x12c], 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f", 
    0x18)
InitializeCriticalSection(&arg1[0x12f])
SetCriticalSectionSpinCount(&arg1[0x12f], 0xfa0)
void* rcx_3 = &arg1[0x137]
arg1[0x134] = &data_142d6a040
arg1[0x135] = 0
arg1[0x136] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax = *(rcx_3 + 0x10)

if (rax != 0)
    rcx_3 = rax

*rcx_3 = 0
*(rcx_3 + 8) = 0
*(arg1 + 0x9dc) = 0
arg1[0x13b].d = 0xffffffff
arg1[0x13d] = 0
arg1[0x13e].d = 0
arg1[0x13f] = 0
arg1[0x140] = 0
arg1[0x141].d = 0x7f7fffff
*(arg1 + 0xa0c) = 0x404
arg1[0x134] = &data_142da7f70
__builtin_memset(&arg1[0x142], 0, 0x15)
return arg1
