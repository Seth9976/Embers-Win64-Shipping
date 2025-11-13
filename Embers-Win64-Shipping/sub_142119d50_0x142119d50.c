// 函数: sub_142119d50
// 地址: 0x142119d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142119af0(arg1, arg2)
int64_t* rcx = &arg1[0x83]
*arg1 = &data_1432d6e18
arg1[5] = &data_1432d7298
arg1[6] = &data_1432d72b0
arg1[0x81] = 0
arg1[0x82] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x87].d = 0xffffffff
*(arg1 + 0x43c) = 0
arg1[0x89] = 0
arg1[0x8a].d = 0
return arg1
