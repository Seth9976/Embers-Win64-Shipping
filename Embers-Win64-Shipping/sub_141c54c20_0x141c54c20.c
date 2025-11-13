// 函数: sub_141c54c20
// 地址: 0x141c54c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[3]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax_1 == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

*arg1 = &data_142d42cf8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
