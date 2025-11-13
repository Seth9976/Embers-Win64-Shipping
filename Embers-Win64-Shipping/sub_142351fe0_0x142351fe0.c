// 函数: sub_142351fe0
// 地址: 0x142351fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14332bca8
int64_t* rcx = arg1[7]

if (rcx != 0)
    (**rcx)(rcx, 1)

void*** rbx = arg1[0x3f]

if (rbx != 0)
    sub_142351cf0(rbx)
    j_sub_140a74f90(rbx)

arg1[0x57] = &data_14332bc00
sub_1405ec8a0(&arg1[0x5a])
sub_1405d1550(&arg1[0x59])
sub_1419948a0(&arg1[0x57])
sub_142351a30(&arg1[0x55])
int64_t* rcx_7 = arg1[0x54]

if (rcx_7 != 0)
    rcx_7[1].d -= 1
    
    if (rcx_7[1].d == 1 && rcx_7 != 0)
        (**rcx_7)(rcx_7, 1)

arg1[0x4e] = &data_142da8048
sub_140a1d5c0(&arg1[0x51])
sub_140a1d5c0(&arg1[0x4f])
arg1[0x40] = &data_142dd5bb0
sub_14081d280(&arg1[0x47])
sub_14081c9d0(&arg1[0x46])
sub_140a1d5c0(&arg1[0x43])
arg1[0x42] = &data_142da7708
sub_1419948a0(&arg1[0x40])
sub_140a1d5c0(&arg1[0x3b])
arg1[0x3a] = &data_142da7708
arg1[0x37] = &data_142e0ef98
sub_14081c9d0(&arg1[0x39])
sub_1419948a0(&arg1[0x37])
sub_140a1d5c0(&arg1[0x33])
arg1[0x32] = &data_142da7708
arg1[0x2f] = &data_142e0ef98
sub_14081c9d0(&arg1[0x31])
sub_1419948a0(&arg1[0x2f])
sub_142289b70(&arg1[0x27])
sub_142289c80(&arg1[0x1f])
sub_1422b5620(&arg1[0xe])
int64_t result = sub_140bc0410(&arg1[0xa])
int64_t rcx_24 = arg1[5]

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
