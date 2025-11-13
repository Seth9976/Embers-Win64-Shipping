// 函数: sub_142383820
// 地址: 0x142383820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336940
sub_140a4fc50(arg1[0x26])
arg1[0x26] = 0
int64_t rcx_1 = arg1[0x1b]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x19]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x17]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_142381480(&arg1[1])
*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
