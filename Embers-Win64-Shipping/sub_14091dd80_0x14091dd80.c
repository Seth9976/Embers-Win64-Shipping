// 函数: sub_14091dd80
// 地址: 0x14091dd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1f9c0
sub_14091a7e0(&arg1[0x19])
arg1[0x18].d = 0
int64_t rcx_1 = arg1[0x17]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_14091acc0(&arg1[0xf])
arg1[0xe].d = 0
int64_t rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_14091ae70(&arg1[5])
*arg1 = &data_142e1f8f0
sub_140596eb0(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
