// 函数: sub_140ace9d0
// 地址: 0x140ace9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[2]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

*arg1 = &data_142e2dc48

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
