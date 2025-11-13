// 函数: sub_141d33440
// 地址: 0x141d33440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432227f8
arg1[0x1c].d = 0
int64_t rcx = arg1[0x1b]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1408d6a20(&arg1[0x13])
int64_t rcx_2 = arg1[0x10]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0xe].d = 0
int64_t rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1408d6a20(&arg1[5])
int64_t rcx_5 = arg1[2]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
