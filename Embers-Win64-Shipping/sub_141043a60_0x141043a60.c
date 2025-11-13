// 函数: sub_141043a60
// 地址: 0x141043a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f00970

if (data_1439b4ad4 != 0 && arg1[7] != 0)
    sub_14101f400(&arg1[2][0x122], &arg1[6])

int64_t rcx_2 = arg1[0x1c]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rcx_3 = arg1[5]

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1 && rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)

int64_t* rcx_4 = arg1[4]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
