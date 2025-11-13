// 函数: sub_141d52a20
// 地址: 0x141d52a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rdx = &arg1[8]
*arg1 = &data_142e1a3d0
arg1[5] = &data_142e1a640
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
return arg1
