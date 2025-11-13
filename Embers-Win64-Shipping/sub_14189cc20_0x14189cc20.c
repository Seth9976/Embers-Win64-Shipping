// 函数: sub_14189cc20
// 地址: 0x14189cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
arg1[2] = 0
arg1[2] = *arg3
*arg3 = 0
arg1[3].d = arg3[1].d
*(arg1 + 0x1c) = *(arg3 + 0xc)
arg3[1] = 0
int64_t rcx = *arg2

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14180c130(arg3)
return arg1
