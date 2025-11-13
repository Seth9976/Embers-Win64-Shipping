// 函数: sub_140745310
// 地址: 0x140745310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a96170(arg1)
sub_140a96170(&arg1[3])
arg1[6].b = 0
*(arg1 + 0x34) = 0
void* rcx_1 = &arg1[0x10]
arg1[7].b = 0
__builtin_memset(&arg1[8], 0, 0x40)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
arg1[0x18] = 0
arg1[0x19].d = 5
*(arg1 + 0xcc) = 0
arg1[0x1a].d = 0
*(arg1 + 0xd4) = 0
arg1[0x1b] = 0
arg1[0x1c].w = 0
return arg1
