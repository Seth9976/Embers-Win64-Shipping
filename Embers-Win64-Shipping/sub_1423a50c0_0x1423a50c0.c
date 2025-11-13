// 函数: sub_1423a50c0
// 地址: 0x1423a50c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ab8c0(arg1)
int64_t* rdx = &arg1[4]
int64_t* rcx = &arg1[0xe]
*arg1 = &data_143297e10
arg1[2] = 0
arg1[3] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc] = 0
arg1[0xd] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
arg1[0x16] = arg2
arg1[0x17] = 0
arg1[0x18].b = 0
return arg1
