// 函数: sub_1423298a0
// 地址: 0x1423298a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143328bb0
__builtin_memset(&arg1[2], 0, 0x20)
__builtin_memset(&arg1[7], 0, 0x30)
arg1[0xe] = 0
arg1[0xf] = 0
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
sub_142331380(arg1)
return arg1
