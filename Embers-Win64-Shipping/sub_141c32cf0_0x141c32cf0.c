// 函数: sub_141c32cf0
// 地址: 0x141c32cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432050f8
int64_t* rcx = arg1[2]

if (rcx != 0)
    if (rcx[-1] == 0)
        j_sub_140a74f90(&rcx[-1])
    else
        (**rcx)(rcx, 3)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
