// 函数: sub_140e9fb00
// 地址: 0x140e9fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142edb430
sub_140745b20(&arg1[0x1b])
sub_140d94cb0(&arg1[0x19])
sub_140d94cb0(&arg1[0x17])
arg1[0x16].d = 0
int64_t rcx_3 = arg1[0x15]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140eb8980(&arg1[0xd], 0)
int64_t rcx_5 = arg1[0x11]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0xd]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0xc].d = 0
int64_t rcx_7 = arg1[0xb]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

arg1[4].d = 0

if (*(arg1 + 0x24) != 0)
    sub_1405a5410(&arg1[3], 0)

arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
sub_14059a8e0(&arg1[5], 0)
int64_t rcx_10 = arg1[7]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[3]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rcx_12 = arg1[2]

if (rcx_12 != 0)
    int32_t temp0_1 = *(rcx_12 + 0xc)
    *(rcx_12 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_12 + 8))(rcx_12, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
