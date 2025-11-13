// 函数: sub_1419fcdb0
// 地址: 0x1419fcdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rdx = &arg1[7]
*arg1 = &data_14301e768
arg1[5] = 0
arg1[6] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x5c) = 0
arg1[0xb].d = 0xffffffff
arg1[0xd] = 0
arg1[0xe].d = 0
sub_140d3a3a0(&arg1[0xf], nullptr)
return arg1
