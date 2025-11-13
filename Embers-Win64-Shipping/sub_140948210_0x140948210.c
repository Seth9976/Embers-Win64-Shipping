// 函数: sub_140948210
// 地址: 0x140948210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409480a0(arg1)
int64_t* rcx = &arg1[0x4f]
*arg1 = &data_142e2de60
arg1[0x44] = &data_142e2e4d8
__builtin_memset(&arg1[0x4b], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x59]
*(arg1 + 0x29c) = 0
arg1[0x53].d = 0xffffffff
arg1[0x55] = 0
arg1[0x56].d = 0
arg1[0x57] = 0
arg1[0x58] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
*(arg1 + 0x2ec) = 0
arg1[0x5d].d = 0xffffffff
arg1[0x5f] = 0
arg1[0x60].d = 0
void arg_8
arg1[0x1d] = *sub_140b58260(&arg_8, u"BeaconDriverHost", 1)
return arg1
