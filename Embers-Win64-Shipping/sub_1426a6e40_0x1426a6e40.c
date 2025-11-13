// 函数: sub_1426a6e40
// 地址: 0x1426a6e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c98e0(arg1, arg2)
int64_t* rcx = &arg1[0x3a]
*arg1 = &data_143462a58
arg1[5] = &data_143462ea8
arg1[0x16] = &data_143462ed8
__builtin_memset(&arg1[0x22], 0, 0x30)
arg1[0x28] = arg1
__builtin_memset(&arg1[0x29], 0, 0x20)
arg1[0x2d] = -1
arg1[0x2e].d = 0xffffffff
arg1[0x30].d &= 0xfffffff0
arg1[0x2f] = -1
arg1[0x31] = -1
*(arg1 + 0x19b) &= 0xfc
arg1[0x32] = 0
arg1[0x35].d &= 0xfffffffc
arg1[0x34] = 0
*(arg1 + 0x1bc) &= 0xfe
arg1[0x36] = 0
arg1[0x37].d = 1
arg1[0x38] = 0
arg1[0x39] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x44]
arg1[0x3e].d = 0xffffffff
*(arg1 + 0x1f4) = 0
arg1[0x40] = 0
arg1[0x41].d = 0
arg1[0x42] = 0
arg1[0x43] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x48].d = 0xffffffff
*(arg1 + 0x244) = 0
arg1[0x4a] = 0
arg1[0x4b].d = 0
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x8a) |= 0x10
*(arg1 + 0x263) &= 0x90
arg1[0x4c].w = 0
*(arg1 + 0x262) = 0
return arg1
