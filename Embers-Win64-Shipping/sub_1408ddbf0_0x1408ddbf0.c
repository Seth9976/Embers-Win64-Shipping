// 函数: sub_1408ddbf0
// 地址: 0x1408ddbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e11958
arg1[0x6e] = &data_142dd5bb0
sub_14081d280(&arg1[0x75])
sub_14081c9d0(&arg1[0x74])
sub_140a1d5c0(&arg1[0x71])
arg1[0x70] = &data_142da7708
sub_1419948a0(&arg1[0x6e])
arg1[0x4d] = &data_142dda848
sub_1405d1550(&arg1[0x4f])
sub_1419948a0(&arg1[0x4d])
sub_14081d2f0(&arg1[0x27])
arg1[0x23] = &data_142e0ef98
sub_14081c9d0(&arg1[0x25])
sub_1419948a0(&arg1[0x23])
arg1[0x1f] = &data_142dda848
sub_1405d1550(&arg1[0x21])
sub_1419948a0(&arg1[0x1f])
arg1[0x1b] = &data_142dda848
sub_1405d1550(&arg1[0x1d])
sub_1419948a0(&arg1[0x1b])
arg1[0x17] = &data_142dda848
sub_1405d1550(&arg1[0x19])
sub_1419948a0(&arg1[0x17])
arg1[0x13] = &data_142dda848
sub_1405d1550(&arg1[0x15])
sub_1419948a0(&arg1[0x13])
int64_t i_1 = 2
void* rbx_1 = &arg1[0x10]
int64_t i

do
    rbx_1 -= 0x20
    *rbx_1 = &data_142dda848
    sub_1405d1550(rbx_1 + 0x10)
    sub_1419948a0(rbx_1)
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rcx_19 = arg1[6]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
