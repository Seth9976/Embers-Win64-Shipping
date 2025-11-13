// 函数: sub_1426a7040
// 地址: 0x1426a7040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
int64_t* rcx = &arg1[0x21]
*arg1 = &data_143463aa8
arg1[5] = &data_143463e90
__builtin_memset(&arg1[0x19], 0, 0x40)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x2b]
arg1[0x25].d = 0xffffffff
*(arg1 + 0x12c) = 0
arg1[0x27] = 0
arg1[0x28].d = 0
arg1[0x29] = 0
arg1[0x2a] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x2f].d = 0xffffffff
*(arg1 + 0x17c) = 0
arg1[0x31] = 0
arg1[0x32].d = 0
arg1[0x33] = 0
arg1[0x34] = 0
*(arg1 + 0x3a) &= 0xfd
*(arg1 + 0x8a) |= 0x10
arg1[0x35].d &= 0xfffffffc
return arg1
