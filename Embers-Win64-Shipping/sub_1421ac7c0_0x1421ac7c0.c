// 函数: sub_1421ac7c0
// 地址: 0x1421ac7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432eeaf0
arg1[0xe].d = 0

if (*(arg1 + 0x74) s<= 0xffffffff)
    sub_140775c70(&arg1[0xd], 0)

int64_t rcx_1 = arg1[0xf]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xd]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_1432e4248

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_1421ab4f0(arg1, 0x190)
return arg1
