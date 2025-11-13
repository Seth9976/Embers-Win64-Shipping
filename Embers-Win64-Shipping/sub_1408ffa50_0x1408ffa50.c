// 函数: sub_1408ffa50
// 地址: 0x1408ffa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, sub_140d20910())
int64_t* rcx_1 = &arg1[8]
*arg1 = &data_142e1a3d0
arg1[5] = &data_142e1a640
arg1[6] = 0
arg1[7] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_1 = rcx_1[2]

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
rcx_1[1] = 0
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[0x10] = 0
*arg1 = &data_142e1a9d8
arg1[5] = &data_142e1ac48
__builtin_memset(&arg1[0x11], 0, 0x28)
return arg1
