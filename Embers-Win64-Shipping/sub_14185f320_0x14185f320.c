// 函数: sub_14185f320
// 地址: 0x14185f320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[2]
*arg1 = 0
arg1[1] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
arg1[0xe] = 0
arg1[0xf] = 0
__builtin_memset(&arg1[0x10], 0, 0x1c)
arg1[0x12] = 0
arg1[0x13] = 0
__builtin_memset(&arg1[0xa], 0, 0x2c)
void* rcx = &arg1[0xc]
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x10].d = 0xffffffff
return arg1
