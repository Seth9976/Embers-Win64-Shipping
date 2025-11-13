// 函数: sub_1423504d0
// 地址: 0x1423504d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dddeb0(arg1)
*arg1 = &data_14332c958
arg1[0x72] = &data_14332cb98
sub_140d921c0(&arg1[0x73])
void* rcx_1 = &arg1[0x7c]
arg1[0x7a] = 0
arg1[0x7b] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x80].d = 0xffffffff
*(arg1 + 0x404) = 0
arg1[0x82] = 0
arg1[0x83].d = 0
arg1[0x84] = 0
arg1[0x85].b = 0
arg1[0x86] = 0
arg1[0x87].d = 0
__builtin_memset(&arg1[0x88], 0, 0x94)
arg1[0x9b] = 0
arg1[0x9c] = 0
arg1[0x9d].d = 0x42800000
*(arg1 + 0x4ec) = 0
arg1[0x9f].b = 0
*(arg1 + 0x4fc) = 0
return arg1
