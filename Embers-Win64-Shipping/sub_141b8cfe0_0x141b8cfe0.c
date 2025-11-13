// 函数: sub_141b8cfe0
// 地址: 0x141b8cfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xb]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
