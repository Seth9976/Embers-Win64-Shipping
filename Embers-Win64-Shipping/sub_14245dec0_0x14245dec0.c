// 函数: sub_14245dec0
// 地址: 0x14245dec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0xd]
*arg1 = &data_143357d90
arg1[5] = &data_143357ff0
arg1[6] = 0
arg1[7] = 0
__builtin_memset(&arg1[9], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x37]
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
__builtin_memset(&arg1[0x15], 0, 0x110)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x45]
arg1[0x3b].d = 0xffffffff
*(arg1 + 0x1dc) = 0
arg1[0x3d] = 0
arg1[0x3e].d = 0
__builtin_memset(&arg1[0x3f], 0, 0x30)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x49].d = 0xffffffff
*(arg1 + 0x24c) = 0
arg1[0x4b] = 0
arg1[0x4c].d = 0
return arg1
