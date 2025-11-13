// 函数: sub_141813cc0
// 地址: 0x141813cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&arg1[0x15])
sub_140745b20(&arg1[0x13])
arg1[0x11].d = 0
int64_t rcx_2 = arg1[0x10]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_141837530(&arg1[8], 0)
int64_t rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[8]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140596e10(&arg1[6])
sub_140596e10(&arg1[4])
int64_t rcx_8 = arg1[1]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*arg1 = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
