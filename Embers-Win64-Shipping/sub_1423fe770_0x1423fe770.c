// 函数: sub_1423fe770
// 地址: 0x1423fe770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fd7160(arg1, arg2)
arg1[7].b = 2
void* rdx = &arg1[0xa]
void* rcx = &arg1[0x14]
*arg1 = &data_143345d50
arg1[8] = 0
arg1[9] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12] = 0
arg1[0x13] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
__builtin_memset(&arg1[0x1c], 0, 0xa8)
arg1[0x31].d = 0x3f800000
__builtin_memset(&arg1[0x32], 0, 0x18)
sub_141f7a080(&arg1[0x35])
*(arg1 + 0x231) = 1
arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x4c].b = 0
int64_t arg_8
sub_140b58260(&arg_8, &data_142e7aa90, 1)
arg1[6] = arg_8
return arg1
