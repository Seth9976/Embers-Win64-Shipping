// 函数: sub_142383a00
// 地址: 0x142383a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336938
int64_t* rcx = arg1[2]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx, 1)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
