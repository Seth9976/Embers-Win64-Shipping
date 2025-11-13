// 函数: sub_141f7adf0
// 地址: 0x141f7adf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[8]
*arg1 = &data_143284988
arg1[5] = &data_143284bf0
arg1[6] = 0
arg1[7] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 2
*arg1 = &data_143284c70
arg1[5] = &data_143284ed8
__builtin_memset(&arg1[0x14], 0, 0x20)
arg1[0x18].b &= 0xfe
return arg1
