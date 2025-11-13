// 函数: sub_142776eb0
// 地址: 0x142776eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142775110(arg1)
int64_t* rdx = &arg1[0x19]
int64_t* rcx = &arg1[0x23]
*arg1 = &data_14349f3e0
arg1[5] = &data_14349f7c8
arg1[0x17] = 0
arg1[0x18] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x1d].d = 0xffffffff
*(arg1 + 0xec) = 0
arg1[0x1f] = 0
arg1[0x20].d = 0
arg1[0x21] = 0
arg1[0x22] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x31]
arg1[0x27].d = 0xffffffff
*(arg1 + 0x13c) = 0
arg1[0x29] = 0
arg1[0x2a].d = 0
__builtin_memset(&arg1[0x2b], 0, 0x30)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x3b]
arg1[0x35].d = 0xffffffff
*(arg1 + 0x1ac) = 0
arg1[0x37] = 0
arg1[0x38].d = 0
arg1[0x39] = 0
arg1[0x3a] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x45]
arg1[0x3f].d = 0xffffffff
*(arg1 + 0x1fc) = 0
arg1[0x41] = 0
arg1[0x42].d = 0
arg1[0x43] = 0
arg1[0x44] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x49].d = 0xffffffff
*(arg1 + 0x24c) = 0
arg1[0x4b] = 0
arg1[0x4c].d = 0
arg1[0x4d].d = 0xbf800000
*(arg1 + 0x26c) = 0xbf800000
return arg1
