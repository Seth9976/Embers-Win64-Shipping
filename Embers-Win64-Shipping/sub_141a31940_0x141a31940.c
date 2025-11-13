// 函数: sub_141a31940
// 地址: 0x141a31940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0xa]
*arg1 = &data_14302ee90
arg1[5] = 0
arg1[6] = 0
arg1[7].b = 1
arg1[8] = 0
arg1[9] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
return arg1
