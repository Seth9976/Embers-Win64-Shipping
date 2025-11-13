// 函数: sub_14232f010
// 地址: 0x14232f010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143328c38
int64_t* rcx = arg1[0x22]

if (rcx != 0)
    sub_142336f40(rcx)

arg1[0x22] = 0
int64_t* rcx_1 = arg1[0x23]

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

sub_14232b620(&arg1[0x20])
sub_1408081b0(&arg1[0x1c])
sub_1405ec8a0(&arg1[0x1e])
sub_1405d1550(&arg1[0x1d])
sub_1405d1550(&arg1[0x1c])
arg1[0xe] = &data_142dd5bb0
sub_14081d280(&arg1[0x15])
sub_14081c9d0(&arg1[0x14])
sub_140a1d5c0(&arg1[0x11])
arg1[0x10] = &data_142da7708
sub_1419948a0(&arg1[0xe])
sub_14232bd50(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
