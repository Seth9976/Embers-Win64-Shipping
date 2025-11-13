// 函数: sub_1419c4ef0
// 地址: 0x1419c4ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[8]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1 && rcx != 0)
        (**rcx)(rcx, 1)

*arg1 = &data_14300e038
arg1[2] = &data_14300e090
int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_14100dda0(&arg1[3])
arg1[2] = &data_142d5a090
sub_1419948a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
