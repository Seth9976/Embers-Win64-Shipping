// 函数: sub_141fa9070
// 地址: 0x141fa9070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[9].b != 0)
    arg1[9].b = 0
    arg1[5] = &data_142d5a028

*arg1 = &data_14328e970
int64_t* rcx = arg1[2]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
