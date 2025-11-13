// 函数: sub_1417ff040
// 地址: 0x1417ff040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe1cc0
arg1[0x1b].d = 0
int64_t rcx = arg1[0x1a]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140681eb0(&arg1[0x12])
int64_t rcx_2 = arg1[0xf]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xb]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140745b20(&arg1[9])
sub_140745b20(&arg1[7])
sub_140745b20(&arg1[5])
sub_140745b20(&arg1[3])
int64_t* rcx_9 = arg1[2]

if (rcx_9 != 0)
    int32_t temp0_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
