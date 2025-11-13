// 函数: sub_141a364f0
// 地址: 0x141a364f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

*arg1 = &data_142d4ba10

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
