// 函数: sub_142138490
// 地址: 0x142138490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0xa]
*arg1 = &data_1432db5f8
arg1[7].d = 0xffffffff
__builtin_memset(arg1 + 0x3c, 0, 0x14)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x14]
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12] = 0
arg1[0x13] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
arg1[0x1c] = 0
arg1[0x1d].b = 0
return arg1
