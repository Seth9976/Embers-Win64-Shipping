// 函数: sub_14077ef80
// 地址: 0x14077ef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14077f040(arg1)
int64_t* rcx = &arg1[0xe]
*arg1 = &data_142daffd8
arg1[0xb] = &data_142d6a040
arg1[0xc] = 0
arg1[0xd] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18].d = 0x7f7fffff
*(arg1 + 0xc4) = 0x404
arg1[0xb] = &data_142da7f70
arg1[0x19] = 0
arg1[0x1a] = 0
sub_1407c8900(arg1)
return arg1
