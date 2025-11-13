// 函数: sub_141b4cb60
// 地址: 0x141b4cb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14306c3b0
arg1[1] = &data_14306c3e0
arg1[0xc] = &data_14306c408
sub_1405a46b0(&data_14399fce8, arg1)
sub_140d21f60()
sub_1405a46b0(&data_1439aad48, arg1)

if (data_143f0f19c != 0)
    sub_1419a21e0(0)
    sub_141b54430(arg1)

arg1[0x4a] = &data_142d3ff10
int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

int64_t r8
r8.b = 1
(*(*rcx_1 + 0xa8))(rcx_1, arg1[0x4b], r8)
int64_t rcx_2 = arg1[0x48]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x43]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x41]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140596d80(&arg1[0x3f])
sub_140596d80(&arg1[0x3d])
sub_140596d80(&arg1[0x3b])
sub_141b4aa80(&arg1[0x13])
DeleteCriticalSection(&arg1[0xd])
sub_1423bb350(&arg1[0xc])
arg1[1] = &data_14306c200
sub_141b4fbd0(&arg1[1])
sub_1405ae080(&arg1[2])
*arg1 = &data_142dd6680

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
