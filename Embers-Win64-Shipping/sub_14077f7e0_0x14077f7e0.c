// 函数: sub_14077f7e0
// 地址: 0x14077f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
int64_t* rdx = &arg1[8]
int64_t* rcx = &arg1[0x12]
*arg1 = &data_142db0b70
arg1[6] = 0
arg1[7] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[0x10] = 0
arg1[0x11] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
return arg1
