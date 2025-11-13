// 函数: sub_14204b880
// 地址: 0x14204b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432aae68
sub_142065820(arg1)
int32_t i_1 = arg1[0x25].d
int64_t* rbx = arg1[0x24]

if (i_1 != 0)
    int32_t i
    
    do
        sub_140745b20(rbx)
        rbx = &rbx[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x24]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_2 = arg1[0x22]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1420574a0(&arg1[0x1a], 0)
int64_t rcx_4 = arg1[0x1e]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x16]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
