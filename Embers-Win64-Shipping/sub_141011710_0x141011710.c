// 函数: sub_141011710
// 地址: 0x141011710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efd980
arg1[0xf][2](&arg1[0xf])
int64_t* rcx_1 = arg1[0x17]

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1 && rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)

sub_14100dfc0(&arg1[0x15])
sub_1419948a0(&arg1[0xf])
*arg1 = &data_142ef57c0
sub_140fda0a0(&arg1[0xc])
int64_t rcx_5 = arg1[9]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
